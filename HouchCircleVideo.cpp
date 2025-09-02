#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main()
{
	VideoCapture cap(0, CAP_DSHOW);
	if (!cap.isOpened())
	{
		cout << "ī�޶� �� �� �����ϴ�." << endl;
		return-1;
	}
    Mat img_color;
    Mat img_gray;
    while (1)
    {
        bool ret = cap.read(img_color);
        if (!ret)
        {
            cout << "ĸ�� ����" << endl;
            break;
        }
        if (img_color.empty())
        {
            cout << "�̹��� ������ ���� �� �����ϴ�." << endl;
            return-1;
        }
        cvtColor(img_color, img_gray, COLOR_BGR2GRAY);
        //Noise filtering�̶�� Ī�ϸ�, �߾Ӱ� ����
        //�����̹���, medianblur�� �̹���, Ŀ�� ������
        medianBlur(img_gray, img_gray, 3);
        cvtColor(img_gray, img_color, COLOR_GRAY2BGR);
        vector<Vec3f> circles; //floatŸ�� 3ä�� ���� ����
        //ĳ�� ���� ������� �Ӱ谪�� 100���� ���̰� �����迭���� �� ������ ���� �Ӱ谪�� 50���� ����
        HoughCircles(img_gray, circles, HOUGH_GRADIENT, 1, 20, 100, 100, 0, 0);
        for (size_t i = 0; i < circles.size(); i++)
        {
            Vec3i c = circles[i];
            Point center(c[0], c[1]);
            int radius = c[2];
            circle(img_color, center, radius, Scalar(0, 255, 0), 2);
            circle(img_color, center, 2, Scalar(0, 0, 255), 3);
        }
        imshow("detected circles", img_color);
        if (waitKey(1) == 27)
            break;
    }
    return 0;
}