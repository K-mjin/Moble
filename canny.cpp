#include <opencv2/opencv.hpp>
using namespace cv;

// Ʈ���� ������ �ݵ�� �ʿ��� �Լ�
static void on_trackbar(int, void*) {

}

int main() {
	namedWindow("Canny");
	createTrackbar("low threshold", "Canny", 0, 1000, on_trackbar);
	createTrackbar("high threshold", "Canny", 0, 1000, on_trackbar);
	setTrackbarPos("low threshold", "Canny", 50);
	setTrackbarPos("high threshold", "Canny", 150);

	// Canny �Լ��� �Է��� �׷��� ������ �̹������� ��
	// �̹����� �׷��� �����Ϸ� �ҷ���
	Mat img_color;
	img_color = imread("orange.png", IMREAD_COLOR);
	imshow("orange", img_color);
	Mat img_gray;
	cvtColor(img_color, img_gray, COLOR_BGR2GRAY);

	// Ʈ���ٰ� ������ ĳ���Լ��� �ݿ��ǵ��� ���ѷ��� ���
	while (1) {
		int low = getTrackbarPos("low threshold", "Canny");
		int high = getTrackbarPos("high threshold", "Canny");

		// Ʈ���ٷκ��� ������ ������ ĳ���Լ��� �Ķ���͸� ����
		Mat img_canny;
		// �Է� �̹���, ��� �̹���, �ּҰ�, �ִ밪
		Canny(img_gray, img_canny, low, high);

		imshow("Canny", img_canny);

		if (waitKey(1) == 27)
			break;
	}
	destroyAllWindows();
	return 0;
}