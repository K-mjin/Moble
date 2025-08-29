#include <stdio.h>

void sub() {
	static int scount = 0;	// static을 붙이면 값이 초기화되지 않아서 증가된 변수가 출력
	int acount = 0;			// static을 안 붙여서 값이 초기화됨
	printf("scount = %d\t", scount);

	printf("acount = %d\n", acount);
	scount++;
	acount++;
}

int main(void) {
	sub();
	sub();
	sub();
	return 0;
}