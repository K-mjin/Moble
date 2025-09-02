#include <opencv2/opencv.hpp>
using namespace cv;

// 트랙바 생성시 반드시 필요한 함수
static void on_trackbar(int, void*) {

}

int main() {
	namedWindow("Canny");
	createTrackbar("low threshold", "Canny", 0, 1000, on_trackbar);
	createTrackbar("high threshold", "Canny", 0, 1000, on_trackbar);
	setTrackbarPos("low threshold", "Canny", 50);
	setTrackbarPos("high threshold", "Canny", 150);

	// Canny 함수의 입력은 그레이 스케일 이미지여야 함
	// 이미지를 그레이 스케일로 불러옴
	Mat img_color;
	img_color = imread("orange.png", IMREAD_COLOR);
	imshow("orange", img_color);
	Mat img_gray;
	cvtColor(img_color, img_gray, COLOR_BGR2GRAY);

	// 트랙바가 조정시 캐니함수에 반영되도록 무한루프 사용
	while (1) {
		int low = getTrackbarPos("low threshold", "Canny");
		int high = getTrackbarPos("high threshold", "Canny");

		// 트랙바로부터 가져온 값으로 캐니함수의 파라미터를 조정
		Mat img_canny;
		// 입력 이미지, 출력 이미지, 최소값, 최대값
		Canny(img_gray, img_canny, low, high);

		imshow("Canny", img_canny);

		if (waitKey(1) == 27)
			break;
	}
	destroyAllWindows();
	return 0;
}