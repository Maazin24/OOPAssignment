// Maazin Ahmed - COMSC 200 - Professor Melvin

#include <iostream>
#include "Maazin_Ahmed_CruiseShip.h"

using namespace std;

CruiseShip::CruiseShip(string a, string b, int c) : Ship(a, b) // Comment 6: The construtor has recieved its 3 arguments, and the first 2 strings are used in the base class's constructor for initialization for name and BuildYear
{
  if (c >= 0)
  {
    PassengerCapacity = c;
  }
  else
    PassengerCapacity = 0;
}

void CruiseShip::setCapacity(int a)
{
  if (a >= 0)
  {
    PassengerCapacity = a; // Comment 7: Input validation is done here to ensure that there is no negative values for the PassengerCapcity variable
  }
  else
    PassengerCapacity = 0;
}

int CruiseShip::getCapacity() const
{
  return PassengerCapacity;
}

void CruiseShip::print()
{
  cout << "Name: " << getName() << endl;
  cout << "Maximum Passengers: " << getCapacity() << endl;
}
