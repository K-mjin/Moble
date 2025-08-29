/* 증감연산사를 이용한 프로그램 */
#include <stdio.h>

int main() {
	int x = 10;

	printf("수식 x++ 의 값: %d \n", x++);
	printf("수식 x 의 값: %d \n", x);
	printf("수식 ++x 의 값: %d \n", ++x);
	printf("수식 x 의 값: %d \n", x);

	printf("수식 x-- 의 값: %d \n", x--);
	printf("수식 x 의 값: %d \n", x);
	printf("수식 --x 의 값: %d \n", --x);
	printf("수식 x 의 값: %d \n", x);

	return 0;
}