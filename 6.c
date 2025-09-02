#include <stdio.h>
#include <math.h>

void factorial() {
	int a;
	int fac = 1;
	printf("정수를 입력하시오 : ");
	scanf("%d", &a);
	
	for (int i = a; i > 0; i--) {
		fac *= i;
	}
	printf("결과 = %d \n", fac);
}

void sine() {
	int a;
	double sine;
	printf("각도를 입력하시오 : ");
	scanf("%d", &a);

	sine = sin((3.141592 * a) / 180.0);

	printf("결과 = %.2lf \n", sine);
}

void log_Base_10() {
	double a;
	double log_base;
	printf("실수값을 입력하시오 : ");
	scanf("%lf", &a);

	log_base = log10(a);

	printf("결과 = %.2lf \n", log_base);
}

void square() {
	double a;
	double squ;
	printf("실수값을 입력하시오 : ");
	scanf("%lf", &a);

	squ = sqrt(a);

	printf("결과 = %lf \n", squ);
}

void menu() {
	int a;
	while (1)
	{
		printf("1. 팩토리얼\n");
		printf("2. 싸인\n");
		printf("3. 로그(base 10)\n");
		printf("4. 제곱근\n");
		printf("5. 종료\n");
		printf("선택해주세요. \n");
		scanf("%d", &a);

		switch (a) {
		case 1:
			factorial();
			break;
		case 2:
			sine();
			break;
		case 3:
			log_Base_10();
			break;
		case 4:
			square();
			break;
		case 5:
			return;
		}
	}
}

int main(void) {
	menu();
	return 0;
}