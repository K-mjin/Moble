/* 2���� ���� �迭 a,b�� �����ϰ� �迪 a�� ��Ҹ�
�迭 b�� �����ϴ� �Լ��� �ۼ��Ͻÿ�. */
#include <stdio.h>
#define SIZE 5

// �迭�� �����ϴ� �Լ�
int array_copy(int a[], int b[], int size) {
	int r;
	
	for (r = 0; r < size; r++)
		b[r] = a[r];
}

// �迭�� ����ϴ� �Լ�
int array_print(int a[], int size) {
	int r;

	for (r = 0; r < size; r++)
		printf("%d", a[r]);
	printf("\n");
}


int main(void) {
	int a[SIZE] = { 1, 2, 3, 4, 5 };
	int b[SIZE];

	array_print(a, SIZE);
	array_copy(a, b, SIZE);
	array_print(b, SIZE);

	return 0;
}