// Maazin Ahmed - COMSC 200 - Professor Melvin

#include <iostream>
#include "Maazin_Ahmed_CheckingsAccount.h"
#include "Maazin_Ahmed_Account.h"

using namespace std;

CheckingAccount::CheckingAccount(double a, double b)
{
  setBalance(a); // Comment 8: Constructor takes two arguments, one for the balance, the other for the fee amount for each transaction that successfully takes place
  TransactionFee = b;
}

void CheckingAccount::debit(double a)
{
  bool temp = Account::debit(a); // Comment 9: Create a temp variable to know whether or not the transaction is going to take place or not, using the debit functions defined in the base class
  if (temp == true)
  {
    cout << "$" << TransactionFee << " transaction fee charged" << endl; // Comment 10: If the transaction has occurred, charge the account the transaction fee
    Account::debit(TransactionFee);
  }
}

void CheckingAccount::credit(double a)
{
  Account::credit(a); // Comment 11: If an ammount is to be added to the account, charge the transaction fee as well as add the amount to the balance
  debit(0.0);
}
