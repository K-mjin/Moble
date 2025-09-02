#include <iostream>
using namespace std;

//int BoxVolume(int a=1, int b=1, int c=1) {
//	return a * b * c;
//}

int& IncreaseOne(int& a) {
	a++;
	return a;
}

int main() {
	// 1
	/*char* arr = new char[30];
	cin >> arr;

	delete[] arr;*/

	// 2
	/*cout << "[3,3,3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5,5,D] : " << BoxVolume(5, 5) << endl;
	cout << "[7,D,D] : " << BoxVolume(7) << endl;
	cout << "[D,D,D] : " << BoxVolume() << endl;*/

	int num1 = 1;
	int& num2 = IncreaseOne(num1);
	num1++;
	cout << num2 << endl;
}