#include <stdio.h>
#define Y 3
#define P 5

int sum(int scores[Y][P]) {
	int y, p;
	int total = 0;

	for (y = 0; y < Y; y++)
		for (p = 0; p < P; p++)
			total += scores[y][p];

	return total;
}

int main(void) {
	int sales[Y][P] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int total_sale;

	total_sale = sum(sales);
	printf("총매출은 %d입니다. \n", total_sale);

	return 0;
}

//int sum(int scores[Y][P]) {
//	int y, p;
//	int total = 0;
//
//	for (y = 0; y < Y; y++)
//		for (p = 0; p < P; p++)
//			total += scores[y][p];
//
//	return total;
//}