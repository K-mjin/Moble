#include <stdio.h>
#define SIZE 5

int main() {
	int i;
	int scores[SIZE];
	int sum = 0;
	int mean;

	for (i = 0; i < SIZE; i++) {
		printf("�л����� ������ �Է��Ͻÿ� : ");
		scanf("%d", &scores[i]);
	}

	for (i = 0; i < SIZE; i++) {
		sum += scores[i];
	}
	mean = sum / SIZE;
	printf("���� ��� = %d\n", mean);
	return 0;
}