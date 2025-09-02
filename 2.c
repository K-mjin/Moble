#include <stdio.h>
#include <time.h>
#define SIZE 5

int main() {
	int scores[SIZE];
	int i;

	srand((unsigned)time(NULL));
	for (i = 0; i < SIZE; i++) {
		scores[i] = rand() % 100;
	}

	for (i = 0; i < SIZE; i++) {
		printf("scores[%d] = %d \n", i, scores[i]);
	}
	return 0;
}