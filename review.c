#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//// ���� �߻�
//int main(void) {
//	srand(time(NULL));
//	for (int i = 0; i < 10; i++)
//		printf("%d \n", rand());
//}

//// ���丮�� ��� �Լ�
//int factorial(int n) {
//	int result = 1;
//
//	for (int i = 1; i <= n; i++)
//		result *= i; // result = result * i
//	return result;
//}
//
//int main(void) {
//	int n;
//	printf("�˰� ���� ���丮���� ����? ");
//	scanf("%d", &n);
//	printf("%d!�� ���� %d�Դϴ�. \n", n, factorial(n));
//
//	return 0;
//}

//// �Ҽ� ã�� �Լ�
//int get_integer(void) {
//	int n;
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &n);
//
//	return n;
//}
//
//int is_prinme(int n) {
//	int i;
//
//	for (i = 2; i < n; i++) {
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main(void) {
//	int n;
//	n = get_integer();
//
//	if (is_prinme(n) == 1)
//		printf("%d�� �Ҽ��Դϴ�.\n", n);
//	else
//		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
//	
//	return 0;
//}

//// �ζ� ��ȣ �����ϱ�
//int coin_toss(void);
//
//int main(void) {
//	int toss;
//	int heads = 0;
//	int tails = 0;
//	srand((unsigned)time(NULL));
//
//	for (toss = 0; toss < 100; toss++) {
//		if (coin_toss() == 1)
//			heads++;	// �ո�
//		else
//			tails++;
//	}
//	printf("������ �ո�:%d\n", heads);
//	printf("������ �޸�:%d\n", tails);
//
//	return 0;
//}
//
//int coin_toss(void) {
//	int head = rand() % 2;
//
//	return head;
//}

//// floor()�� ceil()�Լ�
//int main(void) {
//	double result, value = 2.3;
//
//	result = floor(value);
//	printf("%.1lf\n", result);
//
//	result = ceil(value);
//	printf("%.1lf\n", result);
//}

//// �ﰢ �Լ� ���̺귯��
//int main(void) {
//	double pi = 3.1415926535;
//	double x, y;
//
//	x = pi / 2;
//	y = sin(x);
//	printf("sin(%f) = %f\n", x, y);
//	y = cos(x);
//	printf("cos(%f) = %f\n", x, y);
//}

int main(void) {
	system("dir");
	printf("�ƹ�Ű�� ġ����\n");
	_getch();
	system("cls");

	return 0;
}