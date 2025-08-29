#include <stdio.h>

int main(void) {
	int x = 123;
	float y = 1.23456789;

	printf("%10d \n", x);
	printf("%-10d \n", x);
	printf("%f \n", y);
	printf("%10.3f \n", y);
	printf("%-10.3f \n", y);
	printf("%.3f \n", y);

}