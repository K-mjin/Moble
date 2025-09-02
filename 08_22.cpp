#include<opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

bool mouse_is_pressing = false;
int start_x, start_y, end_x, end_y;
int step = 0;
Mat img_color;

//오른쪽 아래에서 왼쪽 위로 그릴 경우 swap을 해주게 된다.
void swap(int* v1, int* v2) {
	int temp = *v1;
	*v1 = *v2;
	*v2 = temp;
}

//마우스 이벤트를 사용하기 위해서 콜백 함수를 선언해준다.
 //마우스 왼쪽 버튼을 누르면 ROI 시작점이 되고
//마우스 왼쪽 버튼을 떼면  ROI 끝점이 된다.
 //마우스 이동 시 ROI 영역을 초록색 사각형으로 보여준다.
void mouse_callback(int event, int x, int y, int flags, void* param) {
	if (event == EVENT_LBUTTONDOWN) {
		step = 1;
		mouse_is_pressing = true;
		start_x = x;
		start_y = y;
	}
	else if (event == EVENT_MOUSEMOVE) {
		if (mouse_is_pressing) {
			end_x = x;
			end_y = y;
			step = 2;
		}
	}
	else if (event == EVENT_LBUTTONUP) {
		mouse_is_pressing = false;
		end_x = x;
		end_y = y;
		step = 3;
	}

}

int main(void) {
	VideoCapture cap(0,CAP_DSHOW);
	if (!cap.isOpened()) {
		cout << "에러 - 카메라를 열 수 없습니다." << endl;
		return -1;
	}
	namedWindow("Color");
	setMouseCallback("Color", mouse_callback);

	while (true)
	{
		bool ret = cap.read(img_color);
		if (!ret)
		{
			cout << "캡쳐 실패" << endl;
			return -1;
		}

		switch (step)
		{
		case 1:
			circle(img_color, Point(start_x, start_y), 10, Scalar(0, 255, 0), -1);
			break;
			//마우스를 누른 채 움직이고 있는 영역을 초록색 사각형으로 보여준다.
		case 2:
			rectangle(img_color, Point(start_x, start_y), Point(end_x, end_y), Scalar(0, 255, 0), 3);
			break;
			//마우스 왼쪽 버튼을 떼면 캐니 에지 검출 발생
			//swap은 시작점보다 끝점이 큰 경우, 즉 마우스 크기지정을
			//위쪽 대각선으로 잡은 경우 swap을 통해 시작점 아래쪽 대각선으로 ROI를
			//지정한 것으로 값을 변경하기 위해 사용
		case 3:
			if ((0 < end_x && end_x < img_color.cols) && (0 < end_y && end_y < img_color.rows)) {
				if (start_x > end_x)
					swap(&start_x, &end_x);
				if (start_y > end_y)
					swap(&start_y, &end_y);

				//마우스 왼쪽 버튼에서 손을 떼고 나서 ROI를 지정
			    //Rect는 시작점 x, 시작점y, 너비, 높이 순으로 아규먼트를 지정한다.
				Mat ROI(img_color, Rect(start_x, start_y, end_x - start_x, end_y - start_y));

				//ROI를 그레이 스케일로 변환하여 에지를 검출한 후 다시 컬러 이미지로 변환
				//원본 이미지가 컬러 영상이라 복사(무한반복 상황에서 다시 원상태로 복귀)하려면
				//컬러로 다시 변환해줘야함
				cvtColor(ROI, ROI, COLOR_BGR2GRAY);
				Canny(ROI, ROI, 150, 50); //캐니에지
				//threshold(ROI, ROI, 127, 255, THRESH_BINARY);//이진화
				adaptiveThreshold(ROI, ROI, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY, 5, 4);//적응형이진화
				cvtColor(ROI, ROI, COLOR_GRAY2BGR);
				//원본영상에 ROI영역을 복사
				ROI.copyTo(img_color(Rect(start_x, start_y, end_x - start_x, end_y - start_y)));
			}
			break;
		}//switch문 끝
		imshow("Color", img_color);

		if (waitKey(25) > 0)
			break;
	} 
	cap.release();
	return 0;
}