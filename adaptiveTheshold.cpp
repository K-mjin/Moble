#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	Mat img_color;
	img_color = imread("copy.png", IMREAD_COLOR);
	if (img_color.empty()) {
		cout << "�̹��� ������ ���� �� �����ϴ�." << endl;
		return -1;
	}
	Mat img_gray;
	cvtColor(img_color, img_gray, COLOR_BGR2GRAY);

	Mat img_binary;
	adaptiveThreshold(img_gray, img_binary, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY, 9, 4);
	imshow("Grayscale", img_gray);
	imshow("Binary", img_binary);
	waitKey(0);
}