#include <stdio.h>

//(��ȯ���� ���� = return�� ����)

//// 1.��ȯ�� ��, �Ű����� �� 
//int add(int x, int y) {
//	int sum;
//	sum = x + y;
//
//	return sum;
//}
//
//int main(void) {
//	int x, y, sum;
//	printf("���� 2�� �Է�: ");
//	scanf("%d %d", &x, &y);
//
//	sum = add(x, y);
//
//	printf("�� ���� �� %d \n", sum);
//}

//// 2. ��ȯ�� ��, �Ű����� x
//int get_int(void) {
//	int a;
//	
//	printf("���� �Է�: ");
//	scanf("%d", &a);
//
//	return a;
//}
//
//int main(void) {
//	int x, y, sum;
//	x = get_int();
//	y = get_int();
//
//	sum = x + y;
//
//	printf("�� ���� ��: %d \n", sum);
//}

//// 3. ��ȯ�� x, �Ű����� ��
//void add(int a, int b) {
//	int sum;
//
//	sum = a + b;
//
//	printf("�� ���� ��: %d", sum);
//}
// 
//int main(void) {
//	int x, y;
//	
//	printf("���� 2���� �Է�; ");
//	scanf("%d %d", &x, &y);
//
//	add(x, y);
//}

// 4. ��ȯ�� x, �Ű����� x
void print_1(void) {
	printf("================\n");
}

int main(void) {
	int x, y, sum;

	printf("���� 2���� �Է� \n");
	print_1();
	scanf("%d %d", &x, &y);

	sum = x + y;

	printf("�� ���� ��: %d\n", sum);
	print_1();
}