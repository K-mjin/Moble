//// ��������
//#include <stdio.h>
//#define SIZE 10
//
//int main(void) {
//	int list[SIZE] = { 3,2,9,7,1,4,8,0,6,5 };
//	int i, j, temp, least;
//
//	printf("������ �迭\n");
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
//	printf("\n���ĵ� �迭\n");
//	for (i = 0; i < SIZE; i++)
//		printf("%d", list[i]);
//	printf("\n");
//
//	return 0;
//}

//// ���� Ž��
//#include <stdio.h>
//#define SIZE 10
//
//int main(void) {
//	int key, i;
//	int list[SIZE] = { 1,2,3,4,5,6,7,8,9 };
//
//	printf("Ž���� ���� �Է��Ͻÿ�: ");
//	scanf("%d", &key);
//
//	for (i = 0; i < SIZE; i++)
//		if (list[i] == key)
//
//	printf("Ž�� ���� �ε��� = %d\n", i);
//	printf("Ž�� ����\n");
//	return 0;
//}

//// ���� Ž��
//#include <stdio.h>
//#define SIZE 16
//int binary_search(int list[], int n, int key);
//
//int main(void) {
//	int key; 
//	int grade[SIZE] = { 2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47 };
//
//	printf("Ž�� �� ���� �Է��Ͻÿ�: ");
//	scanf("%d", &key);
//	printf("Ž�� ��� = %d\n", binary_search(grade, SIZE, key));
//
//	return 0;
//}
//
//int binary_search(int list[], int n, int key) {
//	int low, high, middle;
//	low = 0;
//	high = n - 1;
//
//	while (low <= high) {				// ���� ���ڵ��� �����ִٸ�
//		printf("[%d %d]\n", low, high);	// ���Ѱ� ������ ����Ѵ�.
//		middle = (low + high) / 2;		// �߰� ��ġ�� ����Ѵ�.
//		if (key == list[middle])		// ��ġ�ϸ� Ž�� ����
//			return middle;				// �Է� ���� ���� �߰� ���ҿ� ���ٸ� �߰� ���� ��ȯ
//		else if (key > list[middle])	// �Է� ���� ���� �߰� ���Һ��� ũ�ٸ�
//			low = middle + 1;			// ���ο� ������ low ����, �߰��� + 1�� �ּҰ��� ��
//		else                            
//			high = middle - 1;			// �Է¹��� ���� �߰�
//	}
//	return -1;
//}

//// 2���� �迭�� Ȱ��
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define ROWS 3
//#define COLS 5
//
//int main(void) {
//	int s[ROWS][COLS];	// 2���� �迭 ����
//	int i, j;	// 2���� �ε��� ����
//		srand((unsigned)time(NULL));	// ���� ������ �ʱ�ȭ
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

//// 2���� �迭�� rand()_��� �ٸ� �� �Է�
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