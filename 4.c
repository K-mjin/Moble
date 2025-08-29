// �Լ��� ������
#include <stdio.h>

//�Լ� ���� ����
int add(int, int);
int sub(int, int);

int main(void) {
	int result;
	int (*pf)(int, int);	// �Լ� ������ ����

	pf = add;		// �Լ� �����Ϳ� �Լ� add()�� �ּ� ����
	result = pf(10, 20);	// �Լ� �����͸� ���� �Լ� add() ȣ��
	printf("10+20�� %d \n", result);
	printf("pf�� �ּ�=%#x\n", pf);	// �Լ� �����Ͱ� ����Ű�� �Լ��� �ּҰ� Ȯ��
	printf("add�� �ּ�=%#x\n", add);	// �Լ� �̸��� �ּҰ��� ���� ���� Ȯ��
	pf = sub;		// �Լ� �����Ϳ� �Լ� sub()�� �ּ� ����
	result = pf(10, 20);		// �Լ� �����͸� ���� sub() ȣ��
	printf("10-20�� %d\n", result);

	return 0;
}

int add(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}