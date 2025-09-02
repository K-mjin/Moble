#include <opencv2/opencv.hpp>
using namespace cv;
int main() {
	Mat img;
	img = imread("orange.png");
	
	Mat img_blur;
	blur(img, img_blur, Size(3, 3));
	imshow("Original", img);
	imshow("Result", img_blur);
	waitKey(0);
}