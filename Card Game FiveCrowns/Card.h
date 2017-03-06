//Program Name: Five Crowns
//Name: Luke Minniear
//Date Last Updated: 3/5/2017
//Purpose: Create a deck, print it, shuffle it, then print it again.

#include <iostream>
#include <vector>
#include <string>

class Card
{
private:

	std::vector<Card> deck;
	int score;

public:
	enum Suits
	{
		CLUBS, DIAMONDS, HEARTS, SPADES, STARS
	} suit;
	enum Faces
	{
		THREE = 3, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, JOKER = 20
	} face;
	//Suits suit;
	//Faces face;
	Card(Suits suit, Faces face);
	void toString();
	void createDeck();
	void getDeck();
	void shuffleDeck();
};