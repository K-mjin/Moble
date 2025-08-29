#include <stdio.h>

int main() {
	int x, y;

	printf("정수 2개: ");
	scanf("%d %d", &x, &y);

	printf("큰수 = %d\n", (x > y) ? x : y);
	printf("작은수 = %d\n", (x < y) ? x : y);

	return 0;
}