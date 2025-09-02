#include <stdio.h>
#include <math.h>

double sin_degree(double degree) {
	return sin((3.141592 * degree) / 180.0);
}

int main(void) {
	int degree;
	for (degree = 0; degree <= 180; degree += 10) {
		printf("degree : %d, sin : %lf \n", degree, sin_degree(degree));
	}
	return 0;
}