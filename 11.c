#include <stdio.h>
#define ROWS 3
#define COLS 3

int main(void) {
	int i, j;
	int a[ROWS][COLS];
	printf(" 3X3 ����� ���ڸ� �Է��Ͻÿ� : ");
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	int b[ROWS][COLS];
	printf("3X3 ����� ���ڸ� �Է��Ͻÿ� : ");
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