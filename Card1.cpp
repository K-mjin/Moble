#include <iostream>
#include"Card.h"
using namespace std;

Card::Card() {
	number = 0;
	int len = strlen("no shape");
		Shape = new char[len + 1];
	strcpy(Shape, "no shape");
}

Card::Card(const char* shape, int number) {
	int len = strlen(shape);
	this->Shape = new char[len + 1];
	strcpy(this->Shape, shape);
	this->number = number;
}

Card::~Card() {
	delete[] Shape;
}

void Card::printCard() {
	cout << Shape << ", " << number << endl;
}

int  Card::getNumber() {
	return number;
}

char* Card::getShape() {
	return Shape;
}

void Card::setNumber(int num) {
	this->number = num;
}

void Card::setShape(const char* shape) {
	strcpy(this->Shape, shape);
}