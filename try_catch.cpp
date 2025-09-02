#include <iostream>
using namespace std;

int main(void) {
	int a, b;
	cout << "두개의 숫자 입력 : ";
	cin >> a >> b;

	try {
		if (b == 0) {
			throw b;
		}
		cout << "a / b의 몫 : " << a / b << endl;
		cout << "a % b의 몫 : " << a % b << endl;
	}
	catch (int e) {
		cout << "입력 오류 : " << e;
	}

	return 0;
}