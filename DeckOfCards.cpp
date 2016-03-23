//Tut5 - Question 2

#include "DeckOfCards.h"
#include <iostream> 
#include <string>
#include <ctime>
#include <vector>
#include <algorithm>
#include <stack>
using std::ostream;
using std::vector;
using namespace std;

DeckOfCards::DeckOfCards()
{
	cards = 1;
}


DeckOfCards::~DeckOfCards()
{
	cards = 0;
}

void DeckOfCards::deck()
{
	int i, j;
	int red[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int black[] = { 11, 12, 13, 14, 15, 16, 17, 181, 19, 20 };
	for (i = 1; i >= 20; i++)
	{

		if (i = i + 10)
		{

			cout << "red" << endl;
		} 
		else
			cout << "black" << endl;
	}

}


void DeckOfCards::shuffle()
{
	int top = 20;
	int x, j, i;
	int cards[10][10];

	DeckOfCards tempCard;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 20; j++) {
			int cards[i * 20 + j].red = i;
			int cards[i *  +j].black = j;
		}
	}
	cout << "Shuffling the cards to deal..." << endl;
	for (int i = 0; i < 20; i++) {
		x = rand() % 20;
		tempCard = cards[i];
		int cards[i] = cards[x];
		cards[x] = tempCard;
	}

}

void DeckOfCards::reset()
{
	int cards[10][2];
	for (int i = 0; i < 20; i++){
		for (int j = 0; j < 2; j++){
			cout << cards[i][j].toString << endl;
		}
	}
}
void DeckOfCards::draw()
{


	ostream& operator<<(ostream &out, const DeckOfCards &aDeck)
	{
		for (int i = aDeck.size - 1; i >= 0; i--)
			out << aDeck.cards[i] << "\n";

		return out;
	}

}
void DeckOfCards::numberOfcards()
{
	int size;
	int i;
	size = 20 - DeckOfCards.draw();


}
void DeckOfCards::peek()
{
	{
		std::stack<int> mystack;

		mystack.push(1);
		mystack.push(20);

		mystack.top() -= 1;

		std::cout << "mystack.top() is now " << mystack.top() << endl;


	}



}
