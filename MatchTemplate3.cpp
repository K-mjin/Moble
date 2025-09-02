#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

vector<Point> detectedObjects;
int main() {
	Mat img_frame;

	VideoCapture cap(0, CAP_DSHOW);

	if (!cap.isOpened()) {
		cout << "ī�޶� �� �� �����ϴ�." << endl;
		return -1;
	}

	Mat img_template = imread("one_coin.png", IMREAD_GRAYSCALE);

	Mat img_binarytemp;
	threshold(img_template, img_binarytemp, 0, 255, THRESH_BINARY | THRESH_OTSU);
	int w = img_template.cols;
	int h = img_template.rows;

	imshow("binarytemp", img_binarytemp);

	while (1) {
		bool ret = cap.read(img_frame);
		if (!ret) {
			cout << "ĸó ����" << endl;
			break;
		}
		Mat img_gray;
		cvtColor(img_frame, img_gray, COLOR_BGR2GRAY);
		Mat img_binary;
		threshold(img_gray, img_binary, 0, 255, THRESH_BINARY | THRESH_OTSU);
		//����ȭ�� ī�޶� ����� ����ȭ�� ���� �̹����� ���ø� ��Ī ��Ų��
		Mat result;
		matchTemplate(img_binary, img_binarytemp, result, TM_CCOEFF_NORMED);
		for (int x = 0; x < result.cols; x++)
		{
			for (int y = 0; y < result.rows; y++)
			{
				//�Ӱ谪 0.95�� 0.93���� ����(0.9�� ���� �ϸ� ���۶Ը� ������ ��Ī�� ��)
				if (result.at<float>(y, x) > 0.95)
				{
					detectedObjects.push_back(Point(x, y));
					rectangle(img_frame, Point(x, y), Point(x + w, y + h), Scalar(0, 0, 255), 1);
				}
			}
		}
		imshow("result", img_frame);
		imshow("binary", img_binary);
		int key = waitKey(1);
		if (key == 27)
			break;
	} 
	cap.release();
}