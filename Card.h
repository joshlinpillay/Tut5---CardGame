#pragma once
class Card
{
public:
	int i;
	int cardno;

	Card();
	~Card();
	void colour(int);
	void number(int);
	void print();

	Card Card::colour(Card& i);
	Card Card::number(Card &i);
;


