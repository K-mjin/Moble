#include <stdio.h>

int deposit(int m) {
	int a;
	printf("�Ա� �ݾ��� �Է��Ͻÿ� : ");
	scanf("%d", &a);
	m += a;

	printf("�ܰ�� %d���Դϴ�.\n", m);

	return m;
}

int withdraw(int m) {
	int a;
	printf("��� �ݾ��� �Է��Ͻÿ� : ");
	scanf("%d", &a);

	if (m >= a) {
		printf("�ܰ�� %d�� �Դϴ�.\n", m - a);
		m = m - a;
	}
	else if (m < a)
		printf("�ܰ� �����մϴ�.\n");

	return m;
}

void choice_num() {
	int a;
	int money = 0;
	while (1) {
		printf("********** Welcome to Express ATM ********** \n");
		printf("<1> �ܾ� \n");
		printf("<2> �Ա� \n");
		printf("<3> ��� \n");
		printf("<4> ���� \n");
		printf("�޴��� �����Ͻÿ� : ");
		scanf("%d", &a);
		switch (a) {
		case 1:
			printf("�ܰ�� %d�� �Դϴ�. \n", money);
			break;
		case 2:
			money = deposit(money);
			break;
		case 3:
			money = withdraw(money);
			break;
		case 4:
			printf("�����մϴ�.\n");
			return 0;
		default:
			printf("�߸��� �����Դϴ�.\n");
			break;
		}
	}
}

int main(void) {
	choice_num();


	return 0;
}