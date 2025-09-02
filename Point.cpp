#include <iostream>
using namespace std;

class Point {
public:
	int x;
	int y;

	Point(int x, int y) :x(x), y(y) {
	}
	virtual void show() {
		cout << x << ", " << y << endl;
	}
};

class Point3D : Point {
public:
	int z;

	Point3D(int x, int y, int z) : Point(x, y), z(z) {
	}
	virtual void show() {
		cout << x << ", " << y << ", " << z << endl;
	}
};

int main() {
	Point* p = new Point(3, 5);
	p->show();

	Point3D* p2 = new Point3D(1, 2, 3);
	p2->show();

	Point* p3 = (Point*)p2;
	p3->show();
}