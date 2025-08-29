#include <stdio.h>

int main(void) {
	int i = 3000;
	int* p = &i;

	printf("p = %p\n", p);		// p의 주소값
	printf("&i = %p\n\n", &i);	// &i의 주소값
	printf("i = %d\n", i);		// i의 값
	printf("*p = %d\n\n", *p);		// *p에 들어가 있는 정수값
	
	*p = 20;
	printf("*p = %d\n", *p);

	return 0;
}