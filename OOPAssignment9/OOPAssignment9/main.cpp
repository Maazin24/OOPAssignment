// Maazin Ahmed - COMSC 200 - Professor Melvin

#include <iostream>
#include "Maazin_Ahmed_RationalNumber.h"

using namespace std;

int main()
{
  RationalNumber c(3, 8), d(2, 8), x;
  
  c.printRational();
  cout << " + " ;
  d.printRational();
  cout << " = ";
  x = c + d; // test overloaded operators + and =
  x.printRational();
  
  cout << '\n';
  c.printRational();
  cout << " - " ;
  d.printRational();
  cout << " = ";
  x = c - d; // test overloaded operators - and =
  x.printRational();
 
  cout << '\n';
  c.printRational();
  cout << " * " ;
  d.printRational();
  cout << " = ";
  x = c * d; // test overloaded operators * and =
  x.printRational();
  
  cout << '\n';
  c.printRational();
  cout << " / " ;
  d.printRational();
  cout << " = ";
  x = c / d; // test overloaded operators / and =
  x.printRational();
  
  cout << '\n';
  c.printRational();
  cout << " is:\n";
  
  // test overloaded greater than operator
  cout << ( ( c > d ) ? "  > " : "  <= " );
  d.printRational();
  cout << " according to the overloaded > operator\n";
  
  // test overloaded less than operator
  cout << ( ( c < d ) ? "  < " : "  >= " );
  d.printRational();
  cout << " according to the overloaded < operator\n";
  
  // test overloaded greater than or equal to operator
  cout << ( ( c >= d ) ? "  >= " : "  < " );
  d.printRational();
  cout << " according to the overloaded >= operator\n";
  
  // test overloaded less than or equal to operator
  cout << ( ( c <= d ) ? "  <= " : "  > " );
  d.printRational();
  cout << " according to the overloaded <= operator\n";

  // test overloaded equality operator
  cout << ( ( c == d ) ? "  == " : "  != " );
  d.printRational();
  cout << " according to the overloaded == operator\n";
  
  // test overloaded inequality operator
  cout << ( ( c != d ) ? "  != " : "  == " );
  d.printRational();
  cout << " according to the overloaded != operator" << endl;
  
  return 0;
}
