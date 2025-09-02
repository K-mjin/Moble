#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;

void ex1() {

    VideoCapture cap(0, CAP_DSHOW);
    if (!cap.isOpened()) {
        cout << "Error opening video stream or file" << endl;
        return;
    }

    int a = 3;
    int b = 80;

    Mat img_color = imread("colors.png", IMREAD_COLOR);
    while (1) {
        bool ret = cap.read(img_color);
        if (!ret) {
            cout << "No frame captured" << endl;
            break;
        }
        if (img_color.empty()) {
            cout << "Empty frame" << endl;
            break;
        }
        Mat img_gray;
        cvtColor(img_color, img_gray, COLOR_BGR2GRAY);
        Mat img_binary;
        threshold(img_gray, img_binary, b, 255, THRESH_BINARY_INV);

        Mat kernel = getStructuringElement(MORPH_RECT, Size(a, a));
        morphologyEx(img_binary, img_binary, MORPH_CLOSE, kernel);

        vector<vector<Point>> contours;

        findContours(img_binary, contours, RETR_LIST, CHAIN_APPROX_SIMPLE);
        drawContours(img_color, contours, -1, Scalar(0, 0, 255), 3);
        //drawContours(img_color, contours, 1, Scalar(0, 255, 0), 3);
        imshow("result", img_color);
        int key = waitKey(1);
        if (key == 'w') {
            a++;
            cout << "a=" << a << endl;
        }
        else if (key == 's') {
            if (a <= 1) {
                a = 1;
            }
            else {
                a--;
            }

            cout << "a=" << a << endl;
        }
        if (key == 'a') {
            b -= 5;
            cout << "�Ӱ谪=" << b << endl;
        }
        else if (key == 'd') {
            b += 5;
            cout << "�Ӱ谪=" << b << endl;
        }

    }
}


int main()
{
    //VideoCapture cap(0, CAP_DSHOW);
    //if (!cap.isOpened())
    //{
    //    cout << "ī�޶� �� �� �����ϴ�." << endl;
    //    return-1;
    //}
    //Mat img_color;
    //while (1)
    //{
    //    bool ret = cap.read(img_color);
    //    if (!ret)
    //    {
    //        cout << "ĸ�� ����" << endl;
    //        break;
    //    }
    //    if (img_color.empty())
    //    {
    //        cout << "�̹��� ������ ���� �� �����ϴ�." << endl;
    //        return-1;
    //    }
    //    //�׷��� �����Ϸ� ��ȯ �� ����ȭ�Ͽ� ���̳ʸ� �̹����� ��ȯ
    //    Mat img_gray;
    //    cvtColor(img_color, img_gray, COLOR_BGR2GRAY);

    //    Mat img_binary;
    //    threshold(img_gray, img_binary, 150, 255, THRESH_BINARY_INV);//�Ӱ谪�� �ٲ㺸�鼭 üũ��
    //    //����ȭ ����� �����ϱ� ���� �������� �ݱ� ������ ����
    //    
    //    Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));//Ŀ���� ũ�⸦ �ٲ㺽
    //    morphologyEx(img_binary, img_binary, MORPH_ELLIPSE, kernel); //���������� ����� Ÿ�������� ����
    //    // x, y��ǥ ������ ��Ʈ�� �� ��ҷ� ������ ǥ���ϴ� ������ ����(���)����
    //    
    //    vector<vector<Point>> contours;
    //    //����� ����
    //    findContours(img_binary, contours, RETR_LIST, CHAIN_APPROX_NONE);
    //    //����� 2���� ����� �̹����� �׷���
    //   //���� �ε��� 0, �ε��� 1�� ����
    //   //drawContours(img_color, contours, 0, Scalar(0, 0, 255), 3);
    //    //drawContours(img_color, contours, 1, Scalar(0, 255, 0), 3);
    //    //�ѹ��� ��� ����� �׸� ���� ����
    //    drawContours(img_color, contours, -1, Scalar(255, 0, 255), 2);
    //    imshow("result", img_color);
    //    if (waitKey(1) == 27)
    //        break;
    //}
    //return 0;

    ex1();
}