/* ���� �Է��Ͽ��� ��� ������ ����ϴ� ���α׷���
�ۼ��Ͻÿ�.(��, ��:3~5��, ����:6~8��, ����:9~11��,
�ܿ�:12~2��) */
#include <stdio.h>

int main() {
	int month;

	printf("���� �Է��Ͻʽÿ�: ");
	scanf("%d", &month);

	(month >= 3) && (month <= 5) ? printf("��\n") : 0;
	(month >= 6) && (month <= 8) ? printf("����\n") : 0;
	(month >= 9) && (month <= 11) ? printf("����\n") : 0;
	(month == 12) || (month == 1) || (month == 2) ? printf("�ܿ�\n") : 0;
	(month == 0) || (month > 12) ? printf("errer\n") : 0;
// �ܿ￡�� <= �� ����ϸ� 0, 13 �� �ܿ￡ ���ԵǱ⶧����
// == �� ���� ó���� �ؾߵ�.

	return 0;
}