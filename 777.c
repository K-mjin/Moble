#include <stdio.h>

//(반환형이 없다 = return이 없다)

//// 1.반환형 ㅇ, 매개변수 ㅇ 
//int add(int x, int y) {
//	int sum;
//	sum = x + y;
//
//	return sum;
//}
//
//int main(void) {
//	int x, y, sum;
//	printf("정수 2개 입력: ");
//	scanf("%d %d", &x, &y);
//
//	sum = add(x, y);
//
//	printf("두 수의 합 %d \n", sum);
//}

//// 2. 반환형 ㅇ, 매개변수 x
//int get_int(void) {
//	int a;
//	
//	printf("정수 입력: ");
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
//	printf("두 수의 합: %d \n", sum);
//}

//// 3. 반환형 x, 매개변수 ㅇ
//void add(int a, int b) {
//	int sum;
//
//	sum = a + b;
//
//	printf("두 수의 합: %d", sum);
//}
// 
//int main(void) {
//	int x, y;
//	
//	printf("정수 2개를 입력; ");
//	scanf("%d %d", &x, &y);
//
//	add(x, y);
//}

// 4. 반환형 x, 매개변수 x
void print_1(void) {
	printf("================\n");
}

int main(void) {
	int x, y, sum;

	printf("정수 2개를 입력 \n");
	print_1();
	scanf("%d %d", &x, &y);

	sum = x + y;

	printf("두 수의 합: %d\n", sum);
	print_1();
}