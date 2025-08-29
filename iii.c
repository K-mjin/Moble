#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand((unsigned)time(NULL));
	int answer = rand() % 100;
	int guess;
	int tries = 0;

	do {
		printf("정답을 추측해보세요: ");
		scanf("%d", &guess);
		tries++;

	if (guess > answer)
			printf("낮은 수를 입력하세요.\n");
	if (guess < answer)
			printf("높은 수를 입력하세요.\n");
	} while (guess != answer);

	printf("축하합니다! 시도횟수 = %d\n", tries);

	return 0;
}