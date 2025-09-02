#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
int main() {
	Mat img;
	img = imread("cat.png");
	Mat kernel = Mat(7, 7, CV_32F, Scalar(1 / 49.0));
	Mat dst;
	filter2D(img, dst, -1, kernel);
	imshow("Original", img);
	imshow("Result", dst);
	waitKey(0);
}