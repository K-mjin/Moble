#include <stdio.h>
#define SEAT 10

int main(void) {
	char ans1;
	int ans2; // 예약 확인 물음, 좌석 선택 물음
	int seats[SEAT] = { 0 };
	int i;

	while (1) {
		printf("좌석을 예약하시겠습니까? (y 또는 n) ");
		scanf(" %c", &ans1);

		if (ans1 == 'y') {
			printf("----------------------------\n");
			printf("1 2 3 4 5 6 7 8 9 10 \n");
			printf("----------------------------\n");
			for (i = 0; i < SEAT; i++) {
				printf("%d ", seats[i]);
			}
			printf("\n");

			printf("몇 번째 좌석을 예약하시겠습니까? ");
			scanf("%d", &ans2);

			if (seats[ans2 - 1] == 0) {
				seats[ans2 - 1] = 1;
				printf("예약되었습니다.\n");
			}
			else
				printf("이미 예약된 자리입니다.\n");
		}
		else if (ans1 == 'n')
			break;
		else
			printf("다시 선택하세요.\n");
	}
}