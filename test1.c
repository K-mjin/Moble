#include "basic.h"

int main() {
	float a, b, c, sum, avr;

	printf("������ �Ǽ��� �Է��Ͻÿ� :");
	scanf("%f %f %f", &a, &b, &c);

	sum = a + b + c;
	avr = sum / 3;

	printf("�հ� : %.3f, ��� : %.3f", sum, avr);
}