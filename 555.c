/* 2의 보수 프로그램 */
#include <stdio.h>

int main() {
	int x = 3;
	int y = -3;

	printf("x = %08X \n", x);			// 8자리의 16진수로 출력한다.
	printf("y = %08X \n", y);			// 8자리의 16진수로 출력한다.
	printf("x + y = %08X \n\n", x + y);	// 8자리의 16진수로 출력한다.

	printf("%f \n", 0.123456789);
	printf("%e \n\n", 0.123456789);

	float z = 1e39;
	printf("z = %e \n", z);

	return 0;
}