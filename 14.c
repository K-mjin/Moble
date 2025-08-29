#include <stdio.h>
void swap(int *px, int *py);

int main(void) {
	int a = 100, b = 200;
	printf("a = %d b = %d\n", a, b);

	swap(&a, &b);

	printf("a = %d b = %d\n", a, b);

	return 0;
}

void swap(int *px, int *py) {
	int tmp;
	printf("x = %d y = %d\n\n", *px, *py);

	tmp = *px;
	*px = *py;
	*py = tmp;

	printf("x = %d y = %d\n", *px, *py);
}