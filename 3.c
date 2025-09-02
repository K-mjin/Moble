#include <stdio.h>
#define SIZE 5

int main() {
	int i;
	int scores[SIZE];
	int sum = 0;
	int mean;

	for (i = 0; i < SIZE; i++) {
		printf("학생들의 성적을 입력하시오 : ");
		scanf("%d", &scores[i]);
	}

	for (i = 0; i < SIZE; i++) {
		sum += scores[i];
	}
	mean = sum / SIZE;
	printf("성적 평균 = %d\n", mean);
	return 0;
}