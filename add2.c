#include <stdio.h>

int main(void) {
	int year, month;	// year : ����, month : �����ɾ�

	printf("������ �Է��Ͻÿ�(����: ����) : ");
	scanf("%d", &year);

	month = year / 12;

	printf("�����ɾ�(����: ����) : %d\n", month);

	return 0;
}

/* �����ɾ��� ����ϴ� ���α׷�
#include <stdio.h>

int main(void)
{
	int ysalary; // ����
	int msalary; // �����ɾ�

	printf("�������Է��Ͻÿ�(����: ����): ");
	scanf_s("%d", &ysalary);

	msalary = ysalary / 12;

	printf("�����ɾ�(����: ����): %d\n", msalary);
	return 0;
}
	*/