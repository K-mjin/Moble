/* struct_callby.c */
#include <stdio.h>

struct simple {
	int data1;
	int data2;
};

void show(struct simple ts);	// call by value
void swap(struct simple* ps);	// call by reference // ����ü ������ �����ͷ� �ް� �ִ�
													 // ����ü ������ �ּҰ��� ���޹��� �� �ֵ��� �Ǿ�����
int main() {
	struct simple s = { 1,2 };

	show(s);	// s�� ��� ��� // s�� ������� ts�� ����� ������ �Ѿ
	swap(&s);	// s�� ��� data1, data2 // s�� ����ü ������ �ּҰ� �Ѿ
	show(s);	// s�� ����� ��� ���

	return 0;
}

void show(struct simple ts) {	// call by value // s�� ts�� ���޵ɶ��� ���� ���� ȣ��
	printf("dtat : %d, data2 : %d\n", ts.data1, ts.data2);
}

void swap(struct simple* ps) {
	int temp;

	temp = ps->data1;
	ps->data1 = ps->data2;
	ps->data2 = temp;
}