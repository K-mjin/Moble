#include <stdio.h>

int main() {
	int x, y;

	for (x = 0; x < 6; x++) {
		for (y = 0; y < 6; y++)
			printf("%d", x);
		printf("\n");
	}

	return 0;
}