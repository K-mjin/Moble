#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int main() {
	string imagePath = "cat on laptop.jpg";
	Mat img = imread(imagePath);
	if (img.empty()) {
		cerr << "�̹����� �ҷ��� �� �����ϴ�." << endl;
		return -1;
	}

	Mat img_ycrcb;
	cvtColor(img, img_ycrcb, COLOR_BGR2YCrCb);

	vector<Mat> channels(3);
	split(img_ycrcb, channels);
	Mat Y = channels[0];
	Mat Cr = channels[1];
	Mat Cb = channels[2];

	Mat merged_ycrcb;
	merge(channels, merged_ycrcb);

	Mat restored_bgr;
	cvtColor(merged_ycrcb, restored_bgr, COLOR_YCrCb2BGR);

	imshow("Original", img);
	imshow("YCrCb", merged_ycrcb);
	imshow("Y Channel", Y);
	imshow("Cr Channel", Cr);
	imshow("Cb Channel", Cb);
	imshow("Result BGR", restored_bgr);

	waitKey(0);
	destroyAllWindows();

	return 0;
}