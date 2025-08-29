// void()�� ������
#include <stdio.h>

void memzero(void* ptr, size_t len) {
	char* p = (char*)ptr;
	for (; len > 0; len--)
		*p++ = 0;	// p�� 1��ŭ ������Ű���� ����Ŵ, 1��ŭ ������
}					// �ڷ����� ũ�⸸ŭ �����ϰ� ��

int main(void) {
	char a[10];
	memzero(a, sizeof(a));	// sizeof(a)�� ũ���?
	
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");

	int b[10];
	memzero(b, sizeof(b)); // sizeof(b)�� ũ���?

	for (int i = 0; i < 10; i++)
		printf("%d ", b[i]);
	printf("\n");

	double c[10];
	memzero(c, sizeof(c));	//size0f(c)�� ũ���?

	for (int i = 0; i < 10; i++)
		printf("%.2lf ", c[i]);
}