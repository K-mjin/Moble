#include <stdio.h>

struct point {
	int x, y;
};

int equal(struct point p1, struct point p2) {
	if (p1.x == p2.x && p1.y == p2.y)
		return 1;
	else
		return 0;
}

int main(void) {
	struct point p1;
	struct point p2;

	while (1) {
		printf("p1�� x�� y��ǥ �ϳ��� �Է�");
		scanf("%d %d", &p1.x, &p1.y);
		printf("p2�� x�� y��ǥ �ϳ��� �Է�");
		scanf("%d %d", &p2.x, &p2.y);

		if (p2.x == 0 && p2.y == 0)
			break;
		if (equal(p1, p2) == 1)
			printf("��ġ��\n");
		else
			printf("��ġ���� ����\n");

		return 0;
	}
}