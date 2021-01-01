// Maazin Ahmed - Professor Melvin - OOP Assignment 3

#ifndef Coin_h
#define Coin_h

#include <iostream>
#include <string>

using namespace std;

class Coin
{
private:
  string SideUp;
public:
  Coin();
  void Toss();
  string GetSideUp();
};

#endif
