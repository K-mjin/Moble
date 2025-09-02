#include <stdio.h>

void round(double f) {
	double d = f + 0.5;
	printf("%d", (int)d);
}

int round1(double f) {
	double d = f + 0.5;
	return d;
}

int main(void) {
	//round(6.99);
	printf("%d", (int)round1(6.99));
	return 0;
}