#include <stdio.h>

int main() {
	int number;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &number);

	if (number > 0)
		printf("����Դϴ�.\n");

	if (number < 0)
		printf("�����Դϴ�\n");

	printf("�Էµ� ���� %d�Դϴ�.\n", number);

	return 0;
}