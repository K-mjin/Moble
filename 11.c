#include <stdio.h>
#include <ctype.h>	// c문자 분류 함수 정의됨

int main(void) {
	int c;

	while ((c = getchar()) != EOF) {
		if (islower(c))
			c = toupper(c);
		putchar(c);
	}
	return 0;
}