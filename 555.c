/* 2�� ���� ���α׷� */
#include <stdio.h>

int main() {
	int x = 3;
	int y = -3;

	printf("x = %08X \n", x);			// 8�ڸ��� 16������ ����Ѵ�.
	printf("y = %08X \n", y);			// 8�ڸ��� 16������ ����Ѵ�.
	printf("x + y = %08X \n\n", x + y);	// 8�ڸ��� 16������ ����Ѵ�.

	printf("%f \n", 0.123456789);
	printf("%e \n\n", 0.123456789);

	float z = 1e39;
	printf("z = %e \n", z);

	return 0;
}