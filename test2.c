#include "basic.h"

int main() {
	float h, w, wide;

	printf("삼각형의 높이와 밑변의 넓이를 쓰시오: ");
	scanf("%f %f", &h, &w);

	wide = h * w / 2;

	printf("높이 : %.2f, 밑변의 넓이 : %.2f, 넓이 : %.2f", h, w, wide);

	// a = (1/2) * h * w;
	// a = (1/2.0) * h * w;

}