// 이중 포인터 프로그램.
#include <stdio.h>

int main(void) {
	int i = 100;
	int* p = &i;
	int** q = &p;

	*p = 200;
	printf("i = %d  *p = %d  **q = %d\n", i, *p, **q);

	**q = 300;
	printf("i = %d  *p = %d  **q = %d\n", i, *p, **q);

	printf("주소값 i = %u  p = %u \n", &i, p);
	// i의 주소와 포인터변수 p가 저장하고 있는 주소값(같다)
	printf("주소값 p = %u  q = %u \n", &p, q);
	// p의 주소와 이중포인터변수 q가 저장하고 있는 주소값(같다)
	printf("주소값 q = %u \n", &q);
	// q의 주소값 확인
	return 0;
}
