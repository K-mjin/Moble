#include <stdio.h>

int main(void) {
	float radius, area;	// radius : ���� ������, area : ���� ����

	printf("�������� �Է��Ͻÿ�: ");
	scanf("%f", &radius);

	area = 3.14 * radius * radius;

	printf("���� ���� : %f", area);

	return 0;
}

/* ���� ���� ��� ���α׷�
#include <stdio.h>
#define PI 3.14

int main(void) {
	float radius, area;	// radius : ���� ������, area : ���� ����

	printf("�������� �Է��Ͻÿ�: ");
	scanf("%f", &radius);

	area = PI * radius * radius;

	printf("���� ���� : %f", area);

	return 0;
}

#include <stdio.h>

 int main(void)
 {
 float radius; // ���ǹ�����
 float area; // ����

 printf(�����������Է��Ͻÿ�: ��);
 scanf_s(��%f��, &radius);

 area = 3.14 * radius * radius;

 printf(�����Ǹ���: %f\n��, area);

 return 0;
 }
 */