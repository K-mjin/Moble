/* ���� ��� ���α׷� */
#include <stdio.h>

int main() {
	int x = 10;
	int y = 010;
	int z = 0x10;

	printf("x = %d \n", x);
	printf("y = %d \n", y);
	printf("z = %d \n", z);
	printf("x = %d, x = %#o, x = %#x \n", x, x, x);
	// %#o �� 8����, %#x �� 16����

	return 0;
}