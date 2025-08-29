#include <stdio.h>

int main(void) {
	float radius, area;	// radius : 원의 반지름, area : 원의 면적

	printf("반지름을 입력하시오: ");
	scanf("%f", &radius);

	area = 3.14 * radius * radius;

	printf("원의 면적 : %f", area);

	return 0;
}

/* 원의 면적 계산 프로그램
#include <stdio.h>
#define PI 3.14

int main(void) {
	float radius, area;	// radius : 원의 반지름, area : 원의 면적

	printf("반지름을 입력하시오: ");
	scanf("%f", &radius);

	area = PI * radius * radius;

	printf("원의 면적 : %f", area);

	return 0;
}

#include <stdio.h>

 int main(void)
 {
 float radius; // 원의반지름
 float area; // 면적

 printf(“반지름을입력하시오: “);
 scanf_s(“%f”, &radius);

 area = 3.14 * radius * radius;

 printf(“원의면적: %f\n”, area);

 return 0;
 }
 */