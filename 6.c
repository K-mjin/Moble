// ������� ���丮�� �Լ� ���
#include <stdio.h>

long factorial(int n) {
	printf("factorial(%d)\n", n);

	if (n <= 1) return 1;	// �ݺ������� ���丮���� ���Ҽ� ����, ����Լ�
	else return n * factorial(n - 1);
}

int main(void) {
	int n = 0;
	//long f;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);
	printf("%d!�� %d�Դϴ�.\n", n, factorial(n));
}