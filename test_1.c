/* ��ǻ�Ϳ� ����(1)����(2)��(3) ������ �ϴ� ���α׷���
�强�϶�. ��ǻ�ʹ� ����ڿ��� �˸��� �ʰ� ���������� �߿���
���Ƿ� �ϳ��� ����(�̸� �ʱ�ȭ���� ����д�)�Ѵ�. ����ڴ�
���α׷��� �Է� �ȳ� �޽����� ���� 3�� �߿��� �ϳ���
�����ϰ� �ȴ�. ������� ������ ������ ��ǻ�ʹ� ���� ������
�����Ͽ��� ���� �̰���� �������� �˷��ش�. */
#include <stdio.h>

int main() {
	int com = 1;
	int user = 0;
	//int s = 1, r = 2, p = 3;

	printf("���������� �� �ϳ��� ���ÿ�: ");
	scanf("%d", &user);

	if (user == 1 && com == 2)
		printf("��ǻ�Ͱ� �̰���ϴ�. -> %d : %d", user, com);
	else if (user == 1 && com == 3)
		printf("����ڰ� �̰���ϴ�. -> %d : %d", user, com);
	else if (user == 2 && com == 1)
		printf("����ڰ� �̰���ϴ�. -> %d : %d", user, com);
	else if (user == 2 && com == 3)
		printf(" ��ǻ�Ͱ� �̰���ϴ�. -> %d : %d", user, com);
	else if (user == 3 && com == 1)
		printf("����ڰ� �̰���ϴ�. -> %d : %d", user, com);
	else if (user == 3 && com == 2)
		printf("��ǻ�Ͱ� �̰���ϴ�. -> %d : %d", user, com);
	else
		printf("�����ϴ�");

	return 0;
}