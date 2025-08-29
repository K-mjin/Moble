#include <stdio.h>

struct student {
	int number;
	char name[10];
	double grade;
};

//int main(void) {
//	struct student s;
//
//	s.number = 20190001;
//	strcpy(s.name, "홍길동");
//	s.grade = 4.3;
//	printf("학번 : %d\n", s.number);
//	printf("이름 : %s\n", s.name);
//	printf("학점 : %f\n", s.grade);
//
//	printf("구조체 사이즈 : %u\n", sizeof(s));	// 24byte
//	printf("학번 : %u\n", &s.number);
//	printf("이름 : %u\n", &s.name);
//	printf("학점 : %u\n", &s.grade);
//
//	return 0;
//}

int main(void) {
	struct student s;

	printf("학번을 입력하시오: ");
	scanf("%d", &s.number);

	printf("이름을 입력하시오: ");
	scanf("%9s", s.name, 10);

	printf("학점을 입력하시로(실수):");
	scanf("%lf", &s.grade);

	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %f\n", s.grade);

	return 0;
}