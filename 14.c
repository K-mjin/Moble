#include <string.h>
#include <stdio.h>

int main(void) {
	char s[] = "language";
	char c = 'g';
	char* p;
	int loc;

	p = strchr(s, c);
	if (p == NULL)
		printf("%c�� �߰ߵ��� �ʾ���\n", c);
	else {
		loc = (int)(p - s);
		printf("%s���� ù ��° %c�� %d���� �߰ߵǾ���\n", s, c, loc);
	}
	return 0;
}