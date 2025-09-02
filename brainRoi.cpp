#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main() {
	Mat img_color;
	img_color = imread("brain.bmp", IMREAD_COLOR);
	imshow("img_color1", img_color);
	Rect r(100, 100, 20, 20);
	Mat roi = img_color(r);
	roi = Scalar(0, 0, 255);
	imshow("ROI", img_color);
	cout << "���� �� = " << roi.rows << endl;
	cout << "���� �� = " << roi.cols << endl;
	cout << "roi = " << endl << roi << endl << endl;
	waitKey(0);
}