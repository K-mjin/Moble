#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	Vec3f vec(1.0f, 2.0f, 3.0f);		// 3���� ���� ����
	cout << "Vec3f : " << vec << endl;

	// ������ ��ҿ� ����
	float x = vec[0];
	float y = vec[1];
	float z = vec[2];

	cout << "x : " << x << ", y : " << y << ", z : " << z << endl;

	return 0;
}