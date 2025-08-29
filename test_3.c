#include <stdio.h>
void circuit(int(*pArr)[4]);
void printarr(int(*pArr)[4]);

int main(void) {
	int arr[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};
	int i;

	printf("처음 출력 되는 배열\n");
	printarr(arr);
	printf("\n");
	for (i = 0; i < 4; i++) {
		printf("출력 되는 배열 \n");
		circuit(arr);
		printarr(arr);
		printf("\n");
	}
}

void circuit(int(*pArr)[4]) {
	int arr[4][4];
	int i, j;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++) {
			arr[i][j] = pArr[i][j];
		}
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			pArr[i][j] = arr[3 - j][i];
}

void printarr(int(*pArr)[4]) {
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			printf("%4d", pArr[i][j]);
		printf("\n");
	}
}