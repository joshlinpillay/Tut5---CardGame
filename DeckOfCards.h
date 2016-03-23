#pragma once
#pragma once
class DeckOfCards
{
public:
	int i;
	int cards;

	DeckOfCards();
	~DeckOfCards();

	void draw();
	void reset();
	void shuffle();
	void peek();
	void numberOfcards();
	void deck();
};


