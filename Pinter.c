#include <stdio.h>

void func1() {
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d \n", num);
}

void func2() {
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;

	ptr1 = &num1;
	ptr2 = &num2;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	ptr1 = &num2;
	ptr2 = &num1;

	printf(" ptr1 : %d \n ptr2 : %d", *ptr1, * ptr2);
}

// int 형 변수var를 선언하고 30
// 포인터변수 ptr을 선언하고 var의 주소값을 저장
// 포인터변수를 이용해 var값을 하나 증가시키고
// 포인터변수를 이용해 var의 값을 출력
void func3() {
	int var = 30;
	int* ptr = &var;

	(*ptr)++;
	printf("%d", *ptr);
}

//  원의 반지름을 실수로 입력받아 면적을 구하는 코드입니다
// 다음의 요구에 맞춰 코드를 완성하세요
// (원주율은 3.14로 계산합니다. 소수 둘 째자리까지 출력하세요)
// double 타입의 변수var 을선언하고 사용자로부터 하나의 실수를 입력받아 저장
// 포인터변수를 ptr선언하고 var의 주소값을 저장
// ptr 변수를 이용해 원의 면적을 출력하세요
void func4(){
	double var;
	scanf_s("%lf", &var);
	double* ptr = &var;

	printf("%.2lf", (*ptr) * (*ptr) * 3.14);
}

// call-by-value ( 값의 복사 )
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	printf("a : %d \n", a);
	printf("b : %d \n", b);
}	// swap에서 값을 교환했지만
void func5() {
	int val1 = 10;
	int val2 = 20;
	swap(val1, val2);

	printf("val1 : %d \n", val1);
	printf("va;2 : %d \n", val2);
	return 0;
}	// func5()에서 불러오지 않았기 때문에 val1, val2 의 값이 그대로

// call-by-reference ( 값이 할당되어있는 주소값의 복사 )
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}	// swap에서 val1, val2의 주소값을 교환해 값을 바꿨기 때문에
void func6() {
	int val1 = 10;
	int val2 = 20;

	printf("Before %d, %d \n", val1, val2);
	swap(&val1, &val2);	// val1, val2 주소 전달
	printf("After %d, %d \n", val1, val2);
}	// func6()에서 val1, val2의 값이 변경

int main() {
	func1();
}