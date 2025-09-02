#pragma once

class Card {
private:
	char* Shape;
	int number;

public:
	Card();
	Card(const char* shape, int number);
	~Card();

	void printCard();
	void setShape(const char* shape);
	void setNumber(int num);
	char* getShape();
	int getNumber();
};