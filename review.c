/* ������ �����غ���
#include <stdio.h>

int Main(void)
(
	printf(�ȳ��ϼ���? \n);
	printf(�̹� �ڵ忡�� ���� ������ �ִٳ׿�\n)
	print(���� �� ���ĺ��ڽ��ϴ�.\n);
	return 0;
)
*/

//#include <stdio.h>
//
//int main(void) {
//	printf("�ȳ��ϼ���?\n");
//	printf("�̹� �ڵ忡�� ���� ������ �ִٳ׿�.\n");
//	printf("���� �� ���ĺ��ڽ��ϴ�.\n");
//
//	return 0;
//}

/* �� ���� ������ ���� ����ϴ� ���α׷� 
#include <stdio.h>

int main(void) {
	int x;		// ù ��° ������ ������ ����
	int y;		// �� ��° ������ ������ ����
	int sum;	// �� ������ ���� �����ϴ� ����

	x = 100;
	y = 200;
	sum = x + y;
	printf("�� ���� �� : %d", sum);

	return 0;
}
*/

/* �� ���� ������ ���� ����ϴ� ���α׷�
#include <stdio.h>

int main(void) {
	int x;		// ù ��° ������ ������ ����
	int y;		// �� ��° ������ ������ ����
	int sum;	// �� ������ ���� �����ϴ� ����

	printf("�ΰ��� ���� �Է� :");
	scanf("%d %d", &x, &y);

	sum = x + y;

	printf("%d + %d = %d", x, y, sum);

	return 0;
}
*/

/* ���� ���� ���α׷�
#include <stdio.h>

int main(void) {
	int year;	// ����
	int month;	// �����ɾ�

	printf("������ �Է��Ͻÿ�(����: ����): ");
	scanf("%d", &year);

	month = year / 12;

	printf("�����ɾ�(����: ����): %d", month);

	return 0;
}

#include <stdio.h>

 int main(void)
 {
	int ysalary; // ����
	int msalary; // �����ɾ�

	printf("�������Է��Ͻÿ�(����: ����): ");
	scanf_s("%d", &ysalary);

	msalary = ysalary/12;

	printf("�����ɾ�(����: ����): %d\n", msalary);

	return 0;
 }
*/

/* ���� ���� ���
#include <stdio.h>

int main(void) {
	float radius;	// ���� ������
	float area;		// ���� ����

	printf("�������� �Է��Ͻÿ�: ");
	scanf("%f", &radius);

	area = 3.14 * radius * radius;

	printf("���� ����: %f", area);
	return 0;
}

#include <stdio.h>

int main(void)
{
	float radius; // ���ǹ�����
	float area; // ����

	printf(�����������Է��Ͻÿ�: ��);
	scanf_s(�� % f��, &radius);

	area = 3.14 * radius * radius;

	printf(�����Ǹ���: % f\n��, area);

	return 0;
}

#include <stdio.h>
#define PI 3.14

 int main(void)
 {
	float radius; // ���ǹ�����
	float area; // ����

	printf(�����������Է��Ͻÿ�: ��);
	scanf_s(��%f��, &radius);

	area = PI * radius * radius;

	printf(�����Ǹ���: %f\n��, area);

	return 0;
 }
*/