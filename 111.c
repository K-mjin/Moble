#include <stdio.h>

int main() {
	float x, y, result;

	printf("두개의 정수를 입력하시오: ");
	scanf("%f %f", &x, &y);

	result = x + y;		// 덧셈
	printf("%f + %f = %f \n", x, y, result);

	result = x - y;		// 뺄셈
	printf("%f - %f = % f \n", x, y, result);
	result = x * y;		// 곱셈
	printf("%f * %f = % f \n", x, y, result);
	result = x / y;		// 나눗셈
	printf("%f / %f = % f \n", x, y, result);
	result = x % y;		// 나머지 % 연산자는 정수형에서만 사용
	printf("%f % %f = % f \n", x, y, result);

	return 0;
}