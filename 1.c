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
//	strcpy(s.name, "ȫ�浿");
//	s.grade = 4.3;
//	printf("�й� : %d\n", s.number);
//	printf("�̸� : %s\n", s.name);
//	printf("���� : %f\n", s.grade);
//
//	printf("����ü ������ : %u\n", sizeof(s));	// 24byte
//	printf("�й� : %u\n", &s.number);
//	printf("�̸� : %u\n", &s.name);
//	printf("���� : %u\n", &s.grade);
//
//	return 0;
//}

int main(void) {
	struct student s;

	printf("�й��� �Է��Ͻÿ�: ");
	scanf("%d", &s.number);

	printf("�̸��� �Է��Ͻÿ�: ");
	scanf("%9s", s.name, 10);

	printf("������ �Է��Ͻ÷�(�Ǽ�):");
	scanf("%lf", &s.grade);

	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %f\n", s.grade);

	return 0;
}