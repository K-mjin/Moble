#include <stdio.h>
#define ROWS 3
#define COLS 3

int main(void) {
	int i, j;
	int a[ROWS][COLS];
	printf(" 3X3 행렬의 숫자를 입력하시오 : ");
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	int b[ROWS][COLS];
	printf("3X3 행렬의 숫자를 입력하시오 : ");
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	int c[ROWS][COLS];
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++)
			printf("%d ", c[i][j]);
		printf("\n");
	}
	return 0;
}