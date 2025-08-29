#include "basic.h"

int main() {
	float x;

	printf("x의 값을 입력하시오 : ");
	scanf("%f", &x);

	float y = (3 * x * x) + (7 * x) + 11;

	printf(" 다항식의 값은 %.2f", y);

	return 0;
}