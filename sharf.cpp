#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main(void) {
	Mat src = imread("rose_png.png", IMREAD_COLOR);
	if (src.empty()) {
		cout << "�̹����� �ҷ��� �� ����" << endl;
		return -1;
	}
	imshow("src", src);
	Mat src1;
	cvtColor(src, src1, COLOR_BGR2GRAY);
	for (int sigma = 1; sigma <= 5; sigma++) {
		Mat dst;
		GaussianBlur(src1, dst, Size(), sigma);
		imshow("dst", dst);
		float alpha = 1.f;
		Mat dst1 = (1 + alpha) * src1 - alpha * dst;

		string dsrc = format("sigma : %d", sigma);
		putText(dst1, dsrc, Point(10, 30), FONT_HERSHEY_SCRIPT_SIMPLEX, 1.0, Scalar::all(255), 1, LINE_AA);
		imshow("dst1", dst1);
		waitKey();
	}
	destroyAllWindows();
}