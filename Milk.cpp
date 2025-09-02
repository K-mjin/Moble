#include<opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	Mat src = imread("milk1.png", IMREAD_COLOR);
	if (src.empty()) {
		cout << "�̹����� �ҷ��� �� ����" << endl;
		return -1;
	}
	Mat src1;
	cvtColor(src, src1, COLOR_BGR2GRAY);
	Mat dst;
	threshold(src1, dst, 0, 255, THRESH_BINARY | THRESH_OTSU);
	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));

	Mat dst1, dst2;
	erode(dst, dst1, kernel, Point(-1, -1), 1);
	dilate(dst, dst2, kernel, Point(-1, -1), 1);

	imshow("src", src);
	imshow("dsr", dst);
	imshow("erode", dst1);
	imshow("dilate", dst2);

	waitKey();
	return 0;
	destroyAllWindows();
}