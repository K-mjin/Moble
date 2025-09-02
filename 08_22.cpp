#include<opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

bool mouse_is_pressing = false;
int start_x, start_y, end_x, end_y;
int step = 0;
Mat img_color;

//������ �Ʒ����� ���� ���� �׸� ��� swap�� ���ְ� �ȴ�.
void swap(int* v1, int* v2) {
	int temp = *v1;
	*v1 = *v2;
	*v2 = temp;
}

//���콺 �̺�Ʈ�� ����ϱ� ���ؼ� �ݹ� �Լ��� �������ش�.
 //���콺 ���� ��ư�� ������ ROI �������� �ǰ�
//���콺 ���� ��ư�� ����  ROI ������ �ȴ�.
 //���콺 �̵� �� ROI ������ �ʷϻ� �簢������ �����ش�.
void mouse_callback(int event, int x, int y, int flags, void* param) {
	if (event == EVENT_LBUTTONDOWN) {
		step = 1;
		mouse_is_pressing = true;
		start_x = x;
		start_y = y;
	}
	else if (event == EVENT_MOUSEMOVE) {
		if (mouse_is_pressing) {
			end_x = x;
			end_y = y;
			step = 2;
		}
	}
	else if (event == EVENT_LBUTTONUP) {
		mouse_is_pressing = false;
		end_x = x;
		end_y = y;
		step = 3;
	}

}

int main(void) {
	VideoCapture cap(0,CAP_DSHOW);
	if (!cap.isOpened()) {
		cout << "���� - ī�޶� �� �� �����ϴ�." << endl;
		return -1;
	}
	namedWindow("Color");
	setMouseCallback("Color", mouse_callback);

	while (true)
	{
		bool ret = cap.read(img_color);
		if (!ret)
		{
			cout << "ĸ�� ����" << endl;
			return -1;
		}

		switch (step)
		{
		case 1:
			circle(img_color, Point(start_x, start_y), 10, Scalar(0, 255, 0), -1);
			break;
			//���콺�� ���� ä �����̰� �ִ� ������ �ʷϻ� �簢������ �����ش�.
		case 2:
			rectangle(img_color, Point(start_x, start_y), Point(end_x, end_y), Scalar(0, 255, 0), 3);
			break;
			//���콺 ���� ��ư�� ���� ĳ�� ���� ���� �߻�
			//swap�� ���������� ������ ū ���, �� ���콺 ũ��������
			//���� �밢������ ���� ��� swap�� ���� ������ �Ʒ��� �밢������ ROI��
			//������ ������ ���� �����ϱ� ���� ���
		case 3:
			if ((0 < end_x && end_x < img_color.cols) && (0 < end_y && end_y < img_color.rows)) {
				if (start_x > end_x)
					swap(&start_x, &end_x);
				if (start_y > end_y)
					swap(&start_y, &end_y);

				//���콺 ���� ��ư���� ���� ���� ���� ROI�� ����
			    //Rect�� ������ x, ������y, �ʺ�, ���� ������ �ƱԸ�Ʈ�� �����Ѵ�.
				Mat ROI(img_color, Rect(start_x, start_y, end_x - start_x, end_y - start_y));

				//ROI�� �׷��� �����Ϸ� ��ȯ�Ͽ� ������ ������ �� �ٽ� �÷� �̹����� ��ȯ
				//���� �̹����� �÷� �����̶� ����(���ѹݺ� ��Ȳ���� �ٽ� �����·� ����)�Ϸ���
				//�÷��� �ٽ� ��ȯ�������
				cvtColor(ROI, ROI, COLOR_BGR2GRAY);
				Canny(ROI, ROI, 150, 50); //ĳ�Ͽ���
				//threshold(ROI, ROI, 127, 255, THRESH_BINARY);//����ȭ
				adaptiveThreshold(ROI, ROI, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY, 5, 4);//����������ȭ
				cvtColor(ROI, ROI, COLOR_GRAY2BGR);
				//�������� ROI������ ����
				ROI.copyTo(img_color(Rect(start_x, start_y, end_x - start_x, end_y - start_y)));
			}
			break;
		}//switch�� ��
		imshow("Color", img_color);

		if (waitKey(25) > 0)
			break;
	} 
	cap.release();
	return 0;
}