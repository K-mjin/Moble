#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	RotatedRect rr1(Point2f(40, 30), Size2f(40, 20), 30.f);
	Point2f pts[4];
	rr1.points(pts);
	Rect rr2 = rr1.boundingRect();	// 회전된 바운딩 박스의 크기 정보
	cout << "rr1 center" << rr1.center << endl;
	cout << "rr1 size" << rr1.size << endl;
	cout << "rr1 angle" << rr1.angle << endl;
	cout << "rr2" << rr2 << endl;
	for (int i = 0; i < 4; i++) {
		cout << "pts[ " << i << " ] " << pts[i] << endl;
	}
	// 앞쪽 코드에 연결하여 추가하면 바운딩박스를 얻게 됨
	Mat image(400, 400, CV_8UC3, Scalar(255, 255, 255));
	for (int i = 0; i < 4; i++) {
		line(image, pts[i], pts[(i + 1) % 4], Scalar(0, 0, 255));
		rectangle(image, rr2, Scalar(255, 0, 0));
		imshow("image", image);
	}
	waitKey();
}