#include <stdio.h>
#define SEC_PER_MIN 60	// 1���� 60��

int main() {
	int input, minute, second;

	printf("�ʸ� �Է��Ͻÿ�: ");
	scanf("%d", &input);		// �ʴ����� �ð��� �д´�.

	minute = input / SEC_PER_MIN;	// �� ��
	second  = input % SEC_PER_MIN;	// �� ��

	printf("%d�ʴ� %d�� %d�� �Դϴ�. \n", input, minute, second);

	return 0;
}