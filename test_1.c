/* 사용자로부터 3개의 정수값을 입력받아서 3개의 정수값 중에서
최대값을 출력하는 프로그램을 작성 */
#include <stdio.h>

int main() {
	int a, b, c, x;

	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);

	x = (a > b) ? a: b;
	x = (x > c) ? x: c;

	printf("3개의 정수값 중 최대값은 %d이다.", x);
}
