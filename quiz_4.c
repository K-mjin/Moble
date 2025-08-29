#include <stdio.h>

int main(void) {
	int i, j;

	for (i = 1; i < 7; i++) {
		for (j = 0; j < (7 - i); j++)
			printf(" ");
		for (j = 0; j < (i * 2) - 1; j++)
			printf("*");
		printf("\n");
	}
	for (i = 7; i > 0; i--) {
		for (j = 0; j < (7 - i); j++)
			printf(" ");
		for (j = 0; j < (i * 2) - 1; j++)
			printf("*");
		printf("\n");
	}
}