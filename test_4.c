#include <stdio.h>

struct  point{
	int x;
	int y;
};

struct circle {
	struct point center; // ���� �߽�
	double radius; // ���� ������
};

double area(struct circle c) {
	return c.radius * c.radius * 3.14;
}

double perimeter(struct circle c) {
	return 2.0 * c.radius * 3.14;
}

int main(void) {
	struct circle c;

	printf("���� �߽��� : ");
	scanf("%d %d", &c.center.x, &c.center.y);
	printf("���� ������ : ");
	scanf("%lf", &c.radius);
	printf("���� ���� = %.3lf, ���� �ѷ� = %.3lf \n", area(c), perimeter(c));

	return 0;
}