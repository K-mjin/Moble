#include <stdio.h>

double get_double() {
	double x;
	printf("��ǥ�� �Է��Ͻÿ�. \n");
	scanf("%lf", &x);
	return x;
}

void print_quadrant(double x, double y) {
	if (x > 0 && y > 0)
		printf("1��и��Դϴ�.");
	else if (x < 0 && y > 0)
		printf("2��и��Դϴ�.");
	else if (x < 0 && y < 0)
		printf("3��и��Դϴ�.");
	else if (x > 0 && y < 0)
		printf("4��и��Դϴ�.");
	else if (x == 0 && y == 0)
		printf("���� �Դϴ�.");
	else
		printf("��и鿡 ���� ���� ��ǥ�Դϴ�.");
}

int main(void) {
	double a, b;
	a = get_double();
	b = get_double();
	print_quadrant(a, b);
	return 0;
}