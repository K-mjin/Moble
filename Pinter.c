#include <stdio.h>

void func1() {
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d \n", num);
}

void func2() {
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;

	ptr1 = &num1;
	ptr2 = &num2;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	ptr1 = &num2;
	ptr2 = &num1;

	printf(" ptr1 : %d \n ptr2 : %d", *ptr1, * ptr2);
}

// int �� ����var�� �����ϰ� 30
// �����ͺ��� ptr�� �����ϰ� var�� �ּҰ��� ����
// �����ͺ����� �̿��� var���� �ϳ� ������Ű��
// �����ͺ����� �̿��� var�� ���� ���
void func3() {
	int var = 30;
	int* ptr = &var;

	(*ptr)++;
	printf("%d", *ptr);
}

//  ���� �������� �Ǽ��� �Է¹޾� ������ ���ϴ� �ڵ��Դϴ�
// ������ �䱸�� ���� �ڵ带 �ϼ��ϼ���
// (�������� 3.14�� ����մϴ�. �Ҽ� �� °�ڸ����� ����ϼ���)
// double Ÿ���� ����var �������ϰ� ����ڷκ��� �ϳ��� �Ǽ��� �Է¹޾� ����
// �����ͺ����� ptr�����ϰ� var�� �ּҰ��� ����
// ptr ������ �̿��� ���� ������ ����ϼ���
void func4(){
	double var;
	scanf_s("%lf", &var);
	double* ptr = &var;

	printf("%.2lf", (*ptr) * (*ptr) * 3.14);
}

// call-by-value ( ���� ���� )
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	printf("a : %d \n", a);
	printf("b : %d \n", b);
}	// swap���� ���� ��ȯ������
void func5() {
	int val1 = 10;
	int val2 = 20;
	swap(val1, val2);

	printf("val1 : %d \n", val1);
	printf("va;2 : %d \n", val2);
	return 0;
}	// func5()���� �ҷ����� �ʾұ� ������ val1, val2 �� ���� �״��

// call-by-reference ( ���� �Ҵ�Ǿ��ִ� �ּҰ��� ���� )
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}	// swap���� val1, val2�� �ּҰ��� ��ȯ�� ���� �ٲ�� ������
void func6() {
	int val1 = 10;
	int val2 = 20;

	printf("Before %d, %d \n", val1, val2);
	swap(&val1, &val2);	// val1, val2 �ּ� ����
	printf("After %d, %d \n", val1, val2);
}	// func6()���� val1, val2�� ���� ����

int main() {
	func1();
}