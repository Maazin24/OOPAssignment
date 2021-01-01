// Maazin Ahmed - COMSC 200 - Professor Melvin

#include <iostream>
#include "Maazin_Ahmed_Card.h"
#include "Maazin_Ahmed_DeckOfCards.h"

using namespace std;

int main ()
{
  DeckOfCards Bicycle; // Deck Object
  Bicycle.Shuffle();
  while (Bicycle.MoreCards() == true) // Comment 4: If there are more cards in the deck, keep dealing until the deck runs out
  {
  for (int i = 0; i < 52; i++)
  {
    cout << Bicycle.DealCards().ToString() << endl; // Comment 5: The bicycle object uses the DealCards function to return Card objects, and the ToString function returns the actual suit & face of the card
  }
  }
  return 0;
}
