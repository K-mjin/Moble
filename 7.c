#include <stdio.h>

int deposit(int m) {
	int a;
	printf("입금 금액을 입력하시오 : ");
	scanf("%d", &a);
	m += a;

	printf("잔고는 %d원입니다.\n", m);

	return m;
}

int withdraw(int m) {
	int a;
	printf("출금 금액을 입력하시오 : ");
	scanf("%d", &a);

	if (m >= a) {
		printf("잔고는 %d원 입니다.\n", m - a);
		m = m - a;
	}
	else if (m < a)
		printf("잔고가 부족합니다.\n");

	return m;
}

void choice_num() {
	int a;
	int money = 0;
	while (1) {
		printf("********** Welcome to Express ATM ********** \n");
		printf("<1> 잔액 \n");
		printf("<2> 입금 \n");
		printf("<3> 출금 \n");
		printf("<4> 종료 \n");
		printf("메뉴를 선택하시오 : ");
		scanf("%d", &a);
		switch (a) {
		case 1:
			printf("잔고는 %d원 입니다. \n", money);
			break;
		case 2:
			money = deposit(money);
			break;
		case 3:
			money = withdraw(money);
			break;
		case 4:
			printf("종료합니다.\n");
			return 0;
		default:
			printf("잘못된 선택입니다.\n");
			break;
		}
	}
}

int main(void) {
	choice_num();


	return 0;
}