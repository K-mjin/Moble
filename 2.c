// ������������ swap()
#include <stdio.h>

void print(int** qpi, int** qpj) {
	int* temp = NULL;
	temp = *qpi;
	*qpi = *qpj;
	*qpj = temp;
}

int main(void) {
	int i = 100;
	int j = 10;
	int* pi = &i;
	int* pj = &j;
	int** qpi = &pi;
	int** qpj = &pj;
	printf("�Լ�ȣ����\n");
	printf("i=%d  *pi=%d  **qpi=%d \n", i, *pi, **qpi);
	printf("j=%d  *pj=%d  **qpj=%d \n", j, *pj, **qpj);
	printf("i�� �ּҰ�=%u  pi=%u  *qpi=%u \n", &i, pi, *qpi);
	printf("j�� �ּҰ�=%u  pj=%u  *qpj=%u \n", &j, pj, *qpj);
	printf("�ּҰ� pi = %u  qpi = %u \n", &pi, qpi);
	printf("�ּҰ� pj = %u  qpj = %u \n", &pj, qpj);

	print(&pi, &pj);
	printf("�Լ�ȣ����\n");
	printf("i=%d  *pi=%d  **qpi=%d \n", i, *pi, **qpi);
	printf("j=%d  *pj=%d  **qpj=%d \n", j, *pj, **qpj);
	printf("i�� �ּҰ�=%u  pi=%u  *qpi=%u \n", &i, pi, *qpi);
	printf("j�� �ּҰ�=%u  pj=%u  *qpj=%u \n", &j, pj, *qpj);
	printf("�ּҰ� pi = %u  qpi = %u \n", &pi, qpi);
	printf("�ּҰ� pj = %u  qpj = %u \n", &pj, qpj);
}