/* 컴퓨터와 가위(1)바위(2)보(3) 게임을 하는 프로그램을
장성하라. 컴퓨터는 사용자에게 알리지 않고 가위바위보 중에서
임의로 하나를 선택(미리 초기화값을 적어둔다)한다. 사용자는
프로그램의 입력 안내 메시지에 따라서 3개 중에서 하나를
선택하게 된다. 사용자의 선택이 끝나면 컴퓨터는 누가 무엇을
선택하였고 누가 이겼는지 비겼는지를 알려준다. */
#include <stdio.h>

int main() {
	int com = 1;
	int user = 0;
	//int s = 1, r = 2, p = 3;

	printf("가위바위보 중 하나를 내시오: ");
	scanf("%d", &user);

	if (user == 1 && com == 2)
		printf("컴퓨터가 이겼습니다. -> %d : %d", user, com);
	else if (user == 1 && com == 3)
		printf("사용자가 이겼습니다. -> %d : %d", user, com);
	else if (user == 2 && com == 1)
		printf("사용자가 이겼습니다. -> %d : %d", user, com);
	else if (user == 2 && com == 3)
		printf(" 컴퓨터가 이겼습니다. -> %d : %d", user, com);
	else if (user == 3 && com == 1)
		printf("사용자가 이겼습니다. -> %d : %d", user, com);
	else if (user == 3 && com == 2)
		printf("컴퓨터가 이겼습니다. -> %d : %d", user, com);
	else
		printf("비겼습니다");

	return 0;
}