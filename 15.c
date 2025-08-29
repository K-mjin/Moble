#include <stdio.h>
#include <string.h>

int main(void) {
	char key[] = "C";
	char buffer[80] = "";

	do {
		printf("임베디드 장치에서 가장 많이 사용되는 언어는? ");
		gets(buffer, sizeof(buffer));
	} while (strcmp(key, buffer) != 0);
	printf("맞았습니다!");
	return 0;
}