#include <stdio.h>
#define R 3
#define COLS 3

int main(void) {
	int A[R][COLS] = { {2, 3, 0},
					{8, 9, 1},
					{7, 0, 5} };
	int B[R][COLS] = { {1, 0, 0},
					{1, 0, 0},
					{1, 0, 0} };
	int C[R][COLS];

	int r, c;
	// 두개의 행렬을 더한다.
	for (r = 0; r < R; r++)
		for (c = 0; c < COLS; c++)
			C[r][c] = A[r][c] + B[r][c];
	// 행렬을 출력한다.
	for (r = 0; r < R; r++) {
		for (c = 0; c < COLS; c++)
			printf("%d ", C[r][c]);
		printf("\n");
	}

	return 0;
}