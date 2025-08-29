///* 크기가 3인 int형 배열을 생성하고 사용자로부터 정수를 받아서
//배열을 채우시오. 배열 요소의 주소값을 다음과 같이 출력하는 
//프로그램을 작성하시오.*/
//#include <stdio.h>
//
//int main(void) {
//	int arr[3] = { 0 };
//	int i;
//
//	for (i = 0; i < 3; i++) {
//		printf("정수를 입력하시오: ");
//		scanf("%d", &arr[i]);
//	}
//
//	printf("========================\n");
//	printf("주소 \t\t   값\n");
//	printf("========================\n");
//
//	printf("%p\t%d\n", &arr[0], arr[0]);
//	printf("%p\t%d\n", &arr[1], arr[1]);
//	printf("%p\t%d\n", &arr[2], arr[2]);
//	/*
//	for ( i=0; i<3; i++) {
//		printf("%p  \t   %d\n, &arr[i], arr[i]);
//	}
//	*/
//}