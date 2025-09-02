#include <opencv2/opencv.hpp>
using namespace cv;

int main() {
	Mat img_background, img_object;
	img_background = imread("circle.jpg", IMREAD_GRAYSCALE);
	// lena�� ���� �� �̹����� �׷��̽� �����Ϸ� �ҷ���
	img_object = imread("lena1.jpg", IMREAD_GRAYSCALE);
	Mat img_sub;
	subtract(img_object, img_background, img_sub);
	Mat img_binary;
	threshold(img_sub, img_binary, 50, 255, THRESH_BINARY);
	imshow("object", img_object);
	imshow("background", img_background);
	imshow("sub", img_sub);
	imshow("binary", img_binary);
	waitKey(0);
	return 0;
}