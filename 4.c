// 함수의 포인터
#include <stdio.h>

//함수 원형 정의
int add(int, int);
int sub(int, int);

int main(void) {
	int result;
	int (*pf)(int, int);	// 함수 포인터 정의

	pf = add;		// 함수 포인터에 함수 add()의 주소 대입
	result = pf(10, 20);	// 함수 포인터를 통한 함수 add() 호출
	printf("10+20은 %d \n", result);
	printf("pf의 주소=%#x\n", pf);	// 함수 포인터가 가리키는 함수의 주소값 확인
	printf("add의 주소=%#x\n", add);	// 함수 이름이 주소값을 갖는 것을 확인
	pf = sub;		// 함수 포인터에 함수 sub()의 주소 대입
	result = pf(10, 20);		// 함수 포인터를 통한 sub() 호출
	printf("10-20은 %d\n", result);

	return 0;
}

int add(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}