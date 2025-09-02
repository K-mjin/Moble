#include <stdio.h>
#define SIZE 7
void square_array(int list[], int size);
void print_array(int list[], int size);

int main(void) {
	int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7 };

	print_array(list, SIZE);
	square_array(list, SIZE);
	print_array(list, SIZE);
}

void square_array(int list[], int size) {
	int i;

	for (i = 0; i < size; i++)
		list[i] = list[i] * list[i];
}

void print_array(int list[], int size) {
	int i;

	for (i = 0; i < size; i++)
		printf("%3d", list[i]);
	printf("\n");
}