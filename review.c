// 포인터와 배열
//#include <stdio.h>
//
//int main(void){
//	int a[5] = { 0,1,2,3,4 };
//
//	printf("%d, %d\n", a[0], a[1]);
//	printf("%d번지, %d번지 \n", &a[0], &a[1]);
//	printf("배열 이름 : %d \n", a); // 배열의 이름을 출력하면 0번째 요소의 주소값을 출력한다.
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

//// 포인터 예제
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

//// 포인터의 증감 연산
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

//// 간접 참조 연산자와 증감 연산자
//#include <stdio.h>
//
//int main(void) {
//	int i = 10;
//	int* pi = &i;
//
//	printf("i = %d, pi = %p\n", i, pi);
//	(*pi)++;	// i++과 같은 의미, pi가 가리키는 변수값을 참조해서 하나 증가
//	printf("i = %d, pi = %p\n", i, pi);	// i=11이 되고 pi는 i의 메모리주소값
//
//	printf("i = %d, pi = %p\n", i, pi);
//	*pi++;	// pi가 가리키는 변수의 주소값을 int형의 크기만큼 증가
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
//	pc = (char*)&data;	// data를 char로 형변환하면 8bit로 잘라서 4번 출력하게 됨
//	for (i = 0; i < 4; i++)
//		printf("*(pc + %d) = %02X\n", i, *(pc + i)); // 하위비트로부터 출력하기 때문에 첫번째 반복에서 0D가 출력되게 됨
//	
//	return 0;
//}

