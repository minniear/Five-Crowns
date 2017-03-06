//Program Name: Five Crowns
//Name: Luke Minniear
//Date Last Updated: 3/5/2017
//Purpose: Create a deck, print it, shuffle it, then print it again.

#include <iostream>
#include "Card.h"

using std::cout;

int main()
{
	Card card(Card::CLUBS, Card::THREE);

	card.createDeck();

	card.getDeck();

	card.shuffleDeck();

	cout << "\n\nThe shuffled deck:\n";

	card.getDeck();

	system("pause");
	return 0;
}