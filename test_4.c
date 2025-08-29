#include <stdio.h>
#include <math.h>

int main() {
	double m, v, e;				// m : 질량, v : 속도, e : 운동에너지

	printf("질량(kg): ");
	scanf("%lf", &m);
	printf("속도(m/s): ");
	scanf("%lf", &v);

	//e = m * v * v / 2.0;
	e = (1.0 / 2.0) * m * pow(v, 2);


	printf("운동에너지(J): %.3lf ", e);
}