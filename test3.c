#include "basic.h"

int main() {
	float x;

	printf("x�� ���� �Է��Ͻÿ� : ");
	scanf("%f", &x);

	float y = (3 * x * x) + (7 * x) + 11;

	printf(" ���׽��� ���� %.2f", y);

	return 0;
}