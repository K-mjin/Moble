#include <stdio.h>

int main(void) {
	char* p = "helloWorld";
	printf("%s \n", p);

	p = "Welcome to C World!"; // ����
	printf("%s \n", p);

	p = "Goodbye"; // ����
	printf("%s \n", p);
	// p[0] = 'a'; // ������ �߻��Ѵ�
	// strcpy(p, "Goodbye");

	return 0;
}