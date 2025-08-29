#include <stdio.h>

int main() {
	int x = 3;
	int y;
	int a = 3;
	int b;

	y = x++;
	printf("x++ : %d \n", x);
	printf("y = x++ : %d \n", y);

	y = ++x;
	printf("++x : %d \n", x);
	printf("y = ++x : %d \n", y);

	y = ++x + x++;
	printf("%d \n", x);
	printf("%d \n", y);

	b = (1 + a++) + 10;
	printf("%d \n", a);
	printf("%d \n", y);
}