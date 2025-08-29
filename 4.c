#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 0부터 99까지의 난수(실수형태)를 발생하여 크기가 3인 
// 배열 p에 저장한다.
void getSensorData(double* p) {
	srand((unsigned)time(NULL));

	p[0] = rand() % 100;
	p[1] = rand() % 100;
	p[2] = rand() % 100;
	return 0;
}

int main(void) {
	double sensorData[3];
	getSensorData(sensorData);

	printf("왼쪽 센서와 장애물과의 거리 : %lf\n", sensorData[0]);
	printf("중간 센서와 장애물과의 거리 : %lf\n", sensorData[1]);
	printf("오른쪽 센서와 장애물과의 거리 : %lf\n", sensorData[2]);
	return 0;
}