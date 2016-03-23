#include "Card.h"
#include <iostream>
using namespace std;

Card::Card()
{
	cardno = 1;
}


Card::~Card()
{
	cardno = 0;
}


void Card::colour(int)
{
	int i;
	for (i = 1; i <= 10; i++)
	if (i = i + 2)
		cout << "red" << endl;
	else
		cout << "black" << endl;

}


void Card::number(int i)
{
	int numb;
	numb = i;
	if (i = 1 && 1 <= 10)
	{
		cout << i << endl;
	}
	else
	{
		cout << "invalid entry" << endl;
	}




}

void Card::print()
{
	std::cout << number << " " << colour << endl;
}

