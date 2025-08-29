#include <stdio.h>

int main(void) {
	int year, month;	// year : 연봉, month : 월수령액

	printf("연봉을 입력하시오(단위: 만원) : ");
	scanf("%d", &year);

	month = year / 12;

	printf("월수령액(단위: 만원) : %d\n", month);

	return 0;
}

/* 월수령액을 계산하는 프로그램
#include <stdio.h>

int main(void)
{
	int ysalary; // 연봉
	int msalary; // 월수령액

	printf("연봉을입력하시오(단위: 만원): ");
	scanf_s("%d", &ysalary);

	msalary = ysalary / 12;

	printf("월수령액(단위: 만원): %d\n", msalary);
	return 0;
}
	*/