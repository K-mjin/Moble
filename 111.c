#include <stdio.h>

int main() {
	float x, y, result;

	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf("%f %f", &x, &y);

	result = x + y;		// ����
	printf("%f + %f = %f \n", x, y, result);

	result = x - y;		// ����
	printf("%f - %f = % f \n", x, y, result);
	result = x * y;		// ����
	printf("%f * %f = % f \n", x, y, result);
	result = x / y;		// ������
	printf("%f / %f = % f \n", x, y, result);
	result = x % y;		// ������ % �����ڴ� ������������ ���
	printf("%f % %f = % f \n", x, y, result);

	return 0;
}