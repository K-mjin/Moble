#include <iostream>
using namespace std;

int main(void) {
	int a, b;
	cout << "�ΰ��� ���� �Է� : ";
	cin >> a >> b;

	try {
		if (b == 0) {
			throw b;
		}
		cout << "a / b�� �� : " << a / b << endl;
		cout << "a % b�� �� : " << a % b << endl;
	}
	catch (int e) {
		cout << "�Է� ���� : " << e;
	}

	return 0;
}