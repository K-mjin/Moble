#include "basic.h"

int main() {
	float a, b, c, sum, avr;

	printf("세개의 실수를 입력하시오 :");
	scanf("%f %f %f", &a, &b, &c);

	sum = a + b + c;
	avr = sum / 3;

	printf("합계 : %.3f, 평균 : %.3f", sum, avr);
}