#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>
using namespace cv;
using namespace std;

int main() {
	Mat img_color;
	img_color = imread("CGV.jpg", IMREAD_COLOR);
	imshow("color", img_color);

	int height = img_color.rows;
	int width = img_color.cols;

	// ȸ�� ������ ������ �������� �ʱ�ȭ 
	int angle = 1;
	int angle2 = 1;

	// ���� ������ ���� �̹����� ���������� ��ȯ�ϰ� �ռ��Ͽ� ȭ�鿡 ǥ��
	while (1) {
		// ȸ�� ����
		angle = angle + 5;
		angle2 = angle2 + 45;
		// `getRotationMatrix2D` �Լ��� �̹��� ȸ���� ���� 2x3 ��ȯ ��� 'M'�� ����
		// Point(width / 2.0, height / 2.0): ȸ���� �߽��� (�̹����� �߾�)
		// ++angle: 'angle' ������ 1 ������Ų �� �� ���� ���� ȸ�� ������ ���
		// 1: ������ ����. 1�� ���� ũ�⸦ �������� �ǹ�
		Mat M = getRotationMatrix2D(Point(width / 2.0, height / 2.0), ++angle, 1);	// ȸ��
		Mat img_rotated;	// // ȸ���� �̹����� ������ Mat ��ü
		// `warpAffine` �Լ��� `img_color`(���� �̹���)�� ��ȯ ��� 'M'�� �����Ͽ� 'img_rotated'�� ����� ����
		// Size(width, height): ��� �̹����� ũ�⸦ ������ �����ϰ� ����
		warpAffine(img_color, img_rotated, M, Size(width, height));
		// ��ȸ������
		Mat M2 = getRotationMatrix2D(Point(width / 2.0, height / 2.0), --angle2, 1);	// ��ȸ��
		Mat img_rotated2;
		warpAffine(img_color, img_rotated2, M2, Size(width, height));

		// �� ���� ȸ���� �̹����� �������� ��ġ�� ���� ���͸� ����(������ ȸ�� �̹���, ������ ȸ�� �̹���)
		vector<Mat>mat = { img_rotated, img_rotated2 };  //���� ����
		Mat cat_sum;
		// `hconcat` �Լ��� 'mat' ���Ϳ� ��� �̹������� ����(horizontal)���� ���ļ� 'cat_sum'�� ����
		hconcat(mat, cat_sum);  // // ���: [ ������_ȸ��_�̹��� | ������_ȸ��_�̹��� ] �������� ��ġ��
		// �� ��° ȸ���� �̹������� �������� ��ġ�� ���� �� �ٸ� ���͸� ����(������ ȸ�� �̹���, ������ ȸ�� �̹���)
		vector<Mat>mat2 = { img_rotated2, img_rotated };
		Mat cat_sum2;
		hconcat(mat2, cat_sum2); // // ���: [ ������_ȸ��_�̹��� | ������_ȸ��_�̹��� ] �������� ��ġ�� 2
		// ���� ���� �ռ��� ���� Mat ���͸� ����
		vector<Mat>mat_sum = { cat_sum, cat_sum2 };
		Mat cat_result; // ���� �ռ��� ū �̹����� ������ Mat ��ü
		// [ ������_ȸ��_�̹��� | ������_ȸ��_�̹��� ]
		 // [ ������_ȸ��_�̹��� | ������_ȸ��_�̹��� ]
		vconcat(mat_sum, cat_result);
		imshow("rotation", cat_result);
		waitKey(1);
	}

	////�̹��� �߾��� �߽����� �ݽð�������� 
	////45�� ȸ����Ű�� ����� ������
	//// `getRotationMatrix2D` �Լ��� �̹��� ȸ���� ���� 2x3 ��ȯ ��� 'M'�� ����
	//// Point(width / 2.0, height / 2.0): ȸ���� �߽��� (�̹����� �߾�)
	//// 1: ������ ����. 1�� ���� ũ�⸦ �������� �ǹ�
	//Mat M = getRotationMatrix2D(Point(width / 2.0, height / 2.0), 90, 2);
	//
	////ȸ���Ҷ� �߽���, ȸ������(��� �ݽð����, ���� �ð����), �̹��� ����(1�̸� ���� ũ��)
	////ȸ����� M�� �̹��� img_color�� ����
	//Mat img_rotated;
	//warpAffine(img_color, img_rotated, M, Size(width, height));

	//imshow("rotation", img_rotated);
	//waitKey(0);
	//return 0;
}