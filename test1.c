/* 1���� n������ ��(1+2+3+...n)�� ����ϴ� ������
��ȯ����� �̿��� ���� */
#include <stdio.h>

int sum(int a) {
	if (a != 0)
		return a + sum(a - 1);
	else
		return a;
}

int main(void) {
	int a;
	int result = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &a);
	result = sum(a);

	printf("1���� n������ ���� %d\n.", a, result);
}