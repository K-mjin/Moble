#include <iostream>
#include <string.h>

using namespace std;

class Card {
private:
	char *Shape;
	int number;

public:
	Card() {
		number = 0;
		//strcpy(Shape, "no shape");
		int len = strlen("no shape");
		Shape = new char[len + 1];
		strcpy(Shape, "no shape");
	}
	Card(const char* shape, int number) {
		//strcpy(this->Shape, shape);
		int len = strlen(shape);
		this->Shape = new char[len + 1];
		strcpy(this->Shape, shape);

		this->number = number;
	}
	~Card() {
		delete[] Shape;
	}
	void printCard() const	// const 함수 : 멤버 변수의 값을 바꿀 수 없음
	{
		cout << Shape << ", " << number << endl;
	}
	void setShape(const char* shape) {
		strcpy(this->Shape, shape);
	}
	void setNumber(int num) {
		this->number = num;
	}
	char* getShape() {
		return Shape;
	}
	int getNumber() {
		return number;
	}
};
void testCard() {
	Card card;
	card.setShape("heart");
	card.setNumber(7);

	cout << "카드모양 : " << card.getShape() << " 카드 숫자 : " << card.getNumber() << endl;
}

int main() {
	//Card c1;
	/*strcpy_s(c1.Shape, "diamond");
	c1.number = 7;*/
	//c1.printCard();

	//Card c2;
	/*strcpy_s(c2.Shape, "heart");
	c2.number = 3;*/
	//c2.printCard();

	//Card c3;
	/*strcpy_s(c3.Shape, "clover");
	c3.number = 11;*/
	//c3.printCard();

	testCard();
}