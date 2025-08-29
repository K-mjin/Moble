#include <stdio.h>
struct member {
	char title[20];
	char sender[50];
	char receiver[50];
	char content[20];
};

int main(void) {

	struct member m;


	/*printf("메일제목 : ");
	scanf("%s", &m.title);
	printf("수신자 : ");
	scanf("%s", &m.sender);
	printf("발신자 : ");
	scanf("%s", &m.receiver);
	printf("내용 : ");
	scanf("%s", &m.content);

	printf("메일제목 : %s\n", m.title);
	printf("수신자 : %s\n", m.sender);
	printf("발신자 : %s\n", m.receiver);
	printf("내용 : %s\n", m.content);*/

	// gets 로도 가능
}