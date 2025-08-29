/* 오류를 수정해보자
#include <stdio.h>

int Main(void)
(
	printf(안녕하세요? \n);
	printf(이번 코드에는 많은 오류가 있다네요\n)
	print(제가 다 고쳐보겠습니다.\n);
	return 0;
)
*/

//#include <stdio.h>
//
//int main(void) {
//	printf("안녕하세요?\n");
//	printf("이번 코드에는 많은 오류가 있다네요.\n");
//	printf("제가 다 고쳐보겠습니다.\n");
//
//	return 0;
//}

/* 두 개의 숫자의 합을 계산하는 프로그램 
#include <stdio.h>

int main(void) {
	int x;		// 첫 번째 정수를 저장할 변수
	int y;		// 두 번째 정수를 저장할 변수
	int sum;	// 두 정수의 합을 저장하는 변수

	x = 100;
	y = 200;
	sum = x + y;
	printf("두 수의 합 : %d", sum);

	return 0;
}
*/

/* 두 개의 숫자의 합을 계산하는 프로그램
#include <stdio.h>

int main(void) {
	int x;		// 첫 번째 정수를 저장할 변수
	int y;		// 두 번째 정수를 저장할 변수
	int sum;	// 두 정수의 합을 저장하는 변수

	printf("두개의 정수 입력 :");
	scanf("%d %d", &x, &y);

	sum = x + y;

	printf("%d + %d = %d", x, y, sum);

	return 0;
}
*/

/* 연봉 계산기 프로그램
#include <stdio.h>

int main(void) {
	int year;	// 연봉
	int month;	// 월수령액

	printf("연봉을 입력하시오(단위: 만원): ");
	scanf("%d", &year);

	month = year / 12;

	printf("월수령액(단위: 만원): %d", month);

	return 0;
}

#include <stdio.h>

 int main(void)
 {
	int ysalary; // 연봉
	int msalary; // 월수령액

	printf("연봉을입력하시오(단위: 만원): ");
	scanf_s("%d", &ysalary);

	msalary = ysalary/12;

	printf("월수령액(단위: 만원): %d\n", msalary);

	return 0;
 }
*/

/* 원의 면적 계산
#include <stdio.h>

int main(void) {
	float radius;	// 원의 반지름
	float area;		// 원의 면적

	printf("반지름을 입력하시오: ");
	scanf("%f", &radius);

	area = 3.14 * radius * radius;

	printf("원의 면적: %f", area);
	return 0;
}

#include <stdio.h>

int main(void)
{
	float radius; // 원의반지름
	float area; // 면적

	printf(“반지름을입력하시오: “);
	scanf_s(“ % f”, &radius);

	area = 3.14 * radius * radius;

	printf(“원의면적: % f\n”, area);

	return 0;
}

#include <stdio.h>
#define PI 3.14

 int main(void)
 {
	float radius; // 원의반지름
	float area; // 면적

	printf(“반지름을입력하시오: “);
	scanf_s(“%f”, &radius);

	area = PI * radius * radius;

	printf(“원의면적: %f\n”, area);

	return 0;
 }
*/