#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//// 난수 발생
//int main(void) {
//	srand(time(NULL));
//	for (int i = 0; i < 10; i++)
//		printf("%d \n", rand());
//}

//// 팩토리얼 계산 함수
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
//	printf("알고 싶은 팩토리얼의 값은? ");
//	scanf("%d", &n);
//	printf("%d!의 값은 %d입니다. \n", n, factorial(n));
//
//	return 0;
//}

//// 소수 찾기 함수
//int get_integer(void) {
//	int n;
//	printf("정수를 입력하시오: ");
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
//		printf("%d은 소수입니다.\n", n);
//	else
//		printf("%d은 소수가 아닙니다.\n", n);
//	
//	return 0;
//}

//// 로또 번호 생성하기
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
//			heads++;	// 앞면
//		else
//			tails++;
//	}
//	printf("동전의 앞면:%d\n", heads);
//	printf("동전의 뒷면:%d\n", tails);
//
//	return 0;
//}
//
//int coin_toss(void) {
//	int head = rand() % 2;
//
//	return head;
//}

//// floor()와 ceil()함수
//int main(void) {
//	double result, value = 2.3;
//
//	result = floor(value);
//	printf("%.1lf\n", result);
//
//	result = ceil(value);
//	printf("%.1lf\n", result);
//}

//// 삼각 함수 라이브러리
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
	printf("아무키나 치세요\n");
	_getch();
	system("cls");

	return 0;
}