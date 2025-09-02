#include <iostream>
#include <string.h>
using namespace std;

// 문제 1
void func1() {
	char* arr = new char[30];
	cin >> *arr;

	delete[] arr;
}

// 문제 2
//int BoxVolume(int a, int b=1, int defaultvalume=1)
//int main() {
//	//func1();
//	cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;
//	cout << "[5, 5, D] : " << BoxVolume(5, 5) << endl;
//	cout << "[7, D, D] : " << BoxVolume(7) << endl;
//	//cout << "[D, D, D] : " << BoxVolume() << endl;
//}
//
//int BoxVolume(int a, int b, int defaultvalume) {
//	return a * b * defaultvalume;
//}

// 문제 4
int& IncreaseOne(int &ref) {
	ref++;
	return ref;
}
void func2() {
	int num1 = 1;
	int& num2 = IncreaseOne(num1);
	num1++;
	cout << num2 << endl;
}

// 문제 5
class Addr {
public:
	char name[32];
	char phone[32];
	int addr_id;
	void showAddrInfo() {
		cout << name << ", " << phone << ", " << addr_id;
	}
};
void test() {
	Addr a;
	strcpy_s(a.name, "김미진");
	strcpy_s(a.phone, "010-8227-8650");
	a.addr_id = 1111;
	a.showAddrInfo();
}

int main() {
	// 문제 3
	/*int num1 = 1020;
	int& num2 = num1;

	num2 = 3047;
	cout << num1 << endl;
	cout << num2 << endl;*/

	test();
}