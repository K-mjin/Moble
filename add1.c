/* �� ���� ������ ���� ����ϴ� ���α׷� */
#include <stdio.h>

int main(void) {
	int x;		// ù ��° ������ ������ ����
	int y;		// �� ��° ������ ������ ����
	int sum;	// �� ������ ���� �����ϴ� ����

	//x = 100;
	//y = 200;

	printf("�ΰ��� ���� �Է�:");
	scanf("%d %d", &x, &y);

	sum = x + y;

	printf("�μ��� ��: %d\n", sum);
	printf("%d + %d = %d", x, y, sum);

	return 0;
}