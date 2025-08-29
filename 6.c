#include <stdio.h>

int main(void) {
	char str1[6] = "seoul";
	char str2[3] = { 'i', 's', '\0' };
	char str3[] = "tne capital city of Korea.";
	printf("%s %s %s\n", str1, str2, str3);
	printf(str1);
	return 0;
}