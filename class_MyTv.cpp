#include <iostream>
using namespace  std;

class MyTv {
	public:
		char color[30];
		int channel;
		bool power;

		void powerOnOff();
		void channerUp();
		void channelDown();
};

int main() {
	MyTv t1;
	t1.channel = 7;
	strcpy_s(t1.color, "white");
	cout << "ä�� : " << t1.channel << ", ���� : " << t1.color << endl;

	MyTv t2;
	t2.channel = 11;
	strcpy_s(t2.color, "red");
	cout << "ä�� : " << t2.channel << ", ���� : " << t2.color << endl;
}