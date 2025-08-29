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
		printf("p1의 x와 y좌표 하나씩 입력");
		scanf("%d %d", &p1.x, &p1.y);
		printf("p2의 x와 y좌표 하나씩 입력");
		scanf("%d %d", &p2.x, &p2.y);

		if (p2.x == 0 && p2.y == 0)
			break;
		if (equal(p1, p2) == 1)
			printf("일치함\n");
		else
			printf("일치하지 않음\n");

		return 0;
	}
}