#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	Mat img_color;
	img_color = imread("cell.jpg", IMREAD_COLOR);
	if (img_color.empty()) {
		cout << "������ ������ �п� �� �����ϴ�." << endl;
		return -1;
	}
	Mat img_gray;
	cvtColor(img_color, img_gray, COLOR_BGR2GRAY);
	Mat img_binary;
	threshold(img_gray, img_binary, 0, 255, THRESH_BINARY | THRESH_OTSU);
	imshow("Grayscale", img_gray);
	imshow("Binary", img_binary);
	waitKey(0);
}