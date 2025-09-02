#include <iostream>
using namespace std;

class MyCar {
private:
	char color[30];
	int dorNum;

public:
	MyCar(int num, const char* str) {
		dorNum = num;
		strcpy_s(this->color, str);
	}
	MyCar() {
		dorNum = 2;
		strcpy_s(color, "silver");
	}
	/*int getDorNum() {
		return dorNum;
	}
	char* getColor() {
		return color;
	}
	void setColor(const char* color) {
		strcpy_s(this->color, color);
	}
	void setDorNum(int dorNum) {
		this->dorNum = dorNum;
	}*/
	void showCarInfo() {
		cout <<"문 개수 : "<< dorNum << ", 자동차 색깔 : " << color << endl;
	}
	/*void setCarInfo(int num, const char * str) {
		dorNum = num;
		strcpy_s(color, str);
	}*/
};

int main() {
	//MyCar c1;
	///*strcpy_s(c1.color, "white");
	//c1.dorNum = 4;*/
	//c1.setCarInfo(4, "white");
	//c1.showCarInfo();

	//MyCar c2;
	///*strcpy_s(c2.color, "red");
	//c2.dorNum = 3;*/
	//c2.setCarInfo(3, "red");
	//c2.showCarInfo();

	MyCar car1(3, "white");
	car1.showCarInfo();

	MyCar car2(4, "black");
	car2.showCarInfo();

	MyCar car3;
	car3.showCarInfo();
}