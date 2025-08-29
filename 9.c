// 구조체 변수의 리턴방식 (기본자료형 변수의 리턴방식과 동일)
#include <stdio.h>

struct simple {
	int data1;
	int data2;
};

void show(struct simple ts);
struct simple getdata(void);

int main() {
	struct simple s = getdata();
	show(s);

	return 0;
}

void show(struct simple ts) {
	printf("data1 : %d, data2 : %d\n", ts.data1, ts.data2);
}

struct simple getdata(void) { // 구조체 변수를 리턴받을 때 함수를 구조체로 받는다
	struct simple temp;
	scanf("%d %d", &temp.data1, &temp.data2);

	return temp;	// 값에 의해 리턴됨(복사되어서)
}