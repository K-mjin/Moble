/* �� ������ �Է¹޾� ���� ������ ũ�� ���� ������
�ڿ� ���� ����, ���� ������ ũ�ų� ������ ���ϴ�
���α׷��� �ۼ� */
#include <stdio.h>

int main() {
	int a, b, x;

	printf("�ΰ��� ������ �Է��Ͻʽÿ�: ");
	scanf("%d %d", &a, &b);

	x = (a > b) ? a-b: a+b;
	// a > b ? printf("%d - %d = %d \n", a, b, a - b) : printf("%d + %d = %d \n", a, b, a + b);

	printf("%d", x);

	return 0;
}