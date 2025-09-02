#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	Mat img1, img2;
	
		img1 = imread("4545.png", IMREAD_COLOR);
		img2 = imread("1212.png", IMREAD_COLOR);

		Mat dst;
		addWeighted(img1, 0.7, img2, 0.4, 0, dst);
		
		imshow("dst", dst);
		waitKey(0);
		
	return 0;
}