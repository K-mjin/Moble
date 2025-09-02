#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int start_x, start_y, end_x, end_y;
int step = 0;
// ���콺 �̺�Ʈ�� ����/�� ��ǥ �� ���� �ܰ踦 �����ϴ� ����

Mat img_color;
void swap(int& v1, int& v2) {	// �Լ��� �Ű����� x�� y�� ����(reference) Ÿ��
	int temp = v1;					// x�� y�� �Լ� ȣ�� �� ���޵Ǵ� ���� ������ �� �ٸ� �̸��� ��
	v1 = v2;							// x�� �����ϴ�(��, ���� ���� ������) ���� ���� �ӽ� ���� temp�� ����
	v2 = temp;						//x�� ���� ���� �����鼭 x�� ���ο� ���� �Ҵ��ϱ� ���� �ʼ���
}

// ���콺 �̺�Ʈ �ݹ� �Լ�
// �� �Լ��� "Color" â���� ���콺 �̺�Ʈ�� �߻��� ������ ȣ��
// e: �߻��� ���콺 �̺�Ʈ Ÿ�� (��: EVENT_LBUTTONDOWN, EVENT_MOUSEMOVE, EVENT_LBUTTONUP)
// x, y: ���콺 Ŀ���� ���� x, y ��ǥ
// f: ���콺 �̺�Ʈ �߻� �� ������ �÷��� (��: EVENT_FLAG_LBUTTON)
// void*: ����� ������ (���⼭�� ������� ����)
void mouse_callback(int event, int x, int y, int flags, void*) {
	if (event == EVENT_LBUTTONDOWN) {	// ���콺 ���� ��ư�� ������ ��
		step = 1;
		start_x = x;	// ���� x ��ǥ ����
		start_y = y;	// ���� y ��ǥ ����
	}
	else if (event == EVENT_MOUSEMOVE && flags == EVENT_FLAG_LBUTTON) {
		end_x = x;	// ���� x ��ǥ�� �� x ��ǥ�� ����
		end_y = y;	// ���� y ��ǥ�� �� y ��ǥ�� ���� 
		step = 2;		// �ܰ踦 2�� ���� (�簢�� �׸��� ��)
	}
	else if (event == EVENT_LBUTTONUP) {
		end_x = x;	// ���� x ��ǥ ����
		end_y = y;	// ���� y ��ǥ ����
		step = 3;
	}
}

int main() {
	VideoCapture cap(0);
	if (!cap.isOpened()) {
		cout << "���� - ī�޶� �� �� �����ϴ�.\n" << endl;
		return -1;
	}
	namedWindow("Color");

	// ���콺 �̺�Ʈ�� �߻��ϸ� cb_ms �Լ��� ȣ��
	setMouseCallback("Color", mouse_callback);

	while (true) {
		bool ret = cap.read(img_color);
		if (!ret) {
			cout << "ĸ�� ����\n"<<endl;
			return -1;
		}

		// �������� ���̿� �ʺ�
		int h = img_color.rows;
		int w = img_color.cols;

		// step ���� ���� �ٸ� �۾��� ����
		switch (step) {
		// ���콺 ���� ��ư�� ���� ���� (������ ǥ��)
		// �������� ��� ���� �׸�
		// frame: �׸��� �׸� �̹���
		// Point(start_x, start_y): ���� �߽� ��ǥ
		// 10: ���� ������
		// Scalar(0, 255, 0): ���� ���� (BGR ����: �Ķ�, �ʷ�, ����) -> ���⼭�� ���
		// -1: ���� ä�� ������ (����) �ƴϸ� �׵θ��� �׸� ������ (���) -> -1�� ä���
		case 1:
			circle(img_color, Point(start_x, start_y), 10, Scalar(0, 255, 0), -1);	// �� �׸���
			break;
		case 2:
			rectangle(img_color, Point(start_x, start_y), Point(end_x, end_y), Scalar(0, 255, 0), 3);	// �簢�� �׸���
			break;
		case 3:
			if (end_x < 0)
				end_x = 0;
			if (end_y < 0)
				end_y = 0;
			if (end_x > w)
				end_x = w;
			if (end_y > h)
				end_y = h;
			if (start_x > end_x)
				swap(start_x, end_x);
			if (start_y > end_y)
				swap(start_y, end_y);
			if (start_x == end_x && start_y == end_y) {
				end_x += 1;
				end_y += 1;
			}

			Mat ROI(img_color, Rect(start_x, start_y, end_x - start_x, end_y - start_y));
			cvtColor(ROI, ROI, COLOR_BGR2GRAY);
			Canny(ROI, ROI, 150, 50);
			cvtColor(ROI, ROI, COLOR_GRAY2BGR);
			ROI.copyTo(img_color(Rect(Point(start_x, start_y), Point(end_x, end_y))));
			break;
 break;
		}
		imshow("Color", img_color);
		if (waitKey(25) > 0)
			break;
	}
	cap.release();
	destroyAllWindows();
	return 0;
}