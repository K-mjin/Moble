//// 선택정렬
//#include <stdio.h>
//#define SIZE 10
//
//int main(void) {
//	int list[SIZE] = { 3,2,9,7,1,4,8,0,6,5 };
//	int i, j, temp, least;
//
//	printf("원래의 배열\n");
//	for (i = 0; i < SIZE; i++)
//		printf("%d", list[i]);
//	printf("\n");
//
//	for (i = 0; i < SIZE - 1; i++) {
//		least = i;
//		for (j = i + 1; j < SIZE; j++)
//			if (list[j] < list[least])
//				least = j;
//
//		temp = list[i];
//		list[i] = list[least];
//		list[least] = temp;
//	}
//
//	printf("\n정렬된 배열\n");
//	for (i = 0; i < SIZE; i++)
//		printf("%d", list[i]);
//	printf("\n");
//
//	return 0;
//}

//// 순차 탐색
//#include <stdio.h>
//#define SIZE 10
//
//int main(void) {
//	int key, i;
//	int list[SIZE] = { 1,2,3,4,5,6,7,8,9 };
//
//	printf("탐색할 값을 입력하시오: ");
//	scanf("%d", &key);
//
//	for (i = 0; i < SIZE; i++)
//		if (list[i] == key)
//
//	printf("탐색 성공 인덱스 = %d\n", i);
//	printf("탐색 종료\n");
//	return 0;
//}

//// 이진 탐색
//#include <stdio.h>
//#define SIZE 16
//int binary_search(int list[], int n, int key);
//
//int main(void) {
//	int key; 
//	int grade[SIZE] = { 2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47 };
//
//	printf("탐색 할 값을 입력하시오: ");
//	scanf("%d", &key);
//	printf("탐색 결과 = %d\n", binary_search(grade, SIZE, key));
//
//	return 0;
//}
//
//int binary_search(int list[], int n, int key) {
//	int low, high, middle;
//	low = 0;
//	high = n - 1;
//
//	while (low <= high) {				// 아직 숫자들이 남아있다면
//		printf("[%d %d]\n", low, high);	// 하한과 상한을 출력한다.
//		middle = (low + high) / 2;		// 중간 위치를 계산한다.
//		if (key == list[middle])		// 일치하면 탐색 성공
//			return middle;				// 입력 받은 값이 중간 원소와 같다면 중간 원소 반환
//		else if (key > list[middle])	// 입력 받은 값이 중간 원소보다 크다면
//			low = middle + 1;			// 새로운 값으로 low 설정, 중간값 + 1이 최소값이 됨
//		else                            
//			high = middle - 1;			// 입력받은 값이 중간
//	}
//	return -1;
//}

//// 2차원 배열의 활용
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define ROWS 3
//#define COLS 5
//
//int main(void) {
//	int s[ROWS][COLS];	// 2차원 배열 선언
//	int i, j;	// 2개의 인덱스 변수
//		srand((unsigned)time(NULL));	// 난수 생성기 초기화
//	
//		for (i = 0; i < ROWS; i++) {
//			for (j = 0; j < COLS; j++)
//				s[i][j] = rand() % 100;
//		}
//		
//		for (i = 0; i < ROWS; i++) {
//			for (j = 0; j < COLS; j++)
//				printf("% 02d", s[i][j]);
//			printf("\n");
//		}
//		return 0;
//}

//// 2차원 배열의 rand()_모두 다른 수 입력
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <stdbool.h>
//
//#define ROWS 5
//#define COLS 5
//
//bool inUnique(int array[ROWS][COLS], int num, int currentRow, int currentCol) {
//	for (int i=0; i<= currentRow)
//}

#include <stdio.h>

int main(void) {
	/*int i = 10;
	double f = 12.3;
	int* pi = NULL;

	double* pf = NULL;
	pi = &i;
	pf = &f;

	printf("%p %p \n", pi, &i);
	printf("%p %p \n", pf, &f);*/

	/*int i = 10;
	int* p;
	p = &i;
	printf("%d", *p);*/

	/*int i = 3000;
	int* p = NULL;
	p = &i;
	printf("p = %p\n", p);
	printf("&i = %p\n\n", &i);
	printf("i = %d\n", i);
	printf("*p = %d\n", *p);*/

	//int x = 10, y = 20;
	//int* p;

	//p = &x;
	//printf("p = %d\n", p);	// printf("&x = %d\n", &x);
	//printf("*p = %d\n\n", *p);

	//p = &y;
	//printf("p = %d\n", p);	// printf("&y = %d\n", &y);
	//printf("*p = %d\n", *p);

	/*int i = 10; 
	int* p;

	p = &i;
	printf("i = %d\n", i);

	*p = 20;
	printf("i = %d\n", i);*/



	return 0;
}