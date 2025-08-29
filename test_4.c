#include <stdio.h>

struct  point{
	int x;
	int y;
};

struct circle {
	struct point center; // 원의 중심
	double radius; // 원의 반지름
};

double area(struct circle c) {
	return c.radius * c.radius * 3.14;
}

double perimeter(struct circle c) {
	return 2.0 * c.radius * 3.14;
}

int main(void) {
	struct circle c;

	printf("원의 중심점 : ");
	scanf("%d %d", &c.center.x, &c.center.y);
	printf("원의 반지름 : ");
	scanf("%lf", &c.radius);
	printf("원의 면적 = %.3lf, 원의 둘레 = %.3lf \n", area(c), perimeter(c));

	return 0;
}