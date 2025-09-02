#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	Mat img;
	img = imread("KimGu.png");
	Mat kernel = Mat(5, 5, CV_32F, Scalar(1 / 25.0));

	Mat img_filter, img_Gaus;
	Mat img_blur;

	filter2D(img, img_filter, -1, kernel);
	blur(img, img_blur, Size(5, 5));
	GaussianBlur(img, img_Gaus, Size(5, 5), 0);

	imshow("Orig", img);
	imshow("filter2D", img_filter);
	imshow("Blur", img_blur);
	imshow("Gaussian", img_Gaus);
	cvtColor(img, img, COLOR_BGR2GRAY);
	cvtColor(img_filter, img_filter, COLOR_BGR2GRAY);
	cvtColor(img_blur, img_blur, COLOR_BGR2GRAY);
	cvtColor(img_Gaus, img_Gaus, COLOR_BGR2GRAY);

	//�� �̹����� ĳ�Ͽ��� ����
	Canny(img, img, 50, 255);
	Canny(img_filter, img_filter, 50, 255);
	Canny(img_blur, img_blur, 50, 255);
	Canny(img_Gaus, img_Gaus, 50, 255);
	imshow("Canny Orig", img);
	imshow("Canny Filter", img_filter);
	imshow("Canny Blur", img_blur);
	imshow("Canny Gaussian", img_Gaus);
	waitKey(0);
}