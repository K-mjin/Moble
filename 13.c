#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* list;
	int i, students, sum = 0;

	printf("�л��� �� : ");
	scanf("%d", &students);

	list = (int*)malloc(students * sizeof(int));
	if (list == NULL) {
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}
	for (i = 0; i < students; i++) {
		printf("�л� #%d ���� : ", i + 1);
		scanf("%d", &list[i]);
	}
	for (i = 0; i < students; i++)
		sum += list[i];
	printf("���� ��� = %.2f\n", (double)sum / students);
	free(list);
	return 0;
}