#include <stdio.h>
#include <math.h>

int main() {
	double m, v, e;				// m : ����, v : �ӵ�, e : �������

	printf("����(kg): ");
	scanf("%lf", &m);
	printf("�ӵ�(m/s): ");
	scanf("%lf", &v);

	//e = m * v * v / 2.0;
	e = (1.0 / 2.0) * m * pow(v, 2);


	printf("�������(J): %.3lf ", e);
}