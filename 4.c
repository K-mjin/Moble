#include <stdio.h>

void sub() {
	static int scount = 0;	// static�� ���̸� ���� �ʱ�ȭ���� �ʾƼ� ������ ������ ���
	int acount = 0;			// static�� �� �ٿ��� ���� �ʱ�ȭ��
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