#include <stdio.h>

int all_files;	// �ٸ� �ҽ� ���Ͽ����� ����� �� �ִ� ���� ����
static int this_file;	// ������ �ҽ� ���Ͽ����� ����� �� �ִ� ���� ����
//extern void sub();

int main(void) {
	//sub();

	printf("sub()�Լ� ȣ�� �� all_files �� = %d\n", all_files);
	sub();
	printf("sub()�Լ� ȣ�� �� all_files �� = %d\n", all_files);
	return 0;
}