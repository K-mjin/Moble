/* 2자리 숫자로 이루어진 복권이 있다. 사용자가 가지고 있는
복권번호가 2자리 모두 일치한다면 100만원을 받고 2자리 중 
하나만 일치하면 50만원을 받는다. 하나도 일치하지 않으면 
상금은 없다. 복권번호는 임의의 숫자로 미리 적어두고 입력을
받도록 한다. */
#include <stdio.h>

int main() {
	int user;
	int num = 45;

	printf("2자리 숫자 복권번호를 입력하시오: ");
	scanf("%d", &user);

	if ((user / 10 == num / 10) && (user % 10 == num % 10))
		printf("100만원 당첨!!!");
	else if ((user / 10 == num / 10) || (user % 10 == num % 10))
		printf("50만원 당첨!!!");
	else
		printf("미당첨 ㅜㅜ");
	
	return 0;

}