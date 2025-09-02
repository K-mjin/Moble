#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

static void on_trackbar(int, void*) {
}
int main() {
	Mat img_color;
	VideoCapture cap(0);
	if (!cap.isOpened()) {
		cout << "ī�޶� �� �� �����ϴ�." << endl;
		return -1;
	}
	Mat img_gray;
	Mat img_binary;
	namedWindow("Binary");
	createTrackbar("threshold", "Binary", 0, 255, on_trackbar);
	setTrackbarPos("threshold", "Binary", 127);
	while (1) {
		bool ret = cap.read(img_color);
		if (!ret) {
			cout << "ĸ�� ����" << endl;
			break;
		}
		cvtColor(img_color, img_gray, COLOR_BGR2GRAY);
		int thresh = getTrackbarPos("threshold", "Binary");
		threshold(img_gray, img_binary, thresh, 255, THRESH_BINARY);
		imshow("Color", img_color);
		imshow("Grayscale", img_gray);
		imshow("Binary", img_binary);
		if (waitKey(1) == 27)
			break;
	}
	cap.release();
	return 0;
}