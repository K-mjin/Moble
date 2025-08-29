#include <stdio.h>

enum days {SUN, MON, TUE, WED, THU, FRI, SAT};

char* days_name[] = {
	"sunday", "monday","tuesday", "wednesday","thursday","friday","saturday"
};

int main(void) {
	enum days d;
	d = WED; // days의 열거형 데이터 WED의 정수값이 3이 대입됨
	printf("%d번째 요일은 %s입니다.\n", d, days_name[d]);
	return 0;
}