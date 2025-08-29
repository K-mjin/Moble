/* 정수 상수 프로그램 */
#include <stdio.h>

int main() {
	int x = 10;
	int y = 010;
	int z = 0x10;

	printf("x = %d \n", x);
	printf("y = %d \n", y);
	printf("z = %d \n", z);
	printf("x = %d, x = %#o, x = %#x \n", x, x, x);
	// %#o 은 8진수, %#x 는 16진수

	return 0;
}