#include <stdio.h>

struct student{
	int number;
	char name[20];
	double grade;
};

int main(void) {
	struct student s = { 24, "kim", 4.3 };
	struct  student* p;

	p = &s;

	printf("�й� = %d �̸� = %s ���� = %lf\n", s.number, s.name, s.grade);
	printf("�й� = %d �̸� = %s ���� = %lf\n", p->number, p->name, p->grade);
}