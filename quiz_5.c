#include <stdio.h>

int deposit(int sum) {		// �Ա� �Լ�
	int amount;

	printf("�Ա� �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &amount);

	sum += amount;

	printf("�ܰ�� %d�� �Դϴ�. \n", sum);

	return sum;
}

int withdraw(int sum) {	// ��� �Լ�
	int amount;

	printf("��� �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &amount);

	if (sum < amount)
		printf("�ܰ� �����մϴ�.\n");
	else {
		sum -= amount;
		printf("�ܰ�� %d�� �Դϴ�. \n", sum);
	}

	return sum;
}

int choice_num(void) {
	int choice;
	int sum = 0;

	while (1) {
		printf("<1> �ܾ� \n");
		printf("<2> �Ա� \n");
		printf("<3> ��� \n");
		printf("<4> ���� \n");
		printf("�޴��� �����Ͻÿ�: ");
		scanf("%d", &choice);


		if (choice == 1)
			printf("�ܰ�� %d�� �Դϴ�. \n", sum);
		else if (choice == 2)
			deposit(sum);
		else if (choice == 3)
			withdraw(sum);
		else if (choice == 4)
			break;
		else
			printf("�߸��� �Է��Դϴ�. \n");
	}
}

int main(void) {
	choice_num();
	return 0;
}