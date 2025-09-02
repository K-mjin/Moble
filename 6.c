#include <stdio.h>
#include <math.h>

void factorial() {
	int a;
	int fac = 1;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &a);
	
	for (int i = a; i > 0; i--) {
		fac *= i;
	}
	printf("��� = %d \n", fac);
}

void sine() {
	int a;
	double sine;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &a);

	sine = sin((3.141592 * a) / 180.0);

	printf("��� = %.2lf \n", sine);
}

void log_Base_10() {
	double a;
	double log_base;
	printf("�Ǽ����� �Է��Ͻÿ� : ");
	scanf("%lf", &a);

	log_base = log10(a);

	printf("��� = %.2lf \n", log_base);
}

void square() {
	double a;
	double squ;
	printf("�Ǽ����� �Է��Ͻÿ� : ");
	scanf("%lf", &a);

	squ = sqrt(a);

	printf("��� = %lf \n", squ);
}

void menu() {
	int a;
	while (1)
	{
		printf("1. ���丮��\n");
		printf("2. ����\n");
		printf("3. �α�(base 10)\n");
		printf("4. ������\n");
		printf("5. ����\n");
		printf("�������ּ���. \n");
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