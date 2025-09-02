#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

static void on_trackbar(int, void*) {

}
int main() {
	Mat img_gray;
	Mat img_canny;
	VideoCapture cap(0);
	if (!cap.isOpened()) {
		cout << "ī�޶� �� �� �����ϴ�." << endl;
		return -1;
	}
	namedWindow("Canny");
	createTrackbar("low threshold", "Canny", 0, 1000, on_trackbar);
	createTrackbar("high threshold", "Canny", 0, 1000, on_trackbar);
	setTrackbarPos("low threshold", "Canny", 50);
	setTrackbarPos("high threshold", "Canny", 150);
	while (1) {
		bool ret = cap.read(img_gray);
		if (!ret) {
			cout << "ĸ�� ����" << endl;
			break;
		}
		int low = getTrackbarPos("low threshold", "Canny");
		int high = getTrackbarPos("high threshold", "Canny");
		Canny(img_gray, img_canny, low, high);
		imshow("Color", img_gray);
		imshow("Canny", img_canny);

		if (waitKey(1) == 27)
			break;
	}
	return 0;
}