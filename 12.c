#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* list;
	list = (int*)malloc(3 * sizeof(int));
	if (list == NULL) {
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}
	list[0] = 10;
	list[1] = 20;
	list[2] = 30;
	for (int i = 0; i < 3; i++) {
		printf("�迭�� �����޸� �Ҵ� ��� = %d\n", list[i]);
	}
	free(list);
	return 0;
}