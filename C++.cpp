#include <iostream>
#include <string.h>
using namespace std;
#define SQUARE(a) a*a

void MyFunc(void) {
	cout << "MyFunc(void) called" << endl;
}
void MyFunc(char c) {
	cout << "MyFunc(Char c) called" << endl;
}
void MyFunc(int a, int b) {
	cout << "MyFunc(int a, int b) called" << endl;
}

void getSum(int a, int b) {
	int sum = a + b;
	cout << sum;
}
void getSum(double a, double b) {
	double sum = a + b;
	cout << sum;
}

void Swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;

	cout << *a << ", " << *b;
}
void Swap(char* a, char* b) {
	int temp = *a;
	*a = *b;
	*b = temp;

	cout << *a << ", " << *b;
}
void Swap(double* a, double* b) {
	double temp = *a;
	*a = *b;
	*b = temp;

	cout << *a << ", " << *b;
}

// 함수의 디폴드 value
//int BoxVolume(int length, int width = 1, int height = 1);
//
//int main(void) {
//	cout << "[3,3,3] : " << BoxVolume(3, 3, 3) << endl;
//	cout << "[5,5,D] : " << BoxVolume(5, 5) << endl;
//	cout << "[7,D,D] : " << BoxVolume(7) << endl;
//	//cout << "[D,D,D] : " << BoxVolume() << endl;	// 에러
//}
//
//int BoxVolume(int length, int width, int height) {
//	return length * width * height;
//}

 //인라인 함수
//inline int SQUARE(int x) {
//	return x*x;
//}

int main(void) {
	/*MyFunc();
	MyFunc('A');
	MyFunc(12, 13);*/

	//getSum(3, 4);
	//getSum(3.1, 4.1);
	//return 0;

	/*int a = 1;
	int b = 2;
	int* ptr1 = &a;
	int* ptr2 = &b;

	char c = 'A';
	char d = 'B';
	char* ptr3 = &c;
	char* ptr4 = &d;

	double e = 1.2;
	double f = 2.3;
	double* ptr5 = &e;
	double* ptr6 = &f;
	Swap(ptr5, ptr6);*/

	cout << SQUARE(5) << endl;
	cout << SQUARE(1.2) << endl;
	return 0;
}