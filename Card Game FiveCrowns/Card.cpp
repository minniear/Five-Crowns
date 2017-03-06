//Program Name: Five Crowns
//Name: Luke Minniear
//Date Last Updated: 3/5/2017
//Purpose: Create a deck, print it, shuffle it, then print it again.

#include "Card.h"
#include <algorithm>
#include <cstdlib>      // std::rand, std::srand
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

Card::Card(Suits suit, Faces face)
{
	this->suit = suit;
	this->face = face;

	//score += face;
}

void Card::toString()
{
	switch (face)
	{
	case THREE:	cout << "three of ";
		break;
	case FOUR:	cout << "four of ";
		break;
	case FIVE:	cout << "five of ";
		break;
	case SIX:	cout << "six of ";
		break;
	case SEVEN:	cout << "seven of ";
		break;
	case EIGHT:	cout << "eight of ";
		break;
	case NINE:	cout << "nine of ";
		break;
	case TEN:	cout << "ten of ";
		break;
	case JACK:	cout << "jack of ";
		break;
	case QUEEN:	cout << "queen of ";
		break;
	case KING:	cout << "king of ";
		break;
	case JOKER:	cout << "Joker";
		break;
	}
	if (face != JOKER)
	{
		switch (suit)	// using enum type switch expression
		{
		case CLUBS:	cout << "clubs";
			break;
		case DIAMONDS: cout << "diamonds";
			break;
		case HEARTS: cout << "hearts";
			break;
		case SPADES: cout << "spades";
			break;
		case STARS:	cout << "stars";
			break;
		}
	}
}
void Card::createDeck()
{
	int suitSwitch{ 0 };
	auto x = new Card(suit, face);	// create a new object every iteration of the loop

	while (deck.size() <= 114)
	{
		switch (suitSwitch)
		{
		case 0: suit = CLUBS;
			break;
		case 1: suit = DIAMONDS;
			break;
		case 2: suit = HEARTS;
			break;
		case 3: suit = SPADES;
			break;
		case 4: suit = STARS;
			break;
		}

		face = THREE;

		switch (face)
		{
		case Card::THREE:	face = THREE;
			x = new Card(suit, face);
			deck.push_back(*x);
			deck.push_back(*x);
		case Card::FOUR:	face = FOUR;
			x = new Card(suit, face);
			deck.push_back(*x);
			deck.push_back(*x);
		case Card::FIVE:	face = FIVE;
			x = new Card(suit, face);
			deck.push_back(*x);
			deck.push_back(*x);
		case Card::SIX:		face = SIX;
			x = new Card(suit, face);
			deck.push_back(*x);
			deck.push_back(*x);
		case Card::SEVEN:	face = SEVEN;
			x = new Card(suit, face);
			deck.push_back(*x);
			deck.push_back(*x);
		case Card::EIGHT:	face = EIGHT;
			x = new Card(suit, face);
			deck.push_back(*x);
			deck.push_back(*x);
		case Card::NINE:	face = NINE;
			x = new Card(suit, face);
			deck.push_back(*x);
			deck.push_back(*x);
		case Card::TEN:		face = TEN;
			x = new Card(suit, face);
			deck.push_back(*x);
			deck.push_back(*x);
		case Card::JACK:	face = JACK;
			x = new Card(suit, face);
			deck.push_back(*x);
			deck.push_back(*x);
		case Card::QUEEN:	face = QUEEN;
			x = new Card(suit, face);
			deck.push_back(*x);
			deck.push_back(*x);
		case Card::KING:	face = KING;
			x = new Card(suit, face);
			deck.push_back(*x);
			deck.push_back(*x);
		case Card::JOKER:	face = JOKER;
			x = new Card(suit, face);
			deck.push_back(*x);
			break;
		}
		suitSwitch++;
	}
	x = new Card(suit, face);
	deck.push_back(*x);
}

void Card::getDeck()
{
	for (Card x : deck)
	{
		x.toString();
		cout << endl;
	}
}

void Card::shuffleDeck()
{
	std::srand(unsigned(std::time(0)));
	std::random_shuffle(deck.begin(), deck.end());
}