#include <iostream>
#include"CardGame.h"
using namespace std;

CardGame::CardGame() {
	
}

CardGame::~CardGame() {

}

void CardGame::printCard() {
	cout << Shape << ", " << number << endl;
}

int  CardGame::getNumber() {
	return number;
}

char* CardGame::getShape() {
	return Shape;
}

void CardGame::setNumber(int num) {
	this->number = num;
}

void CardGame::setShape(const char* shape) {
	strcpy(this->Shape, shape);
}