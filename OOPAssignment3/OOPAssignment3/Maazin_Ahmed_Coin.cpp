// Maazin Ahmed - Professor Melvin - OOP Assignment 3

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "Maazin_Ahmed_Coin.h"

Coin::Coin()
{
  SideUp = "";
  Toss();
}

void Coin::Toss()
{
  int x = (rand() % 2);
  if (x == 1)
  {
    SideUp = "Heads";
  }
  else
    SideUp = "Tails";
}
string Coin::GetSideUp()
{
  return SideUp;
}
