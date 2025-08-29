/* 달을 입력하였을 경우 계절을 출력하는 프로그램을
작성하시오.(단, 봄:3~5월, 여름:6~8월, 가을:9~11월,
겨울:12~2월) */
#include <stdio.h>

int main() {
	int month;

	printf("달을 입력하십시오: ");
	scanf("%d", &month);

	(month >= 3) && (month <= 5) ? printf("봄\n") : 0;
	(month >= 6) && (month <= 8) ? printf("여름\n") : 0;
	(month >= 9) && (month <= 11) ? printf("가을\n") : 0;
	(month == 12) || (month == 1) || (month == 2) ? printf("겨울\n") : 0;
	(month == 0) || (month > 12) ? printf("errer\n") : 0;
// 겨울에서 <= 을 사용하면 0, 13 도 겨울에 포함되기때문에
// == 로 예외 처리를 해야됨.

	return 0;
}