#include <stdio.h>
#define spm 60
#define mpt 3600

int main() {
	/*int number;

	printf("정수를 입력하시오:");
	scanf("%d", &number);

	if (number > 0)
		printf("양수입니다. \n");

	printf("입력된 값은 %d입니다.", number);*/

	//// if문을 사용하여 절대값을 구하는 프로그램
	//int number;

	//printf("정수를 입력하시오: ");
	//scanf("%d", &number);

	//if (number < 0)
	//	number = -number;

	//printf("절대값은 %d 입니다. \n", number);

	//// if-else문을 이용하여 홀수와 짝수를 구분한다.
	//int number;

	//printf("정수를 입력하시오:");
	//scanf("%d", &number);

	//if (number % 2 == 0)
	//	printf("짝수입니다.\n");
	//else
	//	printf("홀수입니다.\n");

	//// 사용자로부터 두 개의 정수를 입력받아서 정수간의
	//// 나눗셈을 실행한다. 나눗셈을 하기 전에 분모가 0인지를
	//// if문을 이용하여 검사한다.
	//int n1, n2, n3;

	//printf("분자를 입력하시오: ");
	//scanf("%d", &n1);
	//printf("분모를 입력하시오: ");
	//scanf("%d", &n2);

	//if (n2 == 0)
	//	printf("0으로 나눌 수 없습니다.\n");
	//else {
	//	n3 = n1 / n2;
	//	printf("결과는 %d입니다.\n", n3);
	//}

	//// 윤년 판단 프로그램
	//int year;

	//printf("연도를 입력하시오:");
	//scanf("%d", &year);

	//if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	//	printf("%d년은 윤년입니다.", year);
	//else
	//	printf("%d년은 윤년이 아닙니다.", year);

	//// 학생들의 성적을 받아서 학점을 출력하는 프로그램을
	//// 작성하여 실행하여보자.
	//int score;

	//printf("성적을 입력하시오: ");
	//scanf("%d", &score);

	//if (score >= 90)
	//	printf("A학점");
	//else if (score >= 80)
	//	printf("B학점");
	//else if (score >= 70)
	//	printf("C학점");
	//else if (score >= 60)
	//	printf("D학점");
	//else
	//	printf("F학점");

	//// 키보드에서 문자를 받아서 문자들을 대문자(A-Z0,
	//// 소문자(a-z), 숫자(0-9), 그 외의 문자들로 구분하여 보자.
	//char ch;

	//printf("문자를 입력하시오: ");
	//scanf("%c", &ch);

	//if (ch >= 'A' && ch <= 'Z')
	//	printf("%c는 대문자입니다.", ch);
	//else if (ch >= 'a' && ch <= 'z')
	//	printf("%c는 소문자입니다.", ch);
	//else if (ch >= '0' && ch <= '9')
	//	printf("%c는 숫자입니다.", ch);
	//else
	//	printf("%c는 기타문자입니다.", ch);

	//// 산술계산기
	//char op;
	//int x, y, result;

	//printf("수식을 입력하시오\n");
	//printf("(예: 2 + 5)");
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
	//	printf("지원되지 않는 연산자입니다.");

	//printf("%d %c %d = %d", x, op, y, result);

	/*int input, minute, second, hour;
	
	printf("초를 입력하시오:");
	scanf("%d", &input);

	hour = input / mpt;
	second = input % mpt;
	minute = second / spm;
	second = second % spm;

	printf("%d초는 %d시 %d분 %d초 입니다. \n", input, hour, minute, second);*/

	int user, change;
	int price, c5000, c1000, c500, c100, c50, c10;

	printf("물건값을 입력하시오: ");
	scanf("%d", &price);
	printf("사용자가 낸 돈");
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

	printf("오천원권 : %d장 \n", c5000);
	printf("천원권 : %d장 \n", c1000);
	printf("오백원권 : %d장 \n", c500);
	printf("백원권 : %d장 \n", c100);
	printf("오십원권 : %d장 \n", c50);
	printf("십원권 : %d장 \n", c10);

	printf("거스름돈 총 금액 : %d \n", 5000 * c5000 + 1000 * c1000 + 500 * c500 + 100 * c100 + 50 * c50 + 10 * c10);

	return 0;
}