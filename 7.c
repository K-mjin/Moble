// ����ü�� ������
#include <stdio.h>

struct perInfo {
	char addr[30];
	char tel[20];
};

struct person {
	char name[20];
	char pID[20];
	struct perInfo* info; // perInfo�� ����Ű�� info��� ������ ����
};

int main(void) {
	struct perInfo info = { "Korea Seoul", "333-4444" };
	struct person man = { "Mr.Lee", "820204-xxxx512" };	// �ʱ�ȭ����Ʈ�� 2�� �ۿ� ����

	man.info = &info; // man�̶�� ����ü ������ info����� info��� ����ü ������ ����Ų��.

	printf("name : %s\n", man.name);
	printf("pID : %s\n", man.pID);
	printf("addr : %s\n", man.info->addr);
	printf("tel : %s\n", man.info->tel);
	return 0;
}