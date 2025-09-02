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

	// 회전 각도를 제어할 변수들을 초기화 
	int angle = 1;
	int angle2 = 1;

	// 무한 루프를 통해 이미지를 연속적으로 변환하고 합성하여 화면에 표시
	while (1) {
		// 회전 구현
		angle = angle + 5;
		angle2 = angle2 + 45;
		// `getRotationMatrix2D` 함수는 이미지 회전을 위한 2x3 변환 행렬 'M'을 생성
		// Point(width / 2.0, height / 2.0): 회전의 중심점 (이미지의 중앙)
		// ++angle: 'angle' 변수를 1 증가시킨 후 그 값을 현재 회전 각도로 사용
		// 1: 스케일 팩터. 1은 원본 크기를 유지함을 의미
		Mat M = getRotationMatrix2D(Point(width / 2.0, height / 2.0), ++angle, 1);	// 회전
		Mat img_rotated;	// // 회전된 이미지를 저장할 Mat 객체
		// `warpAffine` 함수는 `img_color`(원본 이미지)에 변환 행렬 'M'을 적용하여 'img_rotated'에 결과를 저장
		// Size(width, height): 출력 이미지의 크기를 원본과 동일하게 설정
		warpAffine(img_color, img_rotated, M, Size(width, height));
		// 역회전구현
		Mat M2 = getRotationMatrix2D(Point(width / 2.0, height / 2.0), --angle2, 1);	// 역회전
		Mat img_rotated2;
		warpAffine(img_color, img_rotated2, M2, Size(width, height));

		// 두 개의 회전된 이미지를 수평으로 합치기 위해 벡터를 생성(정방향 회전 이미지, 역방향 회전 이미지)
		vector<Mat>mat = { img_rotated, img_rotated2 };  //벡터 생성
		Mat cat_sum;
		// `hconcat` 함수는 'mat' 벡터에 담긴 이미지들을 수평(horizontal)으로 합쳐서 'cat_sum'에 저장
		hconcat(mat, cat_sum);  // // 결과: [ 정방향_회전_이미지 | 역방향_회전_이미지 ] 수평으로 합치기
		// 두 번째 회전된 이미지들을 수평으로 합치기 위해 또 다른 벡터를 생성(역방향 회전 이미지, 정방향 회전 이미지)
		vector<Mat>mat2 = { img_rotated2, img_rotated };
		Mat cat_sum2;
		hconcat(mat2, cat_sum2); // // 결과: [ 역방향_회전_이미지 | 정방향_회전_이미지 ] 수평으로 합치기 2
		// 최종 수직 합성을 위한 Mat 벡터를 생성
		vector<Mat>mat_sum = { cat_sum, cat_sum2 };
		Mat cat_result; // 최종 합성된 큰 이미지를 저장할 Mat 객체
		// [ 정방향_회전_이미지 | 역방향_회전_이미지 ]
		 // [ 역방향_회전_이미지 | 정방향_회전_이미지 ]
		vconcat(mat_sum, cat_result);
		imshow("rotation", cat_result);
		waitKey(1);
	}

	////이미지 중앙을 중심으로 반시계방향으로 
	////45도 회전시키는 행렬을 생성함
	//// `getRotationMatrix2D` 함수는 이미지 회전을 위한 2x3 변환 행렬 'M'을 생성
	//// Point(width / 2.0, height / 2.0): 회전의 중심점 (이미지의 중앙)
	//// 1: 스케일 팩터. 1은 원본 크기를 유지함을 의미
	//Mat M = getRotationMatrix2D(Point(width / 2.0, height / 2.0), 90, 2);
	//
	////회전할때 중심점, 회전각도(양수 반시계방향, 음수 시계방향), 이미지 배율(1이면 원래 크기)
	////회전행렬 M을 이미지 img_color에 적용
	//Mat img_rotated;
	//warpAffine(img_color, img_rotated, M, Size(width, height));

	//imshow("rotation", img_rotated);
	//waitKey(0);
	//return 0;
}