#include <stdio.h>

int main(void) {
	int arr[5] = { 1,2,3,4,5 };

	int* pArr = arr;
	printf("arr�� �ּ� = %u\n", arr);
	printf("pArr�� �ּ� = %u\n", pArr);

	printf("%d\n", *pArr);
	printf("%d\n", *(++pArr));
	printf("%d\n", *(++pArr));
	printf("pArr�� �ּ� = %u\n", pArr);

	printf("%d\n", *(pArr + 1));
	printf("%d\n", *(pArr + 2));
	printf("pArr�� �ּ� = %u\n", pArr);
}