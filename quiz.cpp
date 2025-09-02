#include <iostream>
using namespace std;

// 1
//class Person {
//private:
//	char* name;
//	int age;
//public:
//	Person(const char* name, int age) {
//		int len = strlen(name);
//		char* name = new char[len];
//		strcpy(this->name, name);
//		this->age = age;
//	}
//};

// 3
//int Adder(int a, int b = 2) {
//	return a + b;
//}
//int testAdder(void) {
//	cout << Adder(5) << endl;
//	cout << Adder(3, 5) << endl;
//	return 0;
//}
//int main() {
//	testAdder();
//}

// 5
//class MyCar {
//private:
//	int dorNum;
//	char color[30];
//public:
//	MyCar(int dorNum, const char* str) {
//		this->dorNum = dorNum;
//		strcpy(color, str);
//	}
//	MyCar() {
//		dorNum = 4;
//		strcpy(color, "white");
//	}
//	void showCarInfo() {
//		cout << "문 개수 : " << dorNum << ", 자동차 색깔 : " << color << endl;
//	}
//};
//void test() {
//	MyCar c1(3, "red");
//	MyCar c2;
//
//	c1.showCarInfo();
//	c2.showCarInfo();
//}
//int main() {
//	test();
//}