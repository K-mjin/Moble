#include <stdio.h>

int main(void) {
	int data = 0x0A0B0C0D;
	char* pc;
	int i;

	// data�� char�� ����ȯ�ϸ� 8bit�� �߶� 4�� ����ϰ� ��.
	pc = (char*)&data;	
	
	// ������Ʈ���� ����ϱ� ������ ù��° �ݺ����� 0D�� ��µǰ� ��.
	for (i = 0; i < 4; i++)
		printf("*(pc + %d) = %02X \n", i, *(pc + i));	

	return 0;
}