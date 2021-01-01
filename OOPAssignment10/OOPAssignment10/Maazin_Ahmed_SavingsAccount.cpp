// Maazin Ahmed - COMSC 200 - Professor Melvin

#include <iostream>
#include "Maazin_Ahmed_SavingsAccount.h"
#include "Maazin_Ahmed_Account.h"

SavingsAccount::SavingsAccount(double a, double b)
{
  setBalance(a);
  InterestRate = b;
}

const double SavingsAccount::calculateInterest()
{
  return (getBalance() * InterestRate); // Comment 7: Return the interest amount by multiplying the balance by the interest rate. The interest rate is initialized by the user
}
