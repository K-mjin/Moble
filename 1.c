// ���� ������ ���α׷�.
#include <stdio.h>

int main(void) {
	int i = 100;
	int* p = &i;
	int** q = &p;

	*p = 200;
	printf("i = %d  *p = %d  **q = %d\n", i, *p, **q);

	**q = 300;
	printf("i = %d  *p = %d  **q = %d\n", i, *p, **q);

	printf("�ּҰ� i = %u  p = %u \n", &i, p);
	// i�� �ּҿ� �����ͺ��� p�� �����ϰ� �ִ� �ּҰ�(����)
	printf("�ּҰ� p = %u  q = %u \n", &p, q);
	// p�� �ּҿ� ���������ͺ��� q�� �����ϰ� �ִ� �ּҰ�(����)
	printf("�ּҰ� q = %u \n", &q);
	// q�� �ּҰ� Ȯ��
	return 0;
}
