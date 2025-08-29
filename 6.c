// 구조체를 가리키는 포인터
#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int equal(struct student *p1, struct student *p2) {
	if (p1->number == p2->number)
		return 1;
	else
		return 0;
}

int main(void) {
	struct student a = { 1, "hong", 3.8 };
	struct student b = { 2, "kim", 4.0 };
	if (equal(&a, &b) == 1)
		printf("같은 학생 \n");
	else
		printf("다른 학생\n");
}

//int main(void) {
//	struct student s = { 24, "kim", 4.3 };
//	struct student* p;
//
//	p = &s;
//
//	printf("학번 = %d 이름 = %s 학점 = %lf \n", s.number, s.name, s.grade);
//	printf("학번 = %d 이름 = %s 학점 = %lf \n", (*p).number, (*p).name, (*p).grade);
//	printf("학번 = %d 이름 = %s 학점 = %lf \n", p->number, p->name, p->grade); 
//	// (*p). 와 p-> 은 같은 의미
//}