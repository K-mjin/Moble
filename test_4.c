/* ����ڷκ��� 6���� ������(a~z)�� �Է¹޾�
������ ������ ������ ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
(������ a, e, i, o, u �̰�, �������� ����)*/
#include <stdio.h>

int main() {
	char text1, text2, text3, text4, text5, text6;
	int count = 0;	// ������ ���� ī��Ʈ
	int count1 = 0;	// ������ ���� ī��Ʈ

	printf("������ 6���� �Է��Ͻÿ�: ");
	scanf("%c %c %c %c %c %c", &text1, &text2, & text3, &text4, &text5, &text6);

	(text1 == 'a') || (text1 == 'e') || (text1 == 'i') || (text1 == 'o') || (text1 == 'u') ? count++: count1++;
	(text2 == 'a') || (text2 == 'e') || (text2 == 'i') || (text2 == 'o') || (text2 == 'u') ? count++: count1++;
	(text3 == 'a') || (text3 == 'e') || (text3 == 'i') || (text3 == 'o') || (text3 == 'u') ? count++: count1++;
	(text4 == 'a') || (text4 == 'e') || (text4 == 'i') || (text4 == 'o') || (text4 == 'u') ? count++: count1++;
	(text5 == 'a') || (text5 == 'e') || (text5 == 'i') || (text5 == 'o') || (text5 == 'u') ? count++: count1++;
	(text6 == 'a') || (text6 == 'e') || (text6 == 'i') || (text6 == 'o') || (text6 == 'u') ? count++: count1++;

	printf("������ �� %d, ������ �� %d \n", count, count1);

	return 0;
}