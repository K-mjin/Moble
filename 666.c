#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int x, y, answer, i;
	srand(time(NULL));

	for (i = 0; i < 10; i++) {
		x = rand() % 10;	// 10으로 나눈 나머지가 저장되므로
		y = rand() % 10;	// 0~9사이의 값이 저장됨.
		printf("%d + %d = ",x, y);
		scanf("%d", &answer);
		if (x + y == answer)
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");
	}
	return 0;
}