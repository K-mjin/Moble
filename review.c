#include <stdio.h>

struct employee {
	int num;
	char name[10];
	char phon[10];
	int age;
};


int main(void) {
	int i;
	struct employee e[3];
	for (i = 0; i < 3; i++) {
		printf("��� �Է�");
		scanf("%d", &e[i].num);
		printf("�̸� �Է�");
		scanf("%s", &e[i].name);
		printf("���� �Է�");
		scanf("%d", &e[i].age);
		printf("��ȭ��ȣ �Է�");
		scanf("%s", &e[i].phon);
	}
	for (i = 0; i < 3; i++) {
		if (e[i].age >= 20 && e[i].age <= 30) {
			printf("���ǿ� �����ϴ� ���� : �̸� = %s ���� = %d \n", e[i].name, e[i].age);
		}
	}

}

//#include <stdio.h>
//
//struct point {
//	int x;
//	int y;
//};
//
//int main(void) {
//	struct point p1, p2;
//
//	printf("���� ��ǥ�� �Է��Ͻÿ�(x y):");
//	scanf("%d %d", &p1.x, &p1.y);
//	printf("���� ��ǥ�� �Է��Ͻÿ�(x y):");
//	scanf("%d %d", &p2.x, &p2.y);
//
//	int xdiff;
//	int ydiff;
//	double line;
//
//	xdiff = p1.x - p2.x;
//	ydiff = p1.y - p2.y;
//
//	line = (xdiff * xdiff) + (ydiff * ydiff);
//
//	printf("�� �� ������ �Ÿ��� %.3lf �Դϴ�.\n", line);
//}