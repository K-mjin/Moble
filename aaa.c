#include <stdio.h>

int main() {
	char op;
	int x, y;

	printf("수식을 입력하시오: \n");
	printf("(예: 2+5) \n");
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
			printf("지원되지 않는 연산자입니다. \n");
			break;
	}
	return 0;
}