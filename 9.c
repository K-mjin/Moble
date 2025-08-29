#include <stdio.h>

int main(void) {
	char* p = "helloWorld";
	printf("%s \n", p);

	p = "Welcome to C World!"; // 가능
	printf("%s \n", p);

	p = "Goodbye"; // 가능
	printf("%s \n", p);
	// p[0] = 'a'; // 오류가 발생한다
	// strcpy(p, "Goodbye");

	return 0;
}