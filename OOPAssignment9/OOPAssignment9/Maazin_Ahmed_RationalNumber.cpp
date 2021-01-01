// Maazin Ahmed - COMSC 200 - Professor Melvin

#include <iostream>
#include "Maazin_Ahmed_RationalNumber.h"

using namespace std;

RationalNumber::RationalNumber()
{
  Numerator = 0;
  Denominator = 0;
}

RationalNumber::RationalNumber(int a, int b)
{
  if (b == 0 & b < 0)
  {
    cout << "Invalid Denominator" << endl;
  }
  else
  {
    Numerator = a;
    Denominator = b;
    for (int i = (Numerator * Denominator); i > 1; i--)
    {
      if ((Numerator % i == 0) && (Denominator % i == 0))
      {
        Numerator /= i; // Comment 3: If the fraction has a Common Factor, factor it out and simplify the rational number to the simplest form
        Denominator /= i;
      }
    }
  }
}

void RationalNumber::printRational()
{
  for (int i = (Numerator * Denominator); i > 1; i--)
  {
    if ((Numerator % i == 0) && (Denominator % i == 0))
    {
      Numerator /= i;
      Denominator /= i;
    }
  }
  if (Numerator == 0) // if 0 print 0
  {
    cout << 0;
  }
  else if (Denominator == 1)
  {
    cout << Numerator;
  }
  else
    cout << Numerator << "/" << Denominator;
}

// Comment 4: In all operator overloading functions, a temp variable is initialized in order to preserve the values of the user defined rational numbers

RationalNumber RationalNumber::operator+(const RationalNumber a)
{
  RationalNumber temp;
  if (Denominator == a.Denominator)
  {
    temp.Numerator = Numerator + a.Numerator; // Comment 5: If the denominator is the same for both numbers, add the numerators to find the new fraction
    temp.Denominator = Denominator;
  }
  else
  {
    temp.Denominator = (Denominator * a.Denominator);
    temp.Numerator = (Numerator * a.Denominator) + (a.Numerator * Denominator); // Comment 6: If the denominator is not the same, multiply both terms by the opposite term's denominator to create a common denominator, then add the numerators together
  }
  return temp;
}

RationalNumber RationalNumber::operator-(const RationalNumber a)
{
  RationalNumber temp;
  if (Denominator == a.Denominator)
  {
    temp.Numerator = (Numerator - a.Numerator); // Very similar implementation as the overloaded +
    temp.Denominator = Denominator;
  }
  else
  {
    temp.Denominator = (Denominator * a.Denominator);
    temp.Numerator = (Numerator * a.Denominator) - (a.Numerator * Denominator);
  }
  return temp;
}

RationalNumber RationalNumber::operator*(const RationalNumber a)
{
  RationalNumber temp;
  temp.Numerator = Numerator * a.Numerator; // Comment 7: Multiply both fractions straight across, denominator will also be multiplied
  temp.Denominator = Denominator * a.Denominator;
  
  return temp;
}

RationalNumber RationalNumber::operator/(const RationalNumber a)
{
  RationalNumber temp;
  temp.Numerator = Numerator * a.Denominator; // Comment 8: The logic behind division is to multiply the first term by the reciprocal of the second term
  temp.Denominator = Denominator * a.Numerator;
  
  return temp;
}

// Comment 9: All relational and equality operators are overloaded using boolean values, the true or false return value will determine whether or not one fraction is greater than, less than, and/or equal to the second fraction

bool RationalNumber::operator>(const RationalNumber a)
{
  RationalNumber temp1, temp2;
  
  if (Denominator == a.Denominator)
    return (Numerator > a.Numerator);
  else
  {
    temp1.Numerator = Numerator * a.Denominator; // Comment 10: The comparison of values can only be done after both fractions have a commone denominator
    temp2.Numerator = a.Numerator * Denominator;
    return (temp1 > temp2);
  }
}

bool RationalNumber::operator<(const RationalNumber a)
{
  RationalNumber temp1, temp2;
  
  if (Denominator == a.Denominator)
    return (Numerator < a.Numerator);
  else
  {
    temp1.Numerator = Numerator * a.Denominator;
    temp2.Numerator = a.Numerator * Denominator;
    return (temp1 < temp2);
  }
}

bool RationalNumber::operator>=(const RationalNumber a)
{
  RationalNumber temp1, temp2;
  
  if (Denominator == a.Denominator)
    return (Numerator >= a.Numerator);
  else
  {
    temp1.Numerator = Numerator * a.Denominator;
    temp2.Numerator = a.Numerator * Denominator;
    return (temp1 >= temp2);
  }
}

bool RationalNumber::operator<=(const RationalNumber a)
{
  RationalNumber temp1, temp2;
  
  if (Denominator == a.Denominator)
    return (Numerator <= a.Numerator);
  else
  {
    temp1.Numerator = Numerator * a.Denominator;
    temp2.Numerator = a.Numerator * Denominator;
    return (temp1 <= temp2);
  }
}

bool RationalNumber::operator==(const RationalNumber a)
{
  RationalNumber temp1, temp2;
  
  if (Denominator == a.Denominator)
    return (Numerator == a.Numerator);
  else
  {
    temp1.Numerator = Numerator * a.Denominator;
    temp2.Numerator = a.Numerator * Denominator;
    return (temp1 == temp2);
  }
}

bool RationalNumber::operator!=(const RationalNumber a)
{
  RationalNumber temp1, temp2;
  
  if (Denominator == a.Denominator)
    return (Numerator != a.Numerator);
  else
  {
    temp1.Numerator = Numerator * a.Denominator;
    temp2.Numerator = a.Numerator * Denominator;
    return (temp1 != temp2);
  }
}

const RationalNumber RationalNumber::operator=(const RationalNumber a)
{
  Numerator = a.Numerator; // Comment 11: Assign the numerator and denominator of the Right hand fraction to the numerator and denominator of the Left hand fraction
  Denominator = a.Denominator;
  return *this;
}
