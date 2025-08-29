#include <stdio.h>

int main(void) {
	int i = 10; 
	int* pi = &i;

	printf("i = %d, pi = %p\n", i, pi);
	(*pi)++;	// i++과 같은 의미, pi가 가리키는 변수값을 참조해서 하나 증가
	printf("i = %d, pi = %p\n", i, pi);		// i = 11이 되고 pi는 i의 메모리주소값
	printf("=============================\n");

	printf("i = %d, pi = %p\n", i, pi);
	*pi++;		// pi가 가리키는 변수의 주소값을 int형의 크기만큼 증가
	printf("i = %d, pi = %p\n", i, pi);
	printf("=============================\n");

	printf("i = %d, pi = %p\n", i, pi);
	*++pi;		// pi가 가리키는 변수의 주소값을 int형의 크기만큼 증가
	printf("i = %d, pi = %p\n", i, pi);
	printf("=============================\n");

	printf("i = %d, pi = %p\n", i, pi);
	++(*pi);		// pi가 가리키는 변수값을 참조해서 하나 증가
	printf("i = %d, pi = %p\n", i, pi);

	return 0;
}