#include <stdio.h>

int main() {
	int i, j;

	for (i = 5; i > 0; i--) {
		for (j = 0; j < (5 - i); j++)
			printf(" ");
		for (j = 0; j < (i * 2) - 1; j++)
			printf("*");
		printf("\n");
	}

	for (i = 1; i < 5; i++) {
		for (j = 0; j < 5 - i; j++)
			printf(" ");
		for (j = 0; j < (i * 2) - 1; j++)
			printf("*");
		printf("\n");

	}

	return 0;
}