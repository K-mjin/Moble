#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
	Mat img_frame;

	VideoCapture cap(0);

	if (!cap.isOpened()) {
		cout << "ī�޶� �� �� �����ϴ�." << endl;
		return -1;
	}
	while (1) {
		bool ret = cap.read(img_frame);
		if (!ret) {
			cout << "ĸ�� ����" << endl;
			break;
		}
		imshow("Color", img_frame);
		int key = waitKey(1);	//1ms���� Ű�Է��� ��ٸ�
		if (key == 27)	//ESCŰ�� �ԷµǾ��ٸ� �ݺ��� ����
			break;
	}
	cap.release();
	return 0;
}