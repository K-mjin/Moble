/* (x, y)좌표를 입력받아서 좌표가 속하느 사분면을 화면에
출력하는 프로그램을 작성하시오. 축위에 좌표가 존재할 경우
잘못 입력하였다는 문구를 출력하시오. 원점을 입력할 경우
원점이라고 출력하도록 하시오. */
#include <stdio.h>

int main() {
	int x;
	int y;

	printf("좌표를 입력하시오: ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
		printf("1사분면입니다.");
	else if (x < 0 && y > 0)
		printf("2사분면입니다.");
	else if (x < 0 && y < 0)
		printf("3사분면입니다.");
	else if (x > 0 && y < 0)
		printf("4사분면입니다.");
	else if (x == 0 && y == 0)
		printf("원점입니다.");
	else
		printf("잘못입력하였습니다.");

	return 0;
}