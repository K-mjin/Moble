// 이중포인터의 swap()
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
	printf("함수호출전\n");
	printf("i=%d  *pi=%d  **qpi=%d \n", i, *pi, **qpi);
	printf("j=%d  *pj=%d  **qpj=%d \n", j, *pj, **qpj);
	printf("i의 주소값=%u  pi=%u  *qpi=%u \n", &i, pi, *qpi);
	printf("j의 주소값=%u  pj=%u  *qpj=%u \n", &j, pj, *qpj);
	printf("주소값 pi = %u  qpi = %u \n", &pi, qpi);
	printf("주소값 pj = %u  qpj = %u \n", &pj, qpj);

	print(&pi, &pj);
	printf("함수호출후\n");
	printf("i=%d  *pi=%d  **qpi=%d \n", i, *pi, **qpi);
	printf("j=%d  *pj=%d  **qpj=%d \n", j, *pj, **qpj);
	printf("i의 주소값=%u  pi=%u  *qpi=%u \n", &i, pi, *qpi);
	printf("j의 주소값=%u  pj=%u  *qpj=%u \n", &j, pj, *qpj);
	printf("주소값 pi = %u  qpi = %u \n", &pi, qpi);
	printf("주소값 pj = %u  qpj = %u \n", &pj, qpj);
}