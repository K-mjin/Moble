/* 1부터 n까지의 합(1+2+3+...n)을 계산하는 문제를
순환기법을 이용해 구현 */
#include <stdio.h>

int sum(int a) {
	if (a != 0)
		return a + sum(a - 1);
	else
		return a;
}

int main(void) {
	int a;
	int result = 0;

	printf("정수를 입력하시오: ");
	scanf("%d", &a);
	result = sum(a);

	printf("1부터 n까지의 합은 %d\n.", a, result);
}