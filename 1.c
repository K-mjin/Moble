#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) {
	int sum;
	sum = a + b;
	return sum;
}

int max(int x, int y) {
	if (x > y)
		return x;
	else if (x < y)
		return y;
	printf("%d %d", x, y);
}

int min(int x, int y) {
	if (x > y)
		return y;
	else if (x < y)
		return x;
}

int get_int() {
	int a;
	printf("������ �Է��Ͻÿ�. \n");
	scanf("%d", &a);
	return a;
}

int main() {
	int a, b;
	a = get_int();
	b = get_int();
	int s = max(a, b);
	printf("��: %d\n", add(a, b));
	printf("�ִ밪 : %d\n", max(a, b));
	printf("�ּڰ� : %d\n", min(a, b));
	return 0;
}
	


	

