#include <stdio.h>
#include <time.h>

int roll_dice() 
{
	int sum = 0;
	int a = (rand() % 6) + 1;
	for (int i = 0; i < 3; i++) {
		printf("%d : %d \n", i+1,  a);
		sum += a;
	}
	printf("�� �� : %d \n", sum);
	return sum;
}

void roll_result(int x, int y) {
	if (x > y)
		printf("�÷��̾� �¸�!");
	else if (x < y)
		printf("��ǻ�� �¸�!");
	else
		printf("�����ϴ�~");
}

int main(void) 
{
	srand((unsigned)time(NULL));
	int user, computer;
	user = roll_dice();
	computer = roll_dice();

	roll_result(user, computer);
	
	return 0;
}