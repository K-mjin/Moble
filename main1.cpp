#include <iostream>
#include"Card.h"
#include<cstring>

using namespace std;

int main() {
	Card c1;
	int a;
	int n;
	char arr[30];
	while (true) {
		cout << "���ϴ� �޴��� �����ϼ��� " << endl;
		cout << "1. ī�� ����� �Է��ϼ���. " << endl;
		cout << "2. ī�� ��ȣ�� �Է��ϼ���. " << endl;
		cout << "3. �Է��� ī�� Ȯ���ϱ�." << endl;
		cout << "4. ����" << endl;
		cin >> a;
		switch (a) {
		case 1:
			cin >> arr;
			c1.setShape(arr);
			continue;
		case 2:
			cin >> n;
			c1.setNumber(n);
			continue;
		case 3:
			c1.printCard();
			continue;
		case 4:
			return 0;
		}
	}
	
}