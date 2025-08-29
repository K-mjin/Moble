#include <stdio.h>
struct number {
	double real;
	double complex;
};

int main(void) {
	struct number n1, n2;

	printf("c1의 실수와 허수를 각각 하나씩 입력");
	scanf("%lf %lf", &n1.real, &n1.complex);
	printf("c2의 실수와 허수를 각각 하나씩 입력");
	scanf("%lf %lf", &n2.real, &n2.complex);

	print(n1);
	print(n2);
	c3 = add(n1, n2);
	print(n3);
}