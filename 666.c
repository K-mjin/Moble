#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int x, y, answer, i;
	srand(time(NULL));

	for (i = 0; i < 10; i++) {
		x = rand() % 10;	// 10���� ���� �������� ����ǹǷ�
		y = rand() % 10;	// 0~9������ ���� �����.
		printf("%d + %d = ",x, y);
		scanf("%d", &answer);
		if (x + y == answer)
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");
	}
	return 0;
}