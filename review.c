// �����Ϳ� �迭
//#include <stdio.h>
//
//int main(void){
//	int a[5] = { 0,1,2,3,4 };
//
//	printf("%d, %d\n", a[0], a[1]);
//	printf("%d����, %d���� \n", &a[0], &a[1]);
//	printf("�迭 �̸� : %d \n", a); // �迭�� �̸��� ����ϸ� 0��° ����� �ּҰ��� ����Ѵ�.
//
//	return 0;
//}

//#include <stdio.h>
//#define SIZE 6
//
//int main(void) {
//	int list[SIZE] = { 5,4,9,6,1,3 };
//	int i, j, temp, least;
//	for (i = 0; i < SIZE - 1; i++) {
//		least = i;
//		for (j = i + 1; j < SIZE; j++) {
//			if (list[j] < list[least])
//				least = j;
//		}
//		temp = list[i];
//		list[i] = list[least];
//		list[least] = temp;
//	}
//	for (i=0; i<SIZE; i++)
//		printf("%d ", list[i]);
//	
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int i = 10;
//	double f = 12.3;
//	int* pi = NULL;
//
//	double* pf = NULL;
//	pi = &i;
//	pf = &f;
//
//	printf("%p %p \n", pi, &i);
//	printf("%p %p \n", pf, &f);
//
//	return 0;
//}

//// ������ ����
//#include <stdio.h>
//
//int main(void) {
//	int i = 2000;
//	int* p = NULL;
//
//	p = &i;
//	printf("p = %p\n", p);
//	printf("&i = %p\n\n", &i);
//	printf("i = %d\n", i);
//	printf("*p = %d\n", *p);
//}

//#include <stdio.h>
//
//int main(void) {
//	int x = 10, y = 20;
//	int* p;
//
//	p = &x;
//	printf("p = %d\n", p); // printf("&x = %d\n", &x);
//	printf("*p = %d\n\n", *p);
//
//	p = &y;
//	printf("p = %d\n", p); // printf("&y = %d\n", &y);
//	printf("*p = %d\n", *p);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int i = 10;
//	int* p;
//
//	p = &i;
//	printf("i = %d\n", i);
//
//	*p = 20;
//	printf("i = %d\n", i);
//
//	return 0;
//}

//// �������� ���� ����
//#include <stdio.h>
//
//int main(void) {
//	char* pc;
//	int* pi;
//	double* pd;
//
//	pc = (char*)10000;
//	pi = (int*)10000;
//	pd = (double*)10000;
//	printf("pc = %u, pc + 1 = %u, pc + 2 = %u\n", pc, pc + 1, pc + 2);
//	printf("pi = %u, pi + 1 = %u, pi + 2 = %u\n", pi, pi + 1, pi + 2);
//	printf("pd = %u, pd + 1 = %u, pd + 2 = %u\n", pd, pd + 1, pd + 2);
//}

//// ���� ���� �����ڿ� ���� ������
//#include <stdio.h>
//
//int main(void) {
//	int i = 10;
//	int* pi = &i;
//
//	printf("i = %d, pi = %p\n", i, pi);
//	(*pi)++;	// i++�� ���� �ǹ�, pi�� ����Ű�� �������� �����ؼ� �ϳ� ����
//	printf("i = %d, pi = %p\n", i, pi);	// i=11�� �ǰ� pi�� i�� �޸��ּҰ�
//
//	printf("i = %d, pi = %p\n", i, pi);
//	*pi++;	// pi�� ����Ű�� ������ �ּҰ��� int���� ũ�⸸ŭ ����
//	printf("i = %d, pi = %p\n", i, pi);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int data = 0x0A0B0C0D;
//	char* pc;
//	int i;
//
//	pc = (char*)&data;	// data�� char�� ����ȯ�ϸ� 8bit�� �߶� 4�� ����ϰ� ��
//	for (i = 0; i < 4; i++)
//		printf("*(pc + %d) = %02X\n", i, *(pc + i)); // ������Ʈ�κ��� ����ϱ� ������ ù��° �ݺ����� 0D�� ��µǰ� ��
//	
//	return 0;
//}

