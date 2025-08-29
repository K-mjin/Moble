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
		printf("사번 입력");
		scanf("%d", &e[i].num);
		printf("이름 입력");
		scanf("%s", &e[i].name);
		printf("나이 입력");
		scanf("%d", &e[i].age);
		printf("전화번호 입력");
		scanf("%s", &e[i].phon);
	}
	for (i = 0; i < 3; i++) {
		if (e[i].age >= 20 && e[i].age <= 30) {
			printf("조건에 만족하는 직원 : 이름 = %s 나이 = %d \n", e[i].name, e[i].age);
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
//	printf("점의 좌표를 입력하시오(x y):");
//	scanf("%d %d", &p1.x, &p1.y);
//	printf("점의 좌표를 입력하시오(x y):");
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
//	printf("두 점 사이의 거리는 %.3lf 입니다.\n", line);
//}