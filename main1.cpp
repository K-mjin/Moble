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
		cout << "원하는 메뉴를 선택하세요 " << endl;
		cout << "1. 카드 모양을 입력하세요. " << endl;
		cout << "2. 카드 번호를 입력하세요. " << endl;
		cout << "3. 입력한 카드 확인하기." << endl;
		cout << "4. 종료" << endl;
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