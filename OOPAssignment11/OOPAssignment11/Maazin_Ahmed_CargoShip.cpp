// Maazin Ahmed - COMSC 200 - Professor Melvin

#include <iostream>
#include "Maazin_Ahmed_CargoShip.h"

using namespace std;

// Comment 9: Implementation of CargoShip is very similar to CruiseShip, with one difference being the cout statement in the print function

CargoShip::CargoShip(string a, string b, int c) : Ship(a, b)
{
  if (c >= 0)
  {
    CargoCapacity = c;
  }
  else
    CargoCapacity = 0;
}

void CargoShip::setCapacity(int a)
{
  if (a >= 0)
  {
    CargoCapacity = a;
  }
  else
    CargoCapacity = 0;
}

int CargoShip::getCapacity() const
{
  return CargoCapacity;
}

void CargoShip::print()
{
  cout << "Name: " << getName() << endl;
  cout << "Cargo Capacity: " << getCapacity() << " tons" << endl; // Comment 10: Here the get function is used to protect the privite member variable, and to abide by the rules of encapsulation
}
