#include <stdio.h>

int main() {
	double a;
	printf("성적을 입력:");
	scanf("%lf", &a);

	int b = (int)a / 10;

	switch (b) {
	case 9:
		printf("A학점");
		break;
	case 8:
		printf("B학점");
		break;
	case 7:
		printf("C학점");
		break;
	case 6:
		printf("D학점");
		break;
	default:
		printf("F학점");
		break;
	}
}