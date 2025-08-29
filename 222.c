#include <stdio.h>
#define SEC_PER_MIN 60	// 1분은 60초

int main() {
	int input, minute, second;

	printf("초를 입력하시오: ");
	scanf("%d", &input);		// 초단위의 시간을 읽는다.

	minute = input / SEC_PER_MIN;	// 몇 분
	second  = input % SEC_PER_MIN;	// 몇 초

	printf("%d초는 %d분 %d초 입니다. \n", input, minute, second);

	return 0;
}