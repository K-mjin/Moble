#include "basic.h"

int main() {
	float h, w, wide;

	printf("�ﰢ���� ���̿� �غ��� ���̸� ���ÿ�: ");
	scanf("%f %f", &h, &w);

	wide = h * w / 2;

	printf("���� : %.2f, �غ��� ���� : %.2f, ���� : %.2f", h, w, wide);

	// a = (1/2) * h * w;
	// a = (1/2.0) * h * w;

}