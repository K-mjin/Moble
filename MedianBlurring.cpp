#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main(void) {
	Mat src = imread("lenanoise.png", IMREAD_GRAYSCALE);
	if (src.empty()) {
		cout << "�̹����� �ҷ��� �� ����" << endl;
		return -1;
	}
	imshow("src", src);

	Mat img_blur;
	//medianBlur(src, img_blur, 11);
	GaussianBlur(src, img_blur, Size(7, 7), 0 );

	imshow("src", src);
	imshow("img_blur", img_blur);

	waitKey();
	destroyAllWindows();
}