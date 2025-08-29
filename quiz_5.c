#include <stdio.h>

int deposit(int sum) {		// 입금 함수
	int amount;

	printf("입금 금액을 입력하시오: ");
	scanf("%d", &amount);

	sum += amount;

	printf("잔고는 %d원 입니다. \n", sum);

	return sum;
}

int withdraw(int sum) {	// 출금 함수
	int amount;

	printf("출금 금액을 입력하시오: ");
	scanf("%d", &amount);

	if (sum < amount)
		printf("잔고가 부족합니다.\n");
	else {
		sum -= amount;
		printf("잔고는 %d원 입니다. \n", sum);
	}

	return sum;
}

int choice_num(void) {
	int choice;
	int sum = 0;

	while (1) {
		printf("<1> 잔액 \n");
		printf("<2> 입금 \n");
		printf("<3> 출금 \n");
		printf("<4> 종료 \n");
		printf("메뉴를 선택하시오: ");
		scanf("%d", &choice);


		if (choice == 1)
			printf("잔고는 %d원 입니다. \n", sum);
		else if (choice == 2)
			deposit(sum);
		else if (choice == 3)
			withdraw(sum);
		else if (choice == 4)
			break;
		else
			printf("잘못된 입력입니다. \n");
	}
}

int main(void) {
	choice_num();
	return 0;
}