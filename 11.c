#include <stdio.h>
#include <ctype.h>	// c���� �з� �Լ� ���ǵ�

int main(void) {
	int c;

	while ((c = getchar()) != EOF) {
		if (islower(c))
			c = toupper(c);
		putchar(c);
	}
	return 0;
}