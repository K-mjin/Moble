#include <stdio.h>

int main(void) {
	int i = 10; 
	int* pi = &i;

	printf("i = %d, pi = %p\n", i, pi);
	(*pi)++;	// i++�� ���� �ǹ�, pi�� ����Ű�� �������� �����ؼ� �ϳ� ����
	printf("i = %d, pi = %p\n", i, pi);		// i = 11�� �ǰ� pi�� i�� �޸��ּҰ�
	printf("=============================\n");

	printf("i = %d, pi = %p\n", i, pi);
	*pi++;		// pi�� ����Ű�� ������ �ּҰ��� int���� ũ�⸸ŭ ����
	printf("i = %d, pi = %p\n", i, pi);
	printf("=============================\n");

	printf("i = %d, pi = %p\n", i, pi);
	*++pi;		// pi�� ����Ű�� ������ �ּҰ��� int���� ũ�⸸ŭ ����
	printf("i = %d, pi = %p\n", i, pi);
	printf("=============================\n");

	printf("i = %d, pi = %p\n", i, pi);
	++(*pi);		// pi�� ����Ű�� �������� �����ؼ� �ϳ� ����
	printf("i = %d, pi = %p\n", i, pi);

	return 0;
}