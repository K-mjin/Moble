// 2���� �迭 �̸��� ������ ����
#include <stdio.h>

int main(void) {
	int a[3][2] = { 1,2,3,4,5,6 };

	printf("a : %p\n", a);
	printf("a+1 : %p\n", a + 1);	// a�迭 �̸� +8
	printf("a+2 : %p\n", a + 2);	// a�迭 �̸� +8+8

	return 0;
}	// �迭 �̸����� ������ ������ �ص� ������� ����