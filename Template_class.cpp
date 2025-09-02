#include <iostream>
using namespace std;

template <typename T>
class Point {
public:
	T x;
	T y;

	Point(T x, T y) : x(x), y(y) {
	}

	void show() {
		cout << x << ", " << y << endl;
	}
};

int main(void) {
	Point<int> p1(10, 20);
	p1.show();

	Point<double> p2(1.2, 3.4);
	p2.show();

	Point<char> p3('a', 'b');
	p3.show();

	Point<string> p4("±è¹ÌÁø", "±è¹ÌÁø");
	p4.show();
}