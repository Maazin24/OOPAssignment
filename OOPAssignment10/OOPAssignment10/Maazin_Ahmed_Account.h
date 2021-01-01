// Maazin Ahmed - COMSC 200 - Professor Melvin

#ifndef Maazin_Ahmed_Account_h
#define Maazin_Ahmed_Account_h

class Account
{
private:
  double balance;
public:
  Account();
  Account(double); // Comment 1: Two constructors are initialized in order for potential derived classes to inherit all variables and functions
  void setBalance(double);
  const double getBalance();
  bool debit(double);
  void credit(double);
};

#endif
