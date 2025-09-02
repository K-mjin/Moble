#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int sx = 0;
int sy = 0;
int ex = 0;
int ey = 0;

float sc = 1.f;
int step = 3;
int lx = 0;
int ly = 0;

void mouse_callback(int ev, int x, int y, int flags, void* p) {

    if (ev == EVENT_LBUTTONDOWN) {
        sx = x;
        sy = y;
        step = 1;
    }

    if (ev == EVENT_MOUSEMOVE) {

    }
    if (ev == EVENT_LBUTTONUP) {
        ex = x;
        ey = y;
        step = 2;
    }
    if (ev == EVENT_MOUSEWHEEL) {
        if (flags > 0) {
            if (sc < 1) {
                sc *= 2.f;
            }
            else {
                sc++;
            }
        }
        if (flags < 0) {
            sc /= 2.f;
        }
        step = 3;
    }

}

void bang() {

    namedWindow("LINE");
    setMouseCallback("LINE", mouse_callback);
    Mat img = imread("line.jpg");

    float fangle = 0.f;

    Mat res = img.clone();
    Point2f Pos(res.cols / 2, res.rows / 2);
    while (true) {
        if (step == 3) {

            Mat M = getRotationMatrix2D(Point2f(res.cols / 2, res.rows/2), fangle, sc);

            warpAffine(img, res, M, Size(res.cols, res.rows));

            Mat M2(2, 3, CV_64F, Scalar(0, 0));
            M2.at<double>(0, 0) = 1;
            M2.at<double>(1, 1) = 1;
            M2.at<double>(0, 2) = Pos.x - res.cols / 2;
            M2.at<double>(1, 2) = Pos.y - res.rows / 2;
            warpAffine(res, res, M2, Size(res.cols, res.rows));
            step = 0;
        }
        if (step == 2) {
            lx = ex - sx;
            ly = ey - sy;
            Mat M2(2, 3, CV_64F, Scalar(0, 0));
            M2.at<double>(0, 0) = 1;
            M2.at<double>(1, 1) = 1;
            M2.at<double>(0, 2) = lx;
            M2.at<double>(1, 2) = ly;
            warpAffine(res, res, M2, Size(res.cols, res.rows));
            Pos = { Pos.x + lx,Pos.y + ly };
            step = 0;

        }

        imshow("LINE", res);
        int key = waitKey(1);
        if (key == 97) {
            fangle += 10.f;
            step = 3;
        }
        else if (key == 115) {
            fangle -= 10.f;
            step = 3;
        }
        else if (key == 27) {
            return;
        }

    }



}
int main() {
	bang();
	//namedWindow("LINE");
	//setMouseCallback("LINE", mouse_callback);
	//Mat img = imread("line.PNG");
	//float fangle = 0.f;
	//Mat res = img.clone();
	//Point2f Pos(res.cols / 2, res.rows / 2);

	//while (true) {
	//	if (step == 3) {
	//		Mat M = getRotationMatrix2D(Point2f(res.cols / 2, res.rows / 2), fangle, sc);
	//		warpAffine(img, res, M, Size(res.cols, res.rows));
	//		Mat M2(2, 3, CV_64F, Scalar(0, 0));
	//		M2.at<double>(0, 0) = 1;
	//		M2.at<double>(1, 2) = 1;
	//		M2.at<double>(0, 2) = Pos.x - res.cols / 2;
	//		M2.at<double>(1, 2) = Pos.y - res.rows / 2;
	//		warpAffine(res, res, M2, Size(res.cols, res.rows));
	//		
	//	}
	//	if (step == 2) {
	//		lx = ex - sx;
	//		ly = ey - sy;
	//		Mat M2(2, 3, CV_64F, Scalar(0, 0));
	//		M2.at<double>(0, 0) = 1;
	//		M2.at<double>(1, 1) = 1;
	//		M2.at<double>(0, 2) = lx;
	//		M2.at<double>(1, 2) = ly;
	//		warpAffine(res, res, M2, Size(res.cols, res.rows));
	//		Pos = { Pos.x + lx, Pos.y + ly };
	//		step = 0;
	//	}
	//	imshow("LINE", res);
	//	int key = waitKey(1);
	//	if (key == 97) {
	//		fangle += 10.f;  // 회전 각도를 10도 증가 (반시계 방향 회전)
	//		step = 3;  // `step`을 3으로 설정하여 다음 루프에서 회전 및 스케일 변환을 다시 적용하도록 함
	//	}
	//	else if (key == 115) // s 누를시 우방향 10도 회전  
	//	{
	//		fangle -= 10.f;  // 회전 각도를 10도 감소 (시계 방향 회전)
	//		step = 3;
	//	}
	//	else if (key == 27) // ESC 키를 누르면 프로그램 종료
	//	{
	//		return 0;
	//	}
	//}
	return 0;
}