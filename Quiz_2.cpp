#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

Point2f src[3];
int idx = 0;
Mat img_color;
int Mouse_Callback(int event, int x, int y, int z) {
	if (event == EVENT_LBUTTONDOWN) {
		src[idx] = Point2f(x, y);
		idx++;
		cout << "( " << x << ", " << y << " )" << endl;;
		circle(img_color, Point2f(x, y), 3, Scalar(0, 0, 255), 1);
	}
}
int main() {
	namedWindow("background.png");
	setMouseCallback("background.png", Mouse_Callback);
	img_color = imread("background.png");

	while (true)
	{
		imshow("background", img_color);
		if (waitKey(1) == 32)
		{
			break;
		}
	}

	Point2f dst[3];
	dst[0] = src[0];
	dst[1] = Point2f(src[1].x, src[1].y + 150);
	dst[2] = src[2];

	Mat M = getAffineTransform(src, dst);

	Mat result;
	warpAffine(img_color, result, M, Size(img_color.rows, img_color.cols));
	imshow("result", result);

	waitKey(0);
	return 0;
}
