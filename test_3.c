#include <stdio.h>

int main() {
	const double MERER_PER_PYEONG = 3.3;
	double pyeong, m;

	printf("���� �Է��ϼ��� : ");
	scanf("%lf", &pyeong);

	m = pyeong * MERER_PER_PYEONG;

	printf("%.1lf���� %.1lf�������Դϴ�.", pyeong, m);

	return 0;
}