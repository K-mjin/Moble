#include <stdio.h>
#define SIZE 5

int main(void) {
	int i;
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE] = { 1,2,3,4,6 };

	for (i = 0; i < SIZE; i++) {
		if (a[i] != b[i]) {
			printf("a[]�� b[]�� ���� �ʽ��ϴ�.\n");
			return 0;
		}
	}
	printf("a[]�� b[]�� �����ϴ�.\n");
	
	return 0;
}