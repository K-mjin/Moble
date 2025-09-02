#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	// Scalar ��ü ����
	Scalar gray(128); // �׷��̽����� ��
	Scalar blue(255, 0, 0);
	Scalar green(0, 255, 0);
	Scalar red(0, 0, 255);
	Scalar transparent(0, 0, 255, 50);

	// Scalar �� ���
	cout << "Gray : " << gray << endl;
	cout << "Blue : " << blue << endl;
	cout << "Green : " << green << endl;
	cout << "Red : " << red << endl;
	cout << "Transparent Red : " << transparent << endl;

	// Scalar�� ����Ͽ� �̹��� ����
	Mat img1(100, 100, CV_8UC3, transparent);
	imshow("Blue image", img1);
	waitKey(0);

	return 0;
}