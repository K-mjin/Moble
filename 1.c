#include <stdio.h>
#define SIZE 10

int main(void) {
	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };
	int i, j, temp, least;

	printf("원래의 배열\n");
	for (i = 0; i < SIZE; i++)
		printf("%d ", list[i]);

	printf("\n");

	for (i = 0; i < SIZE - 1; i++) {
		least = i;
		for (j = i + 1; j < SIZE; j++)
			if (list[j] < list[least])
				least = j;
		temp = list[i];			// temp라는 빈 공간에 list[i]의 값을 넣어준다.
		list[i] = list[least];	// list[i]의 공간에 list[least]의 값을 넣어준다.
		list[least] = temp;		// list[least]의 공간에 list[i]값을 넣어준다.
	}

	printf("정렬된 배열\n");
	for (i = 0; i < SIZE; i++)
		printf("%d ", list[i]);

	printf("\n");

	return 0;
}