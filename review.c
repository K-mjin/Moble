#include <stdio.h>
#define spm 60
#define mpt 3600

int main() {
	/*int number;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &number);

	if (number > 0)
		printf("����Դϴ�. \n");

	printf("�Էµ� ���� %d�Դϴ�.", number);*/

	//// if���� ����Ͽ� ���밪�� ���ϴ� ���α׷�
	//int number;

	//printf("������ �Է��Ͻÿ�: ");
	//scanf("%d", &number);

	//if (number < 0)
	//	number = -number;

	//printf("���밪�� %d �Դϴ�. \n", number);

	//// if-else���� �̿��Ͽ� Ȧ���� ¦���� �����Ѵ�.
	//int number;

	//printf("������ �Է��Ͻÿ�:");
	//scanf("%d", &number);

	//if (number % 2 == 0)
	//	printf("¦���Դϴ�.\n");
	//else
	//	printf("Ȧ���Դϴ�.\n");

	//// ����ڷκ��� �� ���� ������ �Է¹޾Ƽ� ��������
	//// �������� �����Ѵ�. �������� �ϱ� ���� �и� 0������
	//// if���� �̿��Ͽ� �˻��Ѵ�.
	//int n1, n2, n3;

	//printf("���ڸ� �Է��Ͻÿ�: ");
	//scanf("%d", &n1);
	//printf("�и� �Է��Ͻÿ�: ");
	//scanf("%d", &n2);

	//if (n2 == 0)
	//	printf("0���� ���� �� �����ϴ�.\n");
	//else {
	//	n3 = n1 / n2;
	//	printf("����� %d�Դϴ�.\n", n3);
	//}

	//// ���� �Ǵ� ���α׷�
	//int year;

	//printf("������ �Է��Ͻÿ�:");
	//scanf("%d", &year);

	//if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	//	printf("%d���� �����Դϴ�.", year);
	//else
	//	printf("%d���� ������ �ƴմϴ�.", year);

	//// �л����� ������ �޾Ƽ� ������ ����ϴ� ���α׷���
	//// �ۼ��Ͽ� �����Ͽ�����.
	//int score;

	//printf("������ �Է��Ͻÿ�: ");
	//scanf("%d", &score);

	//if (score >= 90)
	//	printf("A����");
	//else if (score >= 80)
	//	printf("B����");
	//else if (score >= 70)
	//	printf("C����");
	//else if (score >= 60)
	//	printf("D����");
	//else
	//	printf("F����");

	//// Ű���忡�� ���ڸ� �޾Ƽ� ���ڵ��� �빮��(A-Z0,
	//// �ҹ���(a-z), ����(0-9), �� ���� ���ڵ�� �����Ͽ� ����.
	//char ch;

	//printf("���ڸ� �Է��Ͻÿ�: ");
	//scanf("%c", &ch);

	//if (ch >= 'A' && ch <= 'Z')
	//	printf("%c�� �빮���Դϴ�.", ch);
	//else if (ch >= 'a' && ch <= 'z')
	//	printf("%c�� �ҹ����Դϴ�.", ch);
	//else if (ch >= '0' && ch <= '9')
	//	printf("%c�� �����Դϴ�.", ch);
	//else
	//	printf("%c�� ��Ÿ�����Դϴ�.", ch);

	//// �������
	//char op;
	//int x, y, result;

	//printf("������ �Է��Ͻÿ�\n");
	//printf("(��: 2 + 5)");
	//printf(">> ");
	//scanf("%d %c %d", &x, &op, &y);

	//if (op == '+')
	//	result = x + y;
	//else if (op == '-')
	//	result = x - y;
	//else if (op == '*')
	//	result = x * y;
	//else if (op == '/')
	//	result = x / y;
	//else if (op == '%')
	//	result = x % y;
	//else
	//	printf("�������� �ʴ� �������Դϴ�.");

	//printf("%d %c %d = %d", x, op, y, result);

	/*int input, minute, second, hour;
	
	printf("�ʸ� �Է��Ͻÿ�:");
	scanf("%d", &input);

	hour = input / mpt;
	second = input % mpt;
	minute = second / spm;
	second = second % spm;

	printf("%d�ʴ� %d�� %d�� %d�� �Դϴ�. \n", input, hour, minute, second);*/

	int user, change;
	int price, c5000, c1000, c500, c100, c50, c10;

	printf("���ǰ��� �Է��Ͻÿ�: ");
	scanf("%d", &price);
	printf("����ڰ� �� ��");
	scanf("%d", &user);

	change = user - price;
	
	c5000 = change / 5000;
	change = change % 5000;
	
	c1000 = change / 1000;
	change = change % 1000;
	
	c500 = change / 500;
	change = change % 500;

	c100 = change / 100;
	change = change % 100;

	c50 = change / 50;
	change = change % 50;

	c10 = change / 10;
	change = change % 10;

	printf("��õ���� : %d�� \n", c5000);
	printf("õ���� : %d�� \n", c1000);
	printf("������� : %d�� \n", c500);
	printf("����� : %d�� \n", c100);
	printf("���ʿ��� : %d�� \n", c50);
	printf("�ʿ��� : %d�� \n", c10);

	printf("�Ž����� �� �ݾ� : %d \n", 5000 * c5000 + 1000 * c1000 + 500 * c500 + 100 * c100 + 50 * c50 + 10 * c10);

	return 0;
}