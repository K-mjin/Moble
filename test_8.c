#include <stdio.h>

int main() {
	int i, j, num;

	printf("출력할 줄 수를 입력하세요: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}