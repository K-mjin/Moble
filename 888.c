#include <stdio.h>

void print_star(void) {
	for (int i = 0; i < 30; i++)
		printf("*");
}

int main(void) {
	print_star();
	printf("\nHello World!\n");
	print_star();
	printf("\n");

	return 0;
}