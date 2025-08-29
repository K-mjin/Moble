#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int i, j;
	int rotto[6] = { 0 };
	
	srand((unsigned)time(NULL));
	
	for (i = 0; i < 6; i++) {
		rotto[i] = rand() % 45 + 1;
		for (j = 0; j < i; j++) {
			if (rotto[i] == rotto[j])
				i--;
		}
	}
	for (i = 0; i < 6; i++)
		printf("a[%d] = %d\n", i, rotto[i]);
	
	return 0;
}