#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>
using namespace cv;
using namespace std;

int main() {
	VideoCapture cap(0, CAP_DSHOW);
	if (!cap.isOpened()) {
		cout << " ���� - ī�޶� �� �� �����ϴ�.\n";
		return -1;
	}
	Mat img;
	int point = 1;
	while (true) {
		bool ret = cap.read(img);
		Mat img_blur = img.clone();
		Mat img_gblur = img.clone();
		blur(img, img_blur, Size(point, point));
		GaussianBlur(img, img_gblur, Size(point, point), 0);

		Mat img_gray;
		cvtColor(img, img_gray, COLOR_BGR2GRAY);
		cvtColor(img_blur, img_blur, COLOR_BGR2GRAY);
		cvtColor(img_gblur, img_gblur, COLOR_BGR2GRAY);

		Canny(img_blur, img_blur, 50, 255);
		Canny(img_gblur, img_gblur, 50, 255);

		imshow("Original", img);
		imshow("blur", img_blur);
		imshow("G_blur", img_gblur);

		int key = waitKey(1);
		if (key == 'w') {
			point += 2;
			cout << point << endl;
		}
		else if (key == 's') {
			point -= 2;
			cout << point << endl;
			if (point < 1)
				point = 1;
		}
	}
}