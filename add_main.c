#include <stdio.h>
#include "add.h"

int main(void) {
	int x, y;

	printf("x의 값을 입력하시오: ");
	scanf("%d", &x);
	printf("y의 값을 입력하시오: ");
	scanf("%d", &y);
	printf("%d와 %d와 합은 %d \n", x, y, add(x, y));
	printf("%d와 %d와 차은 %d \n", x, y, sub(x, y));

	return 0;
}