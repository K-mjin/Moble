#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand((unsigned)time(NULL));
	int answer = rand() % 100;
	int guess;
	int tries = 0;

	do {
		printf("������ �����غ�����: ");
		scanf("%d", &guess);
		tries++;

	if (guess > answer)
			printf("���� ���� �Է��ϼ���.\n");
	if (guess < answer)
			printf("���� ���� �Է��ϼ���.\n");
	} while (guess != answer);

	printf("�����մϴ�! �õ�Ƚ�� = %d\n", tries);

	return 0;
}