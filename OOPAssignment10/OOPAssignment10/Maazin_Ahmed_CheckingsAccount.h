// Maazin Ahmed - COMSC 200 - Professor Melvin

#ifndef Maazin_Ahmed_CheckingsAccount_h
#define Maazin_Ahmed_CheckingsAccount_h

#include "Maazin_Ahmed_Account.h"

class CheckingAccount : public Account
{
private:
  double TransactionFee;
public:
  CheckingAccount(double, double);
  void debit(double a);
  void credit(double a);
};

#endif
