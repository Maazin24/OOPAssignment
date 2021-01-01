// Maazin Ahmed - COMSC 200 - Professor Melvin

#include <iostream>
#include <string>
#include "Maazin_Ahmed_Ship.h"
#include "Maazin_Ahmed_CruiseShip.h"
#include "Maazin_Ahmed_CargoShip.h"

using namespace std;


int main()
{
  // Create an array of Ship pointers, initialized with
  // the addresses of 3 dynamically allocated objects.
  Ship *ships[3] = { new Ship("USS Charleston", "2019"),
    new CruiseShip("Bolt Cruise Line", "1999", 6000),
    new CargoShip("Universal Cargo", "2002", 75000)
  };
  
  // Call each object's print function using polymorphism.
  for (int index=0; index < 3; index++)
  {
    ships[index]->print();
    cout << "----------------------------\n";
    
    delete ships[index];     //release memory (avoid memory leak)
    ships[index] = nullptr;   //avoid dangling pointer
  }
  
  return 0;
}
