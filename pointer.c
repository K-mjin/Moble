#include <stdio.h>
#include <stdlib.h>

void func1() {
	/*int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d \n", num);*/
}

void func2() {
	/*int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;

	ptr1 = &num1;
	ptr2 = &num2;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	ptr1 = &num2;
	ptr2 = &num1;

	printf("ptr1�� ����Ű�� ��:%d \n ptr2�� ����Ű�� ��:%d", *ptr1, *ptr2);*/
}

// int�� ���� var�� �����ϰ� 30
// ������ ���� ptr�� �����ϰ� var�� �ּҰ��� ����
// ������ ������ �̿��� var ���� �ϳ� ������Ű��
// ������ ������ �̿��� var�� ���� ���
void func3() {
	int var = 30;
	int* ptr = &var;

	(*ptr)++;

	printf("var : %d", *ptr);
}

// ���� �������� �Ǽ��� �Է¹޾� ������ ���ϴ� �ڵ��Դϴ�.
// (�������� 3.14�� ����մϴ�. �Ҽ� ��° �ڸ����� ����ϼ���.)
// double Ÿ���� ���� var�� �����ϰ� ����ڷκ��� �ϳ��� �Ǽ��� �Է¹޾� ����
// ������ ������ ptr�����ϰ� var�� �ּҰ��� ����
// ptr ������ �̿��� ���� ������ ����ϼ���.
void func4() {
	double var;
	double* ptr;
	scanf_s("%lf", &var);

	ptr = &var;
	printf("%.2f", 3.14 * (*ptr) * (*ptr));
}

// int ���� �ϳ��� �����ϱ� ���� malloc���� �޸𸮸� �Ҵ��ϰ� 20�� ������ ���
void func5() {
	int* p;
	p = (int*)malloc(sizeof(int));
	
	(*p) = 20;
	printf("%d", *p);
}

// ���� �ϳ��� �����ϱ� ���� ���� �޸𸮸� �Ҵ��ϰ� �ҹ��� a�� ������ ���
void func6() {
	char* p;
	p = (char*)malloc(sizeof(char));

	(*p) = 'a';
	printf("%c", *p);
}

// int ���� 7���� ������ �޸𸮸� �������� �Ҵ��ϰ� 1���� 7������ ������ ���
void func7() {
	int* p;
	int i;
	p = (int*)malloc(sizeof(int) * 7);

	for (i = 0; i < 7; i++) {
		scanf_s("%d", &p[i]);
		//printf("%d\n", p[i]);
	}
	for (i = 0; i < 7; i++) {
		//scanf_s("%d \n", &p[i]);
		printf("%d ", p[i]);
	}
}

// ���̰� 10�� �迭�� �������� �����ϰ� 3���� �����ϴ� 3�� ��� 10�� ����
// ( ���̰� 10�� �迭�� 3���� �����ϴ� 3�� ��� 10�� ���� )
void func8() {
	char a[10];
	int i = 0;
	for (i = 0; i < 10; i++) {
		a[i] = 3 * (i + 1);

		printf("%d ", a[i]);
	}
	
}

// ���̰� 10�� �迭�� �������� �����ϰ� 3���� �����ϴ� 3�� ��� 10���� ����
void func9() {
	int* p = (int*)malloc(sizeof(int) * 10);

	for (int i = 0; i < 10; i++) {
		p[i] = 3 * (i + 1);

		printf("%d ", p[i]);
	}
	free(p);
}

// ����ڷκ��� �̸��� �Է¹޾� �����ϴ� ����
// ( ���ڿ��� malloc���� ������ �޸𸮿� ����.
// �̸��� �ִ� ����� 29�ڱ��� �Է� ���� )
void func10() {
	char* p = (char*)malloc(sizeof(char) * 30);
	
	scanf_s("%s", p);
	printf("%s", p);
}

// 5���� �̸��� �Է¹ޱ� ���� ������ �ڵ带 �ϼ��ϼ���
// ( �̸��� ������ �޸𸮴� �������� �Ҵ�
void func11() {
	char* str_names[5];

	for (int i = 0; i < 5; i++) {

	}
	for (int i = 0; i < 5; i++) {

	}
}

int main() {
	
	func11();

}