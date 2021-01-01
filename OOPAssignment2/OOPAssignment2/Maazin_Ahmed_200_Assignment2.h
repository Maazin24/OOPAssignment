// Maazin Ahmed - COMSC 200 - Assignment 2 - Professor Melvin

#ifndef Maazin_Ahmed_200_Assignment2_h
#define Maazin_Ahmed_200_Assignment2_h

// Comment 9: These C++ header files are essential for the computer to generate a random number, they have several different functions such as: time() and srand()
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Die // Dice Object
{
private:
  int sides;
  int value;
public:
  Die(int numSides) // Comment 10: This is the constructor which is called as soon as object is initialized, the parameters are important because it sets the amount of sides on the dice object.
  {
    sides = numSides;
    roll();
  }
  void SetSides(int NUMSIDE)
  {
    sides = NUMSIDE;
  }
  void roll() //Comment 11: The roll function generates a random number for the dice and assigns it to the private variable 'value'  in the class
  {
    value = rand() % sides+1;
  }
  int getSides() const
  {
    return sides;
  }
  int getValue() const
  {
    return value;
  }
};

#endif
