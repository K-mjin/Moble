#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	VideoCapture cap(0);
	if (!cap.isOpened()) {
		cout << "ī�޶� �� �� �����ϴ�." << endl;
		return -1;
	}
	Mat img_color;

	while (1) {
		bool ret = cap.read(img_color);
		if (!ret) {
			cout << "ĸ�� ����" << endl;
			break;
		}
		if (img_color.empty()) {
			cout << "�̹��� ������ ���� �� �����ϴ�." << endl;
			return -1;
		}
		Mat img_gray;
		cvtColor(img_color, img_gray, COLOR_BGR2GRAY);
		Mat img_binary;
		threshold(img_gray, img_binary, 127, 255, THRESH_BINARY_INV);
		imshow("Color", img_color);
		imshow("Grayscale", img_gray);
		imshow("Binary", img_binary);
		if (waitKey(1) == 27)
			break;
	}
	destroyAllWindows();
}