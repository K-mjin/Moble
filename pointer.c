#include <stdio.h>
#include <stdlib.h>

void func1() {
	/*int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d \n", num);*/
}

void func2() {
	/*int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;

	ptr1 = &num1;
	ptr2 = &num2;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	ptr1 = &num2;
	ptr2 = &num1;

	printf("ptr1이 가르키는 수:%d \n ptr2가 가르키는 수:%d", *ptr1, *ptr2);*/
}

// int형 번수 var를 선언하고 30
// 포인터 변수 ptr을 선언하고 var의 주소값을 저장
// 포인터 변수를 이용해 var 값을 하나 증가시키고
// 포인터 변수를 이용해 var의 값을 출력
void func3() {
	int var = 30;
	int* ptr = &var;

	(*ptr)++;

	printf("var : %d", *ptr);
}

// 원의 반지름을 실수로 입력받아 면적을 구하는 코드입니다.
// (원주율은 3.14로 계산합니다. 소수 둘째 자리까지 출력하세요.)
// double 타입의 변수 var을 선언하고 사용자로부터 하나의 실수를 입력받아 저장
// 포인터 변수를 ptr선언하고 var의 주소값을 저장
// ptr 변수를 이용해 원의 면적을 출력하세요.
void func4() {
	double var;
	double* ptr;
	scanf_s("%lf", &var);

	ptr = &var;
	printf("%.2f", 3.14 * (*ptr) * (*ptr));
}

// int 정수 하나를 저장하기 위해 malloc으로 메모리를 할당하고 20을 저장해 출력
void func5() {
	int* p;
	p = (int*)malloc(sizeof(int));
	
	(*p) = 20;
	printf("%d", *p);
}

// 문자 하나를 저장하기 위해 힙에 메모리를 할당하고 소문자 a를 저장해 출력
void func6() {
	char* p;
	p = (char*)malloc(sizeof(char));

	(*p) = 'a';
	printf("%c", *p);
}

// int 정수 7개를 저장할 메모리를 동적으로 할당하고 1부터 7가지를 저장해 출력
void func7() {
	int* p;
	int i;
	p = (int*)malloc(sizeof(int) * 7);

	for (i = 0; i < 7; i++) {
		scanf_s("%d", &p[i]);
		//printf("%d\n", p[i]);
	}
	for (i = 0; i < 7; i++) {
		//scanf_s("%d \n", &p[i]);
		printf("%d ", p[i]);
	}
}

// 길이가 10인 배열을 정적으로 생성하고 3에서 시작하는 3의 배수 10개 저장
// ( 길이가 10인 배열에 3에서 시작하는 3의 배수 10개 저장 )
void func8() {
	char a[10];
	int i = 0;
	for (i = 0; i < 10; i++) {
		a[i] = 3 * (i + 1);

		printf("%d ", a[i]);
	}
	
}

// 길이가 10인 배열을 동적으로 생성하고 3에서 시작하는 3의 배수 10개를 저장
void func9() {
	int* p = (int*)malloc(sizeof(int) * 10);

	for (int i = 0; i < 10; i++) {
		p[i] = 3 * (i + 1);

		printf("%d ", p[i]);
	}
	free(p);
}

// 사용자로부터 이름을 입력받아 저장하는 구현
// ( 문자열은 malloc으로 생성한 메모리에 저장.
// 이름은 최대 영어는 29자까지 입력 가능 )
void func10() {
	char* p = (char*)malloc(sizeof(char) * 30);
	
	scanf_s("%s", p);
	printf("%s", p);
}

// 5명의 이름을 입력받기 위한 다음의 코드를 완성하세요
// ( 이름을 저장할 메모리는 동적으로 할당
void func11() {
	char* str_names[5];

	for (int i = 0; i < 5; i++) {

	}
	for (int i = 0; i < 5; i++) {

	}
}

int main() {
	
	func11();

}