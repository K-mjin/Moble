/* ȯ���� ����ϴ� ���α׷� */
#include <stdio.h>

int main(void) {
	double rate, usd;	// rate : ��/�޷� ȯ��, usd : �޷�ȭ
	int krw;			// krw : ��ȭ�� ������ ������ ����
	

	printf("ȯ���� �Է��Ͻÿ�: ");	// �Է� �ȳ� �޽���
	scanf("%lf", &rate);			// ����ڷκ��� ȯ�� �Է�

	printf("��ȭ �ݾ��� �Է��Ͻÿ� : ");	// �Է� �ȳ� �޽���
	scanf("%d", &krw);						// ��ȭ �ݾ� �Է�

	usd = krw / rate;						// �޷�ȭ�� ȯ��

	printf("��ȭ %d���� %lf�޷��Դϴ�.", krw, usd);

	return 0;
}