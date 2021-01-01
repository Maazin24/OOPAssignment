// Maazin Ahmed - COMSC 200 - Professor Melvin

#include <iostream>
#include "Maazin_Ahmed_Card.h"

#include <iostream>
#include <string>

using namespace std;

Card::Card(int x, int y)
{
  face = x;
  suit = y;
}
string Card::ToString()
{
  return suits[suit] + " of " + faces[face]; // Comment 6: Concatenated string which is returned altogether to represent each and every card object
}
