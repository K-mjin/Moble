#include <stdio.h>

int get_sum(int array[], int size) {
	int i;
	int sum = 0;

	for (i = 0; i < size; i++) {
		sum += array[i];
	}
	return sum;
}

int main(void) {
	int m[3][6] = { {10,10,10,10,10,10},
					{10,10,10,10,10,10},
					{10,10,10,10,10,10} };

	//int result = get_sum(m[0], 6);
	//result += get_sum(m[1], 6);
	//result += get_sum(m[2], 6);

	//printf("정수의 합 = %d\n", result);

	//return 0;

	/*for (int i = 0; i < 3; i++) {
		printf("%d\n", get_sum(m[i], sizeof(m[i]) / sizeof(int)));

	}*/
}