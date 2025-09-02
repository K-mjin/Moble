#include <stdio.h>
#define SIZE 5

int array_copy(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		b[i] = a[i];
	}
}

int array_print(int a[], int b[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	for (i = 0; i < size; i++) {
		printf("b[%d] = %d\n", i, b[i]);
	}
}

int main(void) {
	int a[SIZE] = {1, 2, 3, 4, 5};
	int b[SIZE] = { 0 };

	array_print(a, b, SIZE);
	array_copy(a, b, SIZE);
	array_print(a, b, SIZE);

	return 0;
}