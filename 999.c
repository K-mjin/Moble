#include <stdio.h>

int main() {
	double a;
	printf("������ �Է�:");
	scanf("%lf", &a);

	int b = (int)a / 10;

	switch (b) {
	case 9:
		printf("A����");
		break;
	case 8:
		printf("B����");
		break;
	case 7:
		printf("C����");
		break;
	case 6:
		printf("D����");
		break;
	default:
		printf("F����");
		break;
	}
}