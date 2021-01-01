// Maazin Ahmed - COMSC 200 - Professor Melvin

#include <iostream>
#include "Maazin_Ahmed_Account.h"

using namespace std;

Account::Account()
{
  balance = 0;
}

Account::Account(double a)
{
  if (a < 0.0)
  {
    cout << "Balance is set to zero" << endl; // Comment 2: If the initial amount is not greater than zero, initialize the balance to an amount of zero
    balance = 0.0;
  }
  else
    balance = a;
}

void Account::setBalance(double amount)
{
  if (amount < 0.0)
  {
    cout << "Balance is set to zero" << endl; // Comment 3: If amount that we want to set balance to is less than zero, set to zero, otherwise simply set the balance
    balance = 0.0;
  }
  else
  balance = amount;
}

const double Account::getBalance()
{
  return balance;
}

bool Account::debit(double a)
{
  if (balance >= a)
  {
    balance -= a; // Comment 4: Return a boolean value in order to know whether or not the transaction has taken place
    return true; // Comment 5: If the transaction has taken place return true so that the derived class CheckingsAccount can charge the transaction fee
  }
  else
  {
    cout << "Debit amount exceeded account balance" << endl; // Comment 6: If the amount that we want to debit(subtract) from the balance is greater than the balance, then do not debit the amount and display the error message
    return false;
  }
}

void Account::credit(double a)
{
  balance += a;
}
