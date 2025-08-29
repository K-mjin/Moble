/* 사용자로부터 6개의 영문자(a~z)를 입력받아
모음의 개수와 자음의 개수를 출력하는 프로그램을 작성하시오.
(모음은 a, e, i, o, u 이고, 나머지는 자음)*/
#include <stdio.h>

int main() {
	char text1, text2, text3, text4, text5, text6;
	int count = 0;	// 모음의 수를 카운트
	int count1 = 0;	// 자음의 수를 카운트

	printf("영문자 6개를 입력하시오: ");
	scanf("%c %c %c %c %c %c", &text1, &text2, & text3, &text4, &text5, &text6);

	(text1 == 'a') || (text1 == 'e') || (text1 == 'i') || (text1 == 'o') || (text1 == 'u') ? count++: count1++;
	(text2 == 'a') || (text2 == 'e') || (text2 == 'i') || (text2 == 'o') || (text2 == 'u') ? count++: count1++;
	(text3 == 'a') || (text3 == 'e') || (text3 == 'i') || (text3 == 'o') || (text3 == 'u') ? count++: count1++;
	(text4 == 'a') || (text4 == 'e') || (text4 == 'i') || (text4 == 'o') || (text4 == 'u') ? count++: count1++;
	(text5 == 'a') || (text5 == 'e') || (text5 == 'i') || (text5 == 'o') || (text5 == 'u') ? count++: count1++;
	(text6 == 'a') || (text6 == 'e') || (text6 == 'i') || (text6 == 'o') || (text6 == 'u') ? count++: count1++;

	printf("모음의 수 %d, 자음의 수 %d \n", count, count1);

	return 0;
}