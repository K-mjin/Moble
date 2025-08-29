#include <stdio.h>
#include <stdbool.h>

int main() {
	bool abe = true;

	printf("%d\n", true + 1);	// 2
	printf("%d\n", abe + 1);	// 2
	printf(abe ? "true" : "false");
	printf("\n%s", abe ? "true" : "false");
}