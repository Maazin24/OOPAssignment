// Maazin Ahmed - COMSC 200 - Professor Melvin

#ifndef Maazin_Ahmed_DeckOfCards_h
#define Maazin_Ahmed_DeckOfCards_h

using namespace std;

#include "Maazin_Ahmed_Card.h"
#include <vector>

class DeckOfCards
{
private:
  vector<Card> Deck; // Comment 2: This is the vector of card objects which will be created in main, and used to simulate a deck of cards
  int CurrentCard;
public:
  DeckOfCards();
  void Shuffle(); // Comment 3: Using random number and a basic swap algorithm, this function is used to shuffle the cards of the deck
  Card DealCards();
  bool MoreCards();
};

#endif
