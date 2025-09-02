#include <iostream>
#include <string.h>
using namespace std;

void func0() {
	/*int num1 = 1020;
	int& num2 = num1;

	num2 = 3047;
	cout << "VAL : " << num1 << endl;
	cout << "REF : " << num2 << endl;

	cout << "VAL : " << &num1 << endl;
	cout << "REF : " << &


	num2 << endl;*/
}

void func1() {
	// 巩力 1 ( 1 )
	/*double d = 3.1;
	double& ref = d;

	cout << "d狼 林家 : " << &d << endl;
	cout << "&ref狼 林家 : " << &ref << endl;*/
}

void func2() {
	// 巩力 1 ( 2 )
	/*char ch1 = 'A';
	char& ref1 = ch1;
	char& ref2 = ch1;

	cout << ch1 << endl;
	cout << ref1 << endl;

	ref2++;

	cout << ch1 << endl;
	cout << ref1 << endl;*/
}

// 巩力 1 ( 4 )
void SwapByRef(int& ref1, int& ref2) {
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

void func3() {
	// 巩力 2 ( 1 )
	/*int a = 10;
	int& ref = a;

	ref++;

	cout << a << endl;*/
}

// 巩力 2 ( 2 )
void Reverse(int& ref) {
	ref = -ref;
}
void func4() {
	int a = 10;
	Reverse(a);

	cout << a << endl;
}

//巩力 2 ( 3 )
void func5() {
	const int num = 12;
	const int* ptr = &num;
	const int *ref = ptr;

	cout << *ptr << endl;
	cout << *ref << endl;

	cout << ptr << endl;
	cout << ref << endl;
}

// 巩力 2 ( 4 )
char* MakeArry(int len) {
	char* ptr = new char[len];
	return ptr;
}
void func6() {
	 char * str = MakeArry(10);
	 cin >> str;

	 cout << str << endl;

	 delete[] str;
}
int main(void) {
	// 巩力 1 ( 4 )
	/*int val1 = 10;
	int val2 = 20;
	SwapByRef(val1, val2);
	cout << "val1 : " << val1 << endl;
	cout << "val2 : " << val2 << endl;*/

	func6();
}