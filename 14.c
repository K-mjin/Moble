#include <stdio.h>
#define SIZE 5

int main(void) {
	int i;
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE] = { 1,2,3,4,6 };

	if (a == b)	// �ùٸ��� ���� �迭 ��
		pritnf("�߸��� ����Դϴ�.\n");
	else
		printf("�߸��� ����Դϴ�.\n");

	return 0;
}