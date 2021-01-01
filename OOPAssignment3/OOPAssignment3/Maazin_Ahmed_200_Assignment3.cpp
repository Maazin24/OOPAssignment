// Maazin Ahmed - Professor Melvin - OOP Assignment 3

#include <iostream>
#include "Maazin_Ahmed_Coin.h"

using namespace std;

int main()
{
  srand(time(NULL));
  
  double MyBalance = 0;
  double ComputersBalance = 0;
  
  Coin Nickel;
  Coin Dime;
  Coin Quarter;
  
  while (MyBalance < 1.00 && ComputersBalance < 1.00)
  {
    cout << "Your Balance is: " << MyBalance << endl;
    cout << "Computer's Balance is: " << ComputersBalance << endl;
    
    Nickel.Toss();
    Dime.Toss();
    Quarter.Toss();
    
    if (Nickel.GetSideUp() == "Heads")
    {
      MyBalance += 0.05;
    }
    if (Dime.GetSideUp()  == "Heads")
    {
      MyBalance += 0.10;
    }
    if (Quarter.GetSideUp()  == "Heads")
    {
      MyBalance += 0.25;
    }
    
    Nickel.Toss();
    Dime.Toss();
    Quarter.Toss();
    
    if (Nickel.GetSideUp() == "Heads")
    {
      ComputersBalance += 0.05;
    }
    if (Dime.GetSideUp()  == "Heads")
    {
      ComputersBalance += 0.10;
    }
    if (Quarter.GetSideUp()  == "Heads")
    {
      ComputersBalance += 0.25;
    }
  }
  
  cout << "Your Balance is: " << MyBalance << endl;
  cout << "Computer's Balance is: " << ComputersBalance << endl;
  
  if (MyBalance > ComputersBalance && ComputersBalance < 1.00)
  {
    cout << "You have won!" << endl;
  }
  else if (ComputersBalance > MyBalance && MyBalance < 1.00)
  {
    cout << "The computer has won!" << endl;
  }
  else if (MyBalance > 1.00 && ComputersBalance > 1.00 && MyBalance > ComputersBalance)
  {
    cout << "The computer has won!" << endl;
  }
  else if (MyBalance > 1.00 && ComputersBalance > 1.00 && MyBalance < ComputersBalance)
  {
    cout << "You have won!" << endl;
  }
  else
    {
      cout << "The game is a Tie" << endl;
    }
  
  return 0;
}
