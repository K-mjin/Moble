/* 2개의 정수 배열 a,b를 선언하고 배역 a의 요소를
배열 b로 복사하는 함수를 작성하시오. */
#include <stdio.h>
#define SIZE 5

// 배열을 복사하는 함수
int array_copy(int a[], int b[], int size) {
	int r;
	
	for (r = 0; r < size; r++)
		b[r] = a[r];
}

// 배열을 출력하는 함수
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