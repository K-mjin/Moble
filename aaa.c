#include <stdio.h>

int main() {
	char op;
	int x, y;

	printf("������ �Է��Ͻÿ�: \n");
	printf("(��: 2+5) \n");
	printf(">> ");
	scanf("%d %c %d", &x, &op, &y);

	switch(op) {
		case '+':
			printf("%d %c %d = %d \n", x, op, y, x + y);
			break;
		case '-':
			printf("%d %c %d = %d \n", x, op, y, x - y);
			break;
		case '*':
			printf("%d %c %d = %d \n", x, op, y, x * y);
			break;
		case '/':
			printf("%d %c %d = %d \n", x, op, y, x / y);
			break;
		case '+%':
			printf("%d %c %d = %d \n", x, op, y, x % y);
			break;
		default:
			printf("�������� �ʴ� �������Դϴ�. \n");
			break;
	}
	return 0;
}