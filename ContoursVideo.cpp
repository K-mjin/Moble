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
            cout << "임계값=" << b << endl;
        }
        else if (key == 'd') {
            b += 5;
            cout << "임계값=" << b << endl;
        }

    }
}


int main()
{
    //VideoCapture cap(0, CAP_DSHOW);
    //if (!cap.isOpened())
    //{
    //    cout << "카메라를 열 수 없습니다." << endl;
    //    return-1;
    //}
    //Mat img_color;
    //while (1)
    //{
    //    bool ret = cap.read(img_color);
    //    if (!ret)
    //    {
    //        cout << "캡쳐 실패" << endl;
    //        break;
    //    }
    //    if (img_color.empty())
    //    {
    //        cout << "이미지 파일을 읽을 수 없습니다." << endl;
    //        return-1;
    //    }
    //    //그레이 스케일로 변환 후 이진화하여 바이너리 이미지로 변환
    //    Mat img_gray;
    //    cvtColor(img_color, img_gray, COLOR_BGR2GRAY);

    //    Mat img_binary;
    //    threshold(img_gray, img_binary, 150, 255, THRESH_BINARY_INV);//임계값을 바꿔보면서 체크함
    //    //이진화 결과를 개선하기 위해 모폴로지 닫기 연산을 해줌
    //    
    //    Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));//커널의 크기를 바꿔봄
    //    morphologyEx(img_binary, img_binary, MORPH_ELLIPSE, kernel); //모폴로지의 출력을 타원형으로 잡음
    //    // x, y좌표 데이터 셋트를 한 요소로 컨투어 표현하는 점들의 집합(어레이)선언
    //    
    //    vector<vector<Point>> contours;
    //    //컨투어를 검출
    //    findContours(img_binary, contours, RETR_LIST, CHAIN_APPROX_NONE);
    //    //검출된 2개의 컨투어를 이미지에 그려줌
    //   //각각 인덱스 0, 인덱스 1로 지정
    //   //drawContours(img_color, contours, 0, Scalar(0, 0, 255), 3);
    //    //drawContours(img_color, contours, 1, Scalar(0, 255, 0), 3);
    //    //한번에 모든 컨투어를 그릴 수도 있음
    //    drawContours(img_color, contours, -1, Scalar(255, 0, 255), 2);
    //    imshow("result", img_color);
    //    if (waitKey(1) == 27)
    //        break;
    //}
    //return 0;

    ex1();
}