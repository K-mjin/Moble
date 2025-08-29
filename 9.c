// void()형 포인터
#include <stdio.h>

void memzero(void* ptr, size_t len) {
	char* p = (char*)ptr;
	for (; len > 0; len--)
		*p++ = 0;	// p를 1만큼 증가시키고나서 가리킴, 1만큼 증가는
}					// 자료형의 크기만큼 증가하게 됨

int main(void) {
	char a[10];
	memzero(a, sizeof(a));	// sizeof(a)의 크기는?
	
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");

	int b[10];
	memzero(b, sizeof(b)); // sizeof(b)의 크기는?

	for (int i = 0; i < 10; i++)
		printf("%d ", b[i]);
	printf("\n");

	double c[10];
	memzero(c, sizeof(c));	//size0f(c)의 크기는?

	for (int i = 0; i < 10; i++)
		printf("%.2lf ", c[i]);
}