#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	Mat img_color = imread("house.png");
	Mat img_gray;
	cvtColor(img_color, img_gray, COLOR_BGR2GRAY);

	GaussianBlur(img_gray, img_gray, Size(5, 5), 0);

	Mat img_sobel_x;
	Sobel(img_gray, img_sobel_x, CV_64F, 1, 0, 3);
	convertScaleAbs(img_sobel_x, img_sobel_x);

	Mat img_sobel_y;
	Sobel(img_gray, img_sobel_y, CV_64F, 0, 1, 3);
	convertScaleAbs(img_sobel_y, img_sobel_y);

	Mat img_sobel;
	addWeighted(img_sobel_x, 1, img_sobel_y, 1, 0, img_sobel);

	Mat img_sobel;
	addWeighted(img_sobel_x, 1, img_sobel_y, 1, 0, img_sobel);

	imshow("Sobel X", img_sobel_x);
	imshow("Sobel Y", img_sobel_y);
	imshow("Sobel", img_sobel);

	Mat img_edge1, img_edge2, img_edge3;
	Canny(img_sobel, img_edge1, 50, 100, 3);
	Canny(img_sobel, img_edge2, 50, 150, 3);
	Canny(img_sobel, img_edge3, 50, 200, 3);
	imshow("Original", img_edge1);
	imshow("Canny Edge1", img_edge2);
	imshow("Canny Edge2", img_edge3);
	imshow("Canny Edge3", img_edge3);
	waitKey(0);
	return 0;
}