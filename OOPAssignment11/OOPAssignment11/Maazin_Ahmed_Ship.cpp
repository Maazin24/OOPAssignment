// Maazin Ahmed - COMSC 200 - Professor Melvin

#include <iostream>
#include "Maazin_Ahmed_Ship.h"

using namespace std;

Ship::Ship(string a, string b)
{
  Name = a;
  BuildYear = b;
}

void Ship::setName(string a)
{
  Name = a;
}

string Ship::getName() const
{
  return Name;
}

void Ship::setYear(string a)
{
  BuildYear = a;
}

string Ship::getYear() const
{
  return BuildYear;
}

void Ship::print()
{
  cout << "Name: " << Name << endl;
  cout << "Year Built: " << BuildYear << endl;
}
