/* ���� �Է¹޾� 3~5���� ��, 6~8���� ����, 9~11���� ����, 
12, 1, 2���� �ܿ��� ����Ͻÿ�. ��,switch������ �ۼ��Ͻÿ�. */
#include <stdio.h>

int main() {
	int month;

	printf("���� �Է��Ͻÿ�: ");
	scanf("%d", &month);

	switch (month) {
	case 3:
	case 4:
	case 5:
		printf("��");
		break;
	case 6:
	case 7:
	case 8:
		printf("����");
		break;
	case 9:
	case 10:
	case 11:
		printf("����");
		break;
	case 12:
	case 1:
	case 2:
		printf("�ܿ�");
		break;
	default:
		printf("��ȿ���� ���� ���Դϴ�.");
		break;
	}
}