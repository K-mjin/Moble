#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	Mat src = imread("CGV.jpg", IMREAD_GRAYSCALE);
	if (src.empty()) {
		cout << "�̹����� �ҷ��� �� ����" << endl;
		return -1;
	}
	imshow("src", src);
	float data[] = { -1, -1, 0, -1, 0, 1, 0, 1, 1 };
	Mat emboss(3, 3, CV_32FC1, data);

	Mat dst;
	filter2D(src, dst, -1, emboss, Point(-1, -1), 128);

	imshow("src", src);
	imshow("dst", dst);

	waitKey(0);
	destroyAllWindows();
}