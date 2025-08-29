// 2차원 배열 이름의 포인터 연산
#include <stdio.h>

int main(void) {
	int a[3][2] = { 1,2,3,4,5,6 };

	printf("a : %p\n", a);
	printf("a+1 : %p\n", a + 1);	// a배열 이름 +8
	printf("a+2 : %p\n", a + 2);	// a배열 이름 +8+8

	return 0;
}	// 배열 이름으로 포인터 연산을 해도 행단위로 증가