#include <stdio.h>

union example {
	int i;
	char c;
};

int main(void) {
	union example v;

	v.c = 'A';
	printf("v.c : %c   v.i : %i\n", v.c, v.i);
	// ���� �޸� ���� ���� int i�� char c�� �����
	// v.c �����ؼ� ���� ���� �� ����ϸ� v.c�� ����
	// ���� ��µǰ� v.i�� ������ ���� ��µ�

	v.i = 10000;
	printf("v.c : %c   v.i : %i\n", v.c, v.i);
	// ���� �޸� ���� ���� int i�� char c�� �����
	// v.i �����ؼ� ���� ���� �� ����ϸ� v.i�� ����
	// ���� ��µǰ� v.c�� ������ ���� ��µ�
}