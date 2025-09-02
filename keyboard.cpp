#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

//int main() {
//	Mat image(200, 300, CV_8UC1, Scalar(255));
//	namedWindow("키보드이벤트", WINDOW_AUTOSIZE);
//	imshow("키보드 이벤트", image);
//
//	while (1) {
//		int key = waitKey(100);
//		if (key == 27)
//			break;
//		switch (key) {
//		case 'a' :
//			cout << "a키 입력" << endl;
//			break;
//		case 'b':
//			cout << "b키 입력" << endl;
//			break;
//		case 0x41:
//			cout << "A키 입력" << endl;
//			break;
//		case 66:
//			cout << "B키 입력" << endl;
//			break;
//		case 8:
//			cout << "벡스페이스키 입력" << endl;
//			break;
//		case 9:
//			cout << "Tab키 입력" << endl;
//			break;
//		}
//	}
//	return 0;
//}

int main() {
	Mat image(200, 300, CV_8UC1, Scalar(255));
	namedWindow("키보드 이벤트");
	imshow("키보드 이벤트", image);
	while (true) {
		int key = waitKey(0);
		if (key == 27)
			break;
		else
			cout << (char)key << "키 입력" << endl;
	}
}