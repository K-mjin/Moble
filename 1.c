#include <stdio.h>
struct student {
	int number;
	char name[10];
	double grade;
};

int main() {
	struct  student s;

	s.number = 20190001;
	strcpy(s.name, "Ȧ�浿");
	s.grade = 4.3;

	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %lf\n", s.grade);
	printf("����ü�� ������ : %u\n", sizeof(s));
	printf("�й� : %u\n", &s.number);
	printf("�̸� : %u\n", &s.name);
	printf("���� : %u\n", &s.grade);
	return 0;
}