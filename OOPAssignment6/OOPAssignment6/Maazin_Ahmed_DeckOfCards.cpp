// Maazin Ahmed - COMSC 200 - Professor Melvin

#include <iostream>
#include "Maazin_Ahmed_DeckOfCards.h"

using namespace std;

#include <string>
#include <cstdlib>
#include <ctime>

DeckOfCards::DeckOfCards()
{
  CurrentCard = 0;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 13; j++)
    Deck.push_back(Card(i,j)); // Comment 7: Initializes each card at each iteration in order of suit and face (AceOfDiamonds -> KingOfSpades
  }
}

void DeckOfCards::Shuffle()
{
  srand(time(0));
  int random;
  for (int i = 0; i < 52; i++)
  {
    random = (rand() % 52)+1;
    Card temp = Deck[i];  // Comment 8: Temporary value will store the first element, then a random element in the deck will be put in the first position, and the Temporary value storing the first element will then be transferred to the random element's position
    Deck[i] = Deck[random];
    Deck[random] = temp;
  }
}

bool DeckOfCards::MoreCards() // Comment 9: A deck only has 52 cards, so once all 52 cards are dealt the boolean function will stop the dealcard function from continuing
{
  if (CurrentCard < 52)
    return true;
  else
    return false;
}

Card DeckOfCards::DealCards()
{
  return Deck[CurrentCard++]; // Comment 10: Each card in the deck is returned after the initialization/shuffle has occured (CurrentCard will iterate through each card in the deck
}
