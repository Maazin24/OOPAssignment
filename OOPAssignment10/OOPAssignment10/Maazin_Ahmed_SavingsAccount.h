// Maazin Ahmed - COMSC 200 - Professor Melvin

#ifndef Maazin_Ahmed_SavingsAccount_h
#define Maazin_Ahmed_SavingsAccount_h

#include "Maazin_Ahmed_Account.h"

class SavingsAccount : public Account
{
private:
  double InterestRate;
public:
  SavingsAccount(double, double);
  const double calculateInterest();
};

#endif
