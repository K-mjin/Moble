#include <iostream>
using namespace std;

class MyCar {
private:
	char color[30];
	int dorNum;

public:
	MyCar() : MyCar(2, "black") {
	}

	MyCar(int num, const char* str) {
		dorNum = num;
		strcpy(this->color, str);
	}

	int getDorNum() {
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
	}

	void showCarInfo() {
		cout << "�� ���� : " << dorNum << ", �ڵ��� ���� : " << color << endl;
	}
};

// �ڽ� Ŭ�� ����    �θ� Ŭ����
class MySunRoofCar : public MyCar {
private:
	bool bSunRoof;
public:
	MySunRoofCar(int num, const char* str, bool sunRoof) : MyCar(num, str)
	{
		bSunRoof = sunRoof;
	}
	void showCarInfo() {
		if (bSunRoof)
			cout << "�����, ";
		MyCar::showCarInfo();
	}
};

int main() {

	MyCar car1(3, "white");
	car1.showCarInfo();

	MyCar car2(4, "black");
	car2.showCarInfo();

	MySunRoofCar car3(4, "black", true);
	car3.showCarInfo();

	MySunRoofCar car4(5, "gray", false);
	car4.showCarInfo();
	return 0;
}