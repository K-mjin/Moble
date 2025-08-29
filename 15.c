#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

int main(void) {
	int freq[SIZE] = { 0 };	// 주사위의 면의 빈도를 0으로 한다.
	int i;

	srand((unsigned)time(NULL));

	for (i = 0; i < 10000; i++)	// 주사위를 10000번 던진다.
		++freq[rand() % 6];	// 해당면의 빈도를 하나 증가한다.

	printf("=================\n");
	printf("숫자      빈도\n");
	printf("=================\n");

	for (i = 0; i < SIZE; i++)
		printf("%3d       %3d \n", i, freq[i]);

	return 0;
}