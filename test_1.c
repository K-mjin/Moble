#include <stdio.h>

int main() {
	int a;	// 16진수 정수

	printf("16진수 정수를 입력하시오: ");
	scanf("%d", &a);

	printf("8진수로는 %#o입니다. \n", a);
	printf("10진수로는 %d입니다. \n", a);
	printf("16진수로는 %#x입니다. \n", a);

	return 0;
}