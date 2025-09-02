#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main() {
	Mat img_color;
	img_color = imread("star.png", IMREAD_GRAYSCALE);
	imshow("original", img_color);

	Mat img_copyed1(img_color);
	Mat img_copyed2(img_color);
	threshold(img_color, img_color, 3, 255, THRESH_BINARY);

	imshow("img_color", img_color);
	imshow("img_copyed1", img_copyed1);
	imshow("img_copyed2", img_copyed2);
	waitKey(0);
}