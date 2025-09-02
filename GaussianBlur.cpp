#include <opencv2/opencv.hpp>
using namespace cv;
int main() {
	Mat img;
	img = imread("cat.png");
	Mat img_blur;
	GaussianBlur(img, img_blur, Size(3, 3), 0);
	imshow("Original", img);
	imshow("Result",img_blur);
	waitKey(0);
}