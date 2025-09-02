#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

bool mouse_is_pressing = false;
int start_x, start_y, end_x, end_y;
int step = 0;
// ������ �̹��� ó�� ȿ���� �����ϴ� ����
// 1: Canny ���� ����
// 2: ������ ����ȭ
// 3: ��� ���� ä���
int step1 = 1;
Mat img_color;

void swap(int* v1, int* v2) {
	int temp = *v1;
	*v1 = *v2;
	*v2 = temp;
}

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

int main() {
	VideoCapture cap(0, CAP_DSHOW);
	if (!cap.isOpened()) {
		cout << "����- ī�޶� �� �� �����ϴ�.\n";
		return-1;
	}
	namedWindow("Color");
	setMouseCallback("Color", mouse_callback);
	while (1)
	{
		cap.read(img_color);
		if (img_color.empty()) {
			cout << "ĸ�� ����\n";
			break;
		}
		int h = img_color.rows;
		int w = img_color.cols;

		switch (step) {
		case 1:
			circle(img_color, Point(start_x, start_y), 10, Scalar(0, 255, 0), -1);
			break;
		case 2:
			rectangle(img_color, Point(start_x, start_y), Point(end_x, end_y), Scalar(0, 255, 0), 3);
			break;
		case 3:
			if (end_x < 0) end_x = 0;
			if (end_y < 0) end_y = 0;
			if (end_x > w) end_x = w;
			if (end_y > h) end_y = h;
			if (start_x > end_x) {
				swap(&start_x, &end_x);
			}
			if (start_y > end_y) {
				swap(&start_y, &end_y);
			}
			else if (start_x == end_x || start_y == end_y) {
				end_x = start_x + 1;
				end_y = start_y + 1;
			}
			Mat ROI(img_color, Rect(start_x, start_y, end_x - start_x, end_y - start_y));
			//Ű���� 1��=>Canny
			if (step1 == 1) {
				cvtColor(ROI, ROI, COLOR_BGR2GRAY);
				Canny(ROI, ROI, 150, 50);
				cvtColor(ROI, ROI, COLOR_GRAY2BGR);
			}
			//Ű���� 2��=>������ ����ȭ
			if (step1 == 2) {
				cvtColor(ROI, ROI, COLOR_BGR2GRAY);
				// ADAPTIVE_THRESH_MEAN_C: �̿� �ȼ��� ����� �Ӱ谪���� ���
			   // 5: ��� ũ�� (�Ӱ谪�� ����� �̿� �ȼ��� ũ��, Ȧ������ ��
			   // 4: C (��տ��� �� ��� ��)
				adaptiveThreshold(ROI, ROI, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY, 5, 4);
				cvtColor(ROI, ROI, COLOR_GRAY2BGR);
			}
			//Ű���� 3��=>��ջ�
			if (step1 == 3) {
				// ROI ������ ��� �ȼ��� ���� ��� �������� ä��
				Scalar m = mean(ROI);
				ROI = m;
			}
			ROI.copyTo(img_color(Rect(start_x, start_y, end_x - start_x, end_y - start_y)));
			break;
		}
		imshow("Color", img_color);
		int key = waitKey(1);
		if (key == 'q' || key == 27) { // 'q' Ű �Ǵ� ESC Ű(ASCII 27)�� ������ ������ ����
			break;
		}
		else if (key == '1') {
			step1 = 1; // Canny edge detection
		}
		else if (key == '2') {
			step1 = 2; // Adaptive thresholding
		}
		else if (key == '3') {
			step1 = 3; // Average color
		}
	}
	cap.release(); //��ķ ĸó ��ü�� �����Ͽ� �ý��� ���ҽ�(��ķ ��ġ)�� ��ȯ
	// ������ ��� OpenCV GUI â�� �ݽ��ϴ�.
	destroyAllWindows();
	return 0;
}