#include <stdio.h>

int main() {
	int n1, n2, n3;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n1);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n2);

	if (n2 == 0) {
		printf("0���� ���� ���� �����ϴ�.\n");
	}
	else {
		n3 = n1 / n2;
		printf("����� %d�Դϴ�.\n", n3);
	}
	return 0;
}