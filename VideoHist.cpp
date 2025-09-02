#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int main() {
	VideoCapture cap(0, CAP_DSHOW);
	if (!cap.isOpened()) {
		cout << "카메라를 열 수 없습니다." << endl;
		return -1;
	}
	Mat src;
	while (1) {
		bool ret = cap.read(src);
		if (!ret) {
			cout << "캡쳐 실패" << endl;
			break;
		}
		if (src.empty()) {
			cout << "이미지 파일을 읽을 수 없습니다." << endl;
			return -1;
		}
		vector<Mat> bgr_planes;
		split(src, bgr_planes);
		int histSize = 256;
		float range[] = { 0, 256 };
		const float* histRange = { range };
		bool uniform = true, accumulate = false;
		Mat b_hist, g_hist, r_hist;
		calcHist(&bgr_planes[0], 1, 0, Mat(), b_hist, 1, &histSize, &histRange, uniform, accumulate);
		calcHist(&bgr_planes[1], 1, 0, Mat(), g_hist, 1, &histSize, &histRange, uniform, accumulate);
		calcHist(&bgr_planes[2], 1, 0, Mat(), r_hist, 1, &histSize, &histRange, uniform, accumulate);

		int hist_w = 256 * 3, hist_h = 400;
		Mat histImage(hist_h, hist_w, CV_8UC3, Scalar(0, 0, 0));
		normalize(b_hist, b_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());
		normalize(g_hist, g_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());
		normalize(r_hist, r_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());

		for (int i = 0; i < histSize; i++)
		{//파란색 히스토그램
			line(histImage, Point(i, hist_h - cvRound(b_hist.at<float>(i))), Point(i, hist_h - 0), Scalar(255, 0, 0), 2);
			//녹색 히스토그램
			line(histImage, Point(i + 256, hist_h - cvRound(g_hist.at<float>(i))), Point(i + 256, hist_h - 0), Scalar(0, 255, 0), 2);
			//빨간색 히스토그램
			line(histImage, Point(i + 256 * 2, hist_h - cvRound(r_hist.at<float>(i))), Point(i + 256 * 2, hist_h - 0), Scalar(0, 0, 255), 2);
		}
		imshow("Source image", src);
		imshow("Histogram", histImage);
		if (waitKey(1) == 27)
			break;
	}
	return EXIT_SUCCESS;
}