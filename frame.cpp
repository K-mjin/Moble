#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
	Mat img_frame;

	VideoCapture cap(0);

	if (!cap.isOpened()) {
		cout << "카메라를 열 수 없습니다." << endl;
		return -1;
	}
	while (1) {
		bool ret = cap.read(img_frame);
		if (!ret) {
			cout << "캡쳐 실패" << endl;
			break;
		}
		imshow("Color", img_frame);
		int key = waitKey(1);	//1ms동안 키입력을 기다림
		if (key == 27)	//ESC키가 입력되었다면 반복을 중지
			break;
	}
	cap.release();
	return 0;
}