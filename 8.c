/* struct_callby.c */
#include <stdio.h>

struct simple {
	int data1;
	int data2;
};

void show(struct simple ts);	// call by value
void swap(struct simple* ps);	// call by reference // 구조체 변수를 포인터로 받고 있다
													 // 구조체 변수의 주소값이 전달받을 수 있도록 되어있음
int main() {
	struct simple s = { 1,2 };

	show(s);	// s의 멤머 출력 // s의 멤버들이 ts에 멤버대 엠버로 넘어감
	swap(&s);	// s의 멤버 data1, data2 // s의 구조체 변수의 주소가 넘어감
	show(s);	// s의 변경된 멤버 출력

	return 0;
}

void show(struct simple ts) {	// call by value // s가 ts에 전달될때는 값에 의한 호출
	printf("dtat : %d, data2 : %d\n", ts.data1, ts.data2);
}

void swap(struct simple* ps) {
	int temp;

	temp = ps->data1;
	ps->data1 = ps->data2;
	ps->data2 = temp;
}