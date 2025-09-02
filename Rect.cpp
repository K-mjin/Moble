#include <opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
using namespace std;

int main() {
	// ���� ����ϴ� ���ø� ��ü ���� ������� ��ü ����
	// �»�� x��ǥ, �»�� y��ǥ, ����, ����
	Rect_<int> rect1(0, 0, 100, 1000);
	//�»�� ��ǥ, ���ϴ� ��ǥ
	Rect_<float> rect2(Point2f(0.f, 0.f), Point2f(120.5f, 103.5f));
	//�»�� Point, �簢�� ������
	Rect_<double>rect3(Point2d(0., 0.), Size2d(100.2, 200.));
	//�����ǵ� ������� ��ü ����
	Rect2i rect4(10, 20, 30, 40);
	Rect2f rect5(50.f, 60.f, 70.f, 80.f);
	Rect2d rect6(100., 200., 300., 400.);
	//int���� �����ǵ� ������� ��ü ����
	Rect rect7(0, 10, 20, 30);

	// ��� ���
	cout << "rect1 ���� ���� �� : " << rect1.tl() << endl;
	cout << "rect1 ������ �Ʒ��� �� : " << rect1.br() << endl;
	cout << "rect1 ���μ��� ������ : " << rect1.size() << endl;
	cout << "rect1 ������ ���� : " << rect1.area() << endl;
	cout << "rect1�� ��ǥ�� �����ϴ��� üũ : " << rect1.contains(Point(50,50)) << endl;
	cout << "\n" << endl;
	cout << "rect2 ���� ���� �� : " << rect2.tl() << endl;
	cout << "rect2 ������ �Ʒ��� �� : " << rect2.br() << endl;
	cout << "rect2 ���μ��� ������ : " << rect2.size() << endl;
	cout << "rect2 ������ ���� : " << rect2.area() << endl;
	cout << "rect2�� ��ǥ�� �����ϴ��� üũ : " << rect2.contains(Point(50,50)) << endl;

	// rect��ü�� ũ�� ����
	cout << "\n" << endl;
	Rect rect8 = rect4 + Size(50, 40);
	cout << "rect8 ���μ��� ������:" << rect8.size() << endl;
	cout << "\n" << endl;
	//rect��ü�� ��ġ ����
	Rect rect9 = rect7 + Point(10, 10);
	cout << "rect9�� ��ǥ �̵�:" << rect9.tl() << endl;
	cout << "\n" << endl;
	//rect��ü�� and���꿡 ���� �����簢�� ���� 
	Rect rect10 = rect4 & rect7;
	cout << "rect10���� ���� ��:" << rect10.tl() << endl;
	cout << "rect10 ������ �Ʒ��� ��:" << rect10.br() << endl;
	cout << "\n" << endl;
	//rect��ǥ�� ���
	cout << "rect10 " << rect10 << endl;
}