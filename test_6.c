/* 월을 입력받아 3~5월은 봄, 6~8월은 여름, 9~11월은 가을, 
12, 1, 2월은 겨울을 출력하시오. 단,switch분으로 작성하시오. */
#include <stdio.h>

int main() {
	int month;

	printf("월을 입력하시오: ");
	scanf("%d", &month);

	switch (month) {
	case 3:
	case 4:
	case 5:
		printf("봄");
		break;
	case 6:
	case 7:
	case 8:
		printf("여름");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을");
		break;
	case 12:
	case 1:
	case 2:
		printf("겨울");
		break;
	default:
		printf("유효하지 않은 달입니다.");
		break;
	}
}