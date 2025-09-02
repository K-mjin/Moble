#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;
//�������� ����ã���ִ� �ڵ�
int main()
{
	Mat img_frame;
	VideoCapture cap(0,CAP_DSHOW);
	// ���� �ð� ����
	time_t start_time = time(nullptr);
	// 5�ʸ��� ������Ʈ
	int update_interval = 5;
	Scalar lower_blue, upper_blue;
	if (!cap.isOpened())
	{
		cout << "ī�޶� �� �� �����ϴ�." << endl;
		return-1;
	}
	while (1)
	{
		bool ret = cap.read(img_frame);
		if (!ret)
		{
			cout << "ĸ�� ����" << endl;
			break;
		}
		Mat img_hsv;
		Mat img_mask;
		cvtColor(img_frame, img_hsv, COLOR_BGR2HSV);
		/*   Vec3b lower_blue = Vec3b(120 - 20, 30, 0);
		Vec3b upper_blue = Vec3b(120 + 20, 255, 255);*/
		time_t color_time = time(nullptr);
		if (color_time - start_time >= update_interval)
		{
			start_time = color_time;
			lower_blue = Scalar(rand() % 180, 30, 30);
			upper_blue = Scalar(lower_blue[0] + 60, 255, 255);
		}
		inRange(img_hsv, lower_blue, upper_blue, img_mask);
		Mat img_result;
		bitwise_and(img_frame, img_frame, img_result, img_mask);
		imshow("Color", img_frame);
		imshow("Result", img_result);
		int key = waitKey(1);
		if (key == 27)
			break;
	}
	cap.release();
	return 0;
}
