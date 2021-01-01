// Maazin Ahmed - COMSC 200 - Assignment 2 - Professor Melvin

#include <iostream>
#include "Maazin_Ahmed_200_Assignment2.h"

using namespace std;

int main()
{
  srand (time(NULL)); // Comment 1: The "srand" function is called in order to seed a random number which allows the computer to generate pseudo-random numbers for the dice.
  
  int MyHand = 0, DealersHand = 0;
  char answer;
  
  // Comment 2: Dice1 and Dice2 are Objects of the "Die" class, these objects have the public member function "roll" and private variable "value" which are both used to implement the logic of the game
  Die Dice1(6);
  Die Dice2(6);
  
  cout << "Lets play a game of Blackjack!" << endl;
  cout << endl;
  
  while (true) // Comment 3: This while loop allows the user to decide whether to keep rolling or finish.
  {
    cout << "Would you like to roll the dice? (y for Yes / n for No)" << endl;
    cin >> answer;
    if (answer != 'y'){break;} // Comment 4: If the user declines to roll, the game will automatically be over, no player will be triumphant
    MyHand += Dice1.getValue() + Dice2.getValue(); // Comment 5: The getValue functions are used to obtain the Random dice rolled value and add them to the user's hand total for the Blackjack game
    cout << "Your hand is: " << MyHand << endl;
    if (MyHand > 21)
    {
      cout << "Your hand has exceeded 21 points, you have lost" << endl; // Comment 6: If my hand total exceeds 21,then I must break from the while loop and will have lost
      break;
    }
    if (MyHand == 21 && DealersHand < 21)
    {
      cout << "The Dealer's hand is: " << DealersHand << endl;
      cout << "21! You have won" << endl;
      break;
    }
    Dice1.roll(); // Comment 7: The roll function must be called everytime the user decides to roll again, otherwise the same number will continue to add onto the player total.
    Dice2.roll();
    DealersHand += Dice1.getValue() + Dice2.getValue();
    Dice1.roll();
    Dice2.roll();
    if (DealersHand > 21)
    {
      cout << "The Dealer's hand is: " << DealersHand << endl;
      cout << "The Dealer has exceeded 21 points, you have won!" << endl;
      break;
    }
  }
  // Comment 8: This following portion of code is written to determine the winner and loser after each set of dice-rolls. The winners could be the User or the Dealer, and a tie is also possible
  if (MyHand > DealersHand && MyHand < 21)
  {
    cout << "The Dealer's hand is: " << DealersHand << endl;
    cout << "You have won!" << endl;
  }
  else if (DealersHand > MyHand && DealersHand <= 21)
  {
    cout << "The Dealer's hand is: " << DealersHand << endl;
    cout << "You have lost" << endl;
  }
  else if (MyHand == DealersHand && MyHand <= 21 && DealersHand <= 21 && MyHand > 0 && DealersHand > 0)
  {
    cout << "The Dealer's hand is: " << DealersHand << endl;
    cout << "The game is a tie" << endl;
  }
  else
  {
    cout << endl;
    cout << "The Game is Over" << endl;
  }
  
  return 0;
}

