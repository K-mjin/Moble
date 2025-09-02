#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	Mat src = imread("cat.png");
	if (src.empty()) {
		cerr << "이미지를 가져오지 못함" << endl;
		return -1;
	}
	imshow("src", src);
	Mat dst;
	int flipCode[] = { 1, 0, -1 };
	flip(src, dst, flipCode[0]);
	imshow("dst1", dst);
	flip(src, dst, flipCode[1]);
	imshow("dst2", dst);
	flip(src, dst, flipCode[2]);
	imshow("dst3", dst);
	
	waitKey();
	destroyAllWindows();
}