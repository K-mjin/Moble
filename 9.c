#include <stdio.h>

int main(void) {
	int i = 3000;
	int* p = &i;

	printf("p = %p\n", p);		// p�� �ּҰ�
	printf("&i = %p\n\n", &i);	// &i�� �ּҰ�
	printf("i = %d\n", i);		// i�� ��
	printf("*p = %d\n\n", *p);		// *p�� �� �ִ� ������
	
	*p = 20;
	printf("*p = %d\n", *p);

	return 0;
}