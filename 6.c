// ����ü�� ����Ű�� ������
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
		printf("���� �л� \n");
	else
		printf("�ٸ� �л�\n");
}

//int main(void) {
//	struct student s = { 24, "kim", 4.3 };
//	struct student* p;
//
//	p = &s;
//
//	printf("�й� = %d �̸� = %s ���� = %lf \n", s.number, s.name, s.grade);
//	printf("�й� = %d �̸� = %s ���� = %lf \n", (*p).number, (*p).name, (*p).grade);
//	printf("�й� = %d �̸� = %s ���� = %lf \n", p->number, p->name, p->grade); 
//	// (*p). �� p-> �� ���� �ǹ�
//}