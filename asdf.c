#include <stdio.h>

int main() {
	int a = 12345;

	printf("(1)value = %d \n", a);
	printf("(2)value = %3d \n", a);
	printf("(3)value = %8d \n", a);
	printf("(4)value = %08d \n", a);

	float x = 136.578900;

	printf("(1)x = %f \n", x);
	printf("(2)x = %2.3f \n", x);
	printf("(3)x = %10.5f \n", x);
	printf("(4)x = %0012.5f \n", x);
}