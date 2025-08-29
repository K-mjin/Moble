#include <stdio.h>

union example {
	int i;
	char c;
};

int main(void) {
	union example v;

	v.c = 'A';
	printf("v.c : %c   v.i : %i\n", v.c, v.i);
	// 같은 메모리 공간 내에 int i와 char c가 저장됨
	// v.c 접근해서 값을 넣은 뒤 출력하면 v.c에 의한
	// 값이 출력되고 v.i는 쓰레기 값이 출력됨

	v.i = 10000;
	printf("v.c : %c   v.i : %i\n", v.c, v.i);
	// 같은 메모리 공간 내에 int i와 char c가 저장됨
	// v.i 접근해서 값을 넣은 뒤 출력하면 v.i에 의한
	// 값이 출력되고 v.c는 쓰레기 값이 출력됨
}