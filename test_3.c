/* 놀이공원에서 롤러코스터에 타려면 키가 140cm이상이고 
나이가 10살 이상이어야 한다고 가정하자. 사용자에게 키와
나이를 질문한 후에 "타도좋습니다" 또는 "죄송합니다"를 
출력하는 프로그램을 작성하여 보자. */
#include <stdio.h>

int main() {
	int height, age;

	printf("키와 나이를 입력하십시오: ");
	scanf("%d %d", &height, &age);

	if (height >= 140 && age >= 10)
		printf("타도 좋습니다.");
	else
		printf("죄송합니다.");

	return 0;
}