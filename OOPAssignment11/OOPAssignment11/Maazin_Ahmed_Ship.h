// Maazin Ahmed - COMSC 200 - Professor Melvin

#ifndef Maazin_Ahmed_Ship_h
#define Maazin_Ahmed_Ship_h

#include <iostream>

using namespace std;

class Ship
{
private:
  string Name;
  string BuildYear;
public:
  Ship(string, string); // Comment 1: Constructor takes two arguments so that private member variables Name and BuildYear can be initialized
  void setName(string);
  string getName() const;
  void setYear(string);
  string getYear() const;
  virtual void print(); // Comment 2: Print function is virtual here so that compiler knows to use the appropriate print function for each type of object
};

#endif
