/* 문자열 안에 포함된 특정한 문자의 개수를 세는 함수를
작성하시오. */
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

	printf("문자열을 입력하시오: ");
	gets(str, SIZE);

	printf("개수를 셀 문자를 입력하시오: ");
	ch = getchar();
	printf("%c의 개수 : %d\n", ch, str_chr(str, ch));
	
	return 0;
}