#include <stdio.h>
#define ROWS 4
#define COLS 2

void somang(int a[ROWS][COLS], int row, int col) {
	int i, j;
	int num;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d층 %d호 인구 입력 : ", i+1, j+1);
			scanf("%d", &num);
			a[i][j] = num;
		}
	}
}

void somang_add(int a[ROWS][COLS], int row, int col) {
	int i, j;
	int sum[ROWS] = {0};
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++)
			sum[i] += a[i][j];
	}
	for (i = 0; i < row; i++) {
		printf("%d층의 전체 인구 : %d\n", i + 1, sum[i]);
	}
}

int main(void) {
	int a[ROWS][COLS] = { 0 };

	somang(a, ROWS, COLS);
	somang_add(a, ROWS, COLS);

	return 0;
}