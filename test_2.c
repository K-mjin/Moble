/* 두 정수를 입력받아 앞의 정수가 크면 앞의 수에서
뒤에 수를 빼고, 뒤의 정수가 크거나 같으면 더하는
프로그램을 작성 */
#include <stdio.h>

int main() {
	int a, b, x;

	printf("두개의 정수를 입력하십시오: ");
	scanf("%d %d", &a, &b);

	x = (a > b) ? a-b: a+b;
	// a > b ? printf("%d - %d = %d \n", a, b, a - b) : printf("%d + %d = %d \n", a, b, a + b);

	printf("%d", x);

	return 0;
}