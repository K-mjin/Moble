#include <stdio.h>
#include "add.h"

int main(void) {
	int x, y;

	printf("x�� ���� �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("y�� ���� �Է��Ͻÿ�: ");
	scanf("%d", &y);
	printf("%d�� %d�� ���� %d \n", x, y, add(x, y));
	printf("%d�� %d�� ���� %d \n", x, y, sub(x, y));

	return 0;
}