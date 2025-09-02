#include <stdio.h>
struct student {
	int number;
	char name[10];
	double grade;
};

int main() {
	struct  student s;

	s.number = 20190001;
	strcpy(s.name, "홀길동");
	s.grade = 4.3;

	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %lf\n", s.grade);
	printf("구조체의 사이즈 : %u\n", sizeof(s));
	printf("학번 : %u\n", &s.number);
	printf("이름 : %u\n", &s.name);
	printf("학점 : %u\n", &s.grade);
	return 0;
}