#include <stdio.h>

int main(void) {
	char name[100];
	char address[100];

	printf("�̸��� �Է��Ͻÿ�: ");
	gets(name, sizeof(name));
	printf("���� �����ϴ� �ּҸ� �Է��Ͻÿ�: ");
	gets(address, sizeof(name));
	puts(address);
	puts(name);
	printf("�ȳ��ϼ���, %s�� ��� %s��. \n", address, name);
	return 0;
}