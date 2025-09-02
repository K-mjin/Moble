#include <stdio.h>

int main(void) {
	int arr[5] = { 1,2,3,4,5 };

	int* pArr = arr;
	printf("arr狼 林家 = %u\n", arr);
	printf("pArr狼 林家 = %u\n", pArr);

	printf("%d\n", *pArr);
	printf("%d\n", *(++pArr));
	printf("%d\n", *(++pArr));
	printf("pArr狼 林家 = %u\n", pArr);

	printf("%d\n", *(pArr + 1));
	printf("%d\n", *(pArr + 2));
	printf("pArr狼 林家 = %u\n", pArr);
}