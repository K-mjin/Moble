#include <stdio.h>

int main() {
	const double MERER_PER_PYEONG = 3.3;
	double pyeong, m;

	printf("평을 입력하세요 : ");
	scanf("%lf", &pyeong);

	m = pyeong * MERER_PER_PYEONG;

	printf("%.1lf평은 %.1lf평방미터입니다.", pyeong, m);

	return 0;
}