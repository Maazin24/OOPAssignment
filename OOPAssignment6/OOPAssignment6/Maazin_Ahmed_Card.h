// Maazin Ahmed - COMSC 200 - Professor Melvin

#ifndef Maazin_Ahmed_Card_h
#define Maazin_Ahmed_Card_h

using namespace std;

#include <iostream>
#include <string>
#include <vector>

class Card // Comment 1: Card class consisting of a suit, face and ToString function responsible for returning each individual card
{
private:
  int face;
  int suit;
  string faces[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
  string suits[13] = {"Ace", "Duece", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
public:
  Card(int, int);
  string ToString();
};

#endif
