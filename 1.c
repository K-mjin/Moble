#include <stdio.h>
#define SIZE 10

int main(void) {
	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };
	int i, j, temp, least;

	printf("������ �迭\n");
	for (i = 0; i < SIZE; i++)
		printf("%d ", list[i]);

	printf("\n");

	for (i = 0; i < SIZE - 1; i++) {
		least = i;
		for (j = i + 1; j < SIZE; j++)
			if (list[j] < list[least])
				least = j;
		temp = list[i];			// temp��� �� ������ list[i]�� ���� �־��ش�.
		list[i] = list[least];	// list[i]�� ������ list[least]�� ���� �־��ش�.
		list[least] = temp;		// list[least]�� ������ list[i]���� �־��ش�.
	}

	printf("���ĵ� �迭\n");
	for (i = 0; i < SIZE; i++)
		printf("%d ", list[i]);

	printf("\n");

	return 0;
}