#include <stdio.h>

double get_double() {
	double x;
	printf("좌표를 입력하시오. \n");
	scanf("%lf", &x);
	return x;
}

void print_quadrant(double x, double y) {
	if (x > 0 && y > 0)
		printf("1사분면입니다.");
	else if (x < 0 && y > 0)
		printf("2사분면입니다.");
	else if (x < 0 && y < 0)
		printf("3사분면입니다.");
	else if (x > 0 && y < 0)
		printf("4사분면입니다.");
	else if (x == 0 && y == 0)
		printf("원점 입니다.");
	else
		printf("사분면에 들어가지 않은 좌표입니다.");
}

int main(void) {
	double a, b;
	a = get_double();
	b = get_double();
	print_quadrant(a, b);
	return 0;
}