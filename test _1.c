/* ���ڿ� �ȿ� ���Ե� Ư���� ������ ������ ���� �Լ���
�ۼ��Ͻÿ�. */
#include <string.h>
#include <stdio.h>
#define SIZE 100

int str_chr(char* s, char c) {
	int i;
	int count = 0;
	for (i = 0; 9 < strlen(s); i++) {
		if (s[i] == c)
			count++;
	}
	return count;
}

int main(void) {
	char str[SIZE];
	char ch;

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets(str, SIZE);

	printf("������ �� ���ڸ� �Է��Ͻÿ�: ");
	ch = getchar();
	printf("%c�� ���� : %d\n", ch, str_chr(str, ch));
	
	return 0;
}