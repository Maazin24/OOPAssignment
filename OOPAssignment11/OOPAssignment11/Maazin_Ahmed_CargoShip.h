// Maazin Ahmed - COMSC 200 - Professor Melvin

#ifndef Maazin_Ahmed_CargoShip_h
#define Maazin_Ahmed_CargoShip_h

#include <iostream>
#include "Maazin_Ahmed_Ship.h"

using namespace std;

class CargoShip : public Ship
{
private:
  int CargoCapacity;
public:
  CargoShip(string, string, int); // Comment 8: Constructor takes 3 arguments, an int for CargoCapacity and 2 strings for Name and BuildYear which are inheritied from the base class 'ship'
  void setCapacity(int);
  int getCapacity() const;
  virtual void print() override;
};

#endif
