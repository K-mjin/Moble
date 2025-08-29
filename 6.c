#include <stdio.h>
#include <math.h>

double f1(double k);
double f2(double k);
double formula(double (*pf)(double), int n);

int main(void) {
	printf("%lf\n", formula(f1, 10));
	printf("%lf\n", formula(f2, 10));
}

double formula(double(*pf)(double), int n) { // 함수이름을 인자로 받을 때 같은 타입의 함수 포인터로 받아줄 수 있음
	int i;
	double sum = 0.0;

	for (i = 1; i < n; i++)
		sum += pf(i) * pf(i) + pf(i) + 1;
	return sum;
}

double f1(double k) {
	return 1.0 / k;
}

double f2(double k) {
	return cos(k);
}