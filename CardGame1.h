#pragma once
#include"Card.h"
#define CARD_TOTAL_NUM 52

class CardGame {
private:
	char cards[CARD_TOTAL_NUM];
public:
	CardGame();
	~CardGame();

	void showAllCardInfo() const;
	Card getCard(int index) const;
	Card getCard()const;
	void shuffle();
	void showCard(Card c);

};