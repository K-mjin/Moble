#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int start_x, start_y, end_x, end_y;
int step = 0;
// 마우스 이벤트의 시작/끝 좌표 및 현재 단계를 저장하는 변수

Mat img_color;
void swap(int& v1, int& v2) {	// 함수의 매개변수 x와 y는 참조(reference) 타입
	int temp = v1;					// x와 y는 함수 호출 시 전달되는 실제 변수의 또 다른 이름이 됨
	v1 = v2;							// x가 참조하는(즉, 실제 원본 변수의) 현재 값을 임시 변수 temp에 저장
	v2 = temp;						//x의 값을 잃지 않으면서 x에 새로운 값을 할당하기 위해 필수적
}

// 마우스 이벤트 콜백 함수
// 이 함수는 "Color" 창에서 마우스 이벤트가 발생할 때마다 호출
// e: 발생한 마우스 이벤트 타입 (예: EVENT_LBUTTONDOWN, EVENT_MOUSEMOVE, EVENT_LBUTTONUP)
// x, y: 마우스 커서의 현재 x, y 좌표
// f: 마우스 이벤트 발생 시 눌려진 플래그 (예: EVENT_FLAG_LBUTTON)
// void*: 사용자 데이터 (여기서는 사용하지 않음)
void mouse_callback(int event, int x, int y, int flags, void*) {
	if (event == EVENT_LBUTTONDOWN) {	// 마우스 왼쪽 버튼을 눌렀을 때
		step = 1;
		start_x = x;	// 시작 x 좌표 저장
		start_y = y;	// 시작 y 좌표 저장
	}
	else if (event == EVENT_MOUSEMOVE && flags == EVENT_FLAG_LBUTTON) {
		end_x = x;	// 현재 x 좌표를 끝 x 좌표로 저장
		end_y = y;	// 현재 y 좌표를 끝 y 좌표로 저장 
		step = 2;		// 단계를 2로 설정 (사각형 그리기 중)
	}
	else if (event == EVENT_LBUTTONUP) {
		end_x = x;	// 최종 x 좌표 저장
		end_y = y;	// 최종 y 좌표 저장
		step = 3;
	}
}

int main() {
	VideoCapture cap(0);
	if (!cap.isOpened()) {
		cout << "에러 - 카메라를 열 수 없습니다.\n" << endl;
		return -1;
	}
	namedWindow("Color");

	// 마우스 이벤트가 발생하면 cb_ms 함수가 호출
	setMouseCallback("Color", mouse_callback);

	while (true) {
		bool ret = cap.read(img_color);
		if (!ret) {
			cout << "캡쳐 실패\n"<<endl;
			return -1;
		}

		// 프레임의 높이와 너비
		int h = img_color.rows;
		int w = img_color.cols;

		// step 값에 따라 다른 작업을 수행
		switch (step) {
		// 마우스 왼쪽 버튼을 누른 상태 (시작점 표시)
		// 시작점에 녹색 원을 그림
		// frame: 그림을 그릴 이미지
		// Point(start_x, start_y): 원의 중심 좌표
		// 10: 원의 반지름
		// Scalar(0, 255, 0): 원의 색상 (BGR 순서: 파랑, 초록, 빨강) -> 여기서는 녹색
		// -1: 원을 채울 것인지 (음수) 아니면 테두리만 그릴 것인지 (양수) -> -1은 채우기
		case 1:
			circle(img_color, Point(start_x, start_y), 10, Scalar(0, 255, 0), -1);	// 공 그리기
			break;
		case 2:
			rectangle(img_color, Point(start_x, start_y), Point(end_x, end_y), Scalar(0, 255, 0), 3);	// 사각형 그리기
			break;
		case 3:
			if (end_x < 0)
				end_x = 0;
			if (end_y < 0)
				end_y = 0;
			if (end_x > w)
				end_x = w;
			if (end_y > h)
				end_y = h;
			if (start_x > end_x)
				swap(start_x, end_x);
			if (start_y > end_y)
				swap(start_y, end_y);
			if (start_x == end_x && start_y == end_y) {
				end_x += 1;
				end_y += 1;
			}

			Mat ROI(img_color, Rect(start_x, start_y, end_x - start_x, end_y - start_y));
			cvtColor(ROI, ROI, COLOR_BGR2GRAY);
			Canny(ROI, ROI, 150, 50);
			cvtColor(ROI, ROI, COLOR_GRAY2BGR);
			ROI.copyTo(img_color(Rect(Point(start_x, start_y), Point(end_x, end_y))));
			break;
 break;
		}
		imshow("Color", img_color);
		if (waitKey(25) > 0)
			break;
	}
	cap.release();
	destroyAllWindows();
	return 0;
}