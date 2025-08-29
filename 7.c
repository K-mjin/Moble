// 구조체와 포인터
#include <stdio.h>

struct perInfo {
	char addr[30];
	char tel[20];
};

struct person {
	char name[20];
	char pID[20];
	struct perInfo* info; // perInfo를 가리키는 info라는 포인터 변수
};

int main(void) {
	struct perInfo info = { "Korea Seoul", "333-4444" };
	struct person man = { "Mr.Lee", "820204-xxxx512" };	// 초기화리스트가 2개 밖에 없다

	man.info = &info; // man이라는 구조체 변수의 info멤버는 info라는 구조체 변수를 가리킨다.

	printf("name : %s\n", man.name);
	printf("pID : %s\n", man.pID);
	printf("addr : %s\n", man.info->addr);
	printf("tel : %s\n", man.info->tel);
	return 0;
}