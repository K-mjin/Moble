#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	Mat img_color;
	img_color = imread("grayscale.png", IMREAD_COLOR);
	if (img_color.empty()) {
		cout << "이미지 파일을 읽울 수 없습니다." << endl;
		return -1;
	}
	Mat img_gray;
	cvtColor(img_color, img_gray, COLOR_BGR2GRAY);
	Mat img_binary;
	double thresh_val = threshold(img_gray, img_binary, 0, 255, THRESH_BINARY | THRESH_OTSU);
	cout << "Triangle Threshold 값 : " << thresh_val << endl;
	//threshold(img_gray, img_binary, 127, 255, THRESH_BINARY_INV);

	imshow("Grayscale", img_gray);
	imshow("Binary", img_binary);
	waitKey(0);
}