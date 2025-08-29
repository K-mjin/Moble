#include <stdio.h>

int main(void) {
	int data = 0x0A0B0C0D;
	char* pc;
	int i;

	// data를 char로 형변환하면 8bit로 잘라서 4번 출력하게 됨.
	pc = (char*)&data;	
	
	// 하위비트부터 출력하기 때문에 첫번째 반복에서 0D가 출력되게 됨.
	for (i = 0; i < 4; i++)
		printf("*(pc + %d) = %02X \n", i, *(pc + i));	

	return 0;
}