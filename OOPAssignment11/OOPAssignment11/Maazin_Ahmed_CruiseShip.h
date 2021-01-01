// Maazin Ahmed - COMSC 200 - Professor Melvin

#ifndef Maazin_Ahmed_CruiseShip_h
#define Maazin_Ahmed_CruiseShip_h

#include <iostream>
#include "Maazin_Ahmed_Ship.h"

using namespace std;

class CruiseShip : public Ship // Comment 3: CruiseShip publicly inherits the contents from the Ship class, therefore we do not have to recreate member variables for the name and build year
{
private:
  int PassengerCapacity;
public:
  CruiseShip(string, string, int); // Comment 4: Constructor takes 3 arguments, one for PassengerCapacity, and the other two for the Name and BuildYear variables which are inherited from base class 'ship'
  void setCapacity(int);
  int getCapacity() const;
  virtual void print() override; // Comment 5: Here I have used the virtual & override keywords in order to remind myself that this function will be overriden
};

#endif
