#include <opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
using namespace std;

int main() {
	// 본래 사용하는 템플릿 객체 생성 방식으로 객체 생성
	// 좌상단 x좌표, 좌상단 y좌표, 길이, 높이
	Rect_<int> rect1(0, 0, 100, 1000);
	//좌상단 좌표, 우하단 좌표
	Rect_<float> rect2(Point2f(0.f, 0.f), Point2f(120.5f, 103.5f));
	//좌상단 Point, 사각형 사이즈
	Rect_<double>rect3(Point2d(0., 0.), Size2d(100.2, 200.));
	//재정의된 방식으로 객체 생성
	Rect2i rect4(10, 20, 30, 40);
	Rect2f rect5(50.f, 60.f, 70.f, 80.f);
	Rect2d rect6(100., 200., 300., 400.);
	//int형만 재정의된 방식으로 객체 생성
	Rect rect7(0, 10, 20, 30);

	// 멤버 출력
	cout << "rect1 왼쪽 위의 점 : " << rect1.tl() << endl;
	cout << "rect1 오른쪽 아래의 점 : " << rect1.br() << endl;
	cout << "rect1 가로세로 사이즈 : " << rect1.size() << endl;
	cout << "rect1 영역의 넓이 : " << rect1.area() << endl;
	cout << "rect1의 좌표를 포함하는지 체크 : " << rect1.contains(Point(50,50)) << endl;
	cout << "\n" << endl;
	cout << "rect2 왼쪽 위의 점 : " << rect2.tl() << endl;
	cout << "rect2 오른쪽 아래의 점 : " << rect2.br() << endl;
	cout << "rect2 가로세로 사이즈 : " << rect2.size() << endl;
	cout << "rect2 영역의 넓이 : " << rect2.area() << endl;
	cout << "rect2의 좌표를 포함하는지 체크 : " << rect2.contains(Point(50,50)) << endl;

	// rect객체의 크기 변경
	cout << "\n" << endl;
	Rect rect8 = rect4 + Size(50, 40);
	cout << "rect8 가로세로 사이즈:" << rect8.size() << endl;
	cout << "\n" << endl;
	//rect객체의 위치 변경
	Rect rect9 = rect7 + Point(10, 10);
	cout << "rect9의 좌표 이동:" << rect9.tl() << endl;
	cout << "\n" << endl;
	//rect객체의 and연산에 의한 교차사각형 영역 
	Rect rect10 = rect4 & rect7;
	cout << "rect10왼쪽 위의 점:" << rect10.tl() << endl;
	cout << "rect10 오른쪽 아래의 점:" << rect10.br() << endl;
	cout << "\n" << endl;
	//rect좌표의 출력
	cout << "rect10 " << rect10 << endl;
}