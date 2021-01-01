// Maazin Ahmed - Professor Melvin -- COMSC 200

#include <iostream>
#include <iomanip>
#include "Maazin_Ahmed_Polynomial.h"

using namespace std;

Polynomial::Polynomial()
{
  for (int i = 0; i < MAX; i++)
  {
    Coefficients[ i ] = 0; // Comment 2: Constructor will initialize all elements in the Coefficients and Exponents array to a value of zero
    Exponents[ i ] = 0;
  }
  Count = 0; // Comment 3: The program will begin with zero terms, and will be changed when the user gives the amount of terms
}

void Polynomial::printPolynomial() const
{
  int start;
  bool check = false;
  
  if (Coefficients[0])
  {
    cout << Coefficients[0]; // Comment 4: If the first coefficient is zero, then output zero. Make sure that start is now equal to 1 because we must now output values following the first element
    start = 1;
    check = true;
  }
  else
  {
    if (Coefficients[1] != 0)
    {
      cout << Coefficients[1] << 'x';
      if ( (Exponents[1] != 0) && (Exponents[1] != 1)) {cout << '^' << Exponents[1];} // Comment 5: If the exponent value is not equal to zero or one, then we will output the exponent
      
    check = true;
    }
    
    start = 2;
  }
  
  for (int i = start; i < MAX; i++)
  {
    if (Coefficients[i] != 0)
    {
      cout << showpos << Coefficients[i] << noshowpos << 'x'; // Comment 6: As long as the coefficient and exponent of the term is not zero, we will output the coefficient with its corresponding exponent
      if ((Exponents[ i ] != 0) && (Exponents[i] != 1))
      {cout << '^' << Exponents[i];}
      
     check = true;
    }
  }
  
  if ( !check ) {cout << '0';} // Comment 7: If our check variable has a value of zero, output zero without a coefficient
  
    cout << endl;
}

const Polynomial Polynomial::operator=(const Polynomial& copy)
{
  Exponents[0] = copy.Exponents[0];
  Coefficients[0] = copy.Coefficients[0];
  
  for (int s = 1; (s < MAX); s++)
  {
    if (copy.Exponents[s] != 0)
    {
      Exponents[s] = copy.Exponents[s]; // Comment 8: Here I copied every value from the copy object (which is the source object in main) to the current objects private member varibles as long as the term's Exponent value is not zero
      Coefficients[s] = copy.Coefficients[s];
    }
    else
    {
      if (Exponents[s] == 0)
      {break;}
      Exponents[s] = 0;
      Coefficients[s] = 0;
    }
  }
  return *this;
}

Polynomial Polynomial::operator+(const Polynomial& obj) const
{
  Polynomial temp;
  bool checkEXP;
  int check = 0;
  
  temp.Coefficients[0] = Coefficients[0] + obj.Coefficients[0];
  
  for (int i = 1; (i < MAX) && (obj.Exponents[i] != 0 ); i++)
  {
    temp.Coefficients[i] = obj.Coefficients[i]; // Comment 9: Here I copied each value from the second object into the temp object
    temp.Exponents[i] = obj.Exponents[i];
  }
  for (int j = 1; j < MAX; j++)
  {
    checkEXP = false;
    
    for (int k = 1; (k < MAX) && (!checkEXP); k++)
      if (Exponents[j] == temp.Exponents[k])
      {
        temp.Coefficients[k] += Coefficients[j]; // Comment 10: Only add the coefficient values as long as exponent value is the same and set checkEXP to true so that the values that done have coefficients are added only to themselves
        checkEXP = true;
      }
    if (!checkEXP)
    {
      temp.Exponents[check] = Exponents[j];
      temp.Coefficients[check] += Coefficients[j];
      check++;
    }
  }
  return temp;
}

Polynomial &Polynomial::operator+=(const Polynomial &secondobj)
{
  *this = *this + secondobj; // Comment 11: Using the overloaded + operator we return the sum of two objects
  return *this;
}

Polynomial Polynomial::operator-(const Polynomial& obj) const
{
  Polynomial temp; // Comment 11: Implementation of the overloaded - operator is very similar to the overloaded + operator only here I have subtracted instead of added two objects
  bool checkEXP;
  int check = 0;
  
  temp.Coefficients[0] = Coefficients[0] - obj.Coefficients[0];
  
  for (int i = 1; (i < MAX) && (Exponents[i] != 0); i++)
  {
    temp.Coefficients[i] = Coefficients[i];
    temp.Exponents[i] = Exponents[i];
  }
  
  for (int j = 1; j < MAX; j++)
  {
    checkEXP = false;
    for (int k = 1; (k < MAX) && (!checkEXP); k++)
      if (obj.Exponents[j] == temp.Exponents[k])
      {
        temp.Coefficients[k] -= obj.Coefficients[j];
        checkEXP = true;
      }
        if (!checkEXP)
        {
          temp.Exponents[check] = obj.Exponents[j];
          temp.Coefficients[check] -= obj.Coefficients[j];
          check++;
        }
      }
  return temp;
}

Polynomial &Polynomial::operator-=(const Polynomial& r)
{
  *this = *this - r; // Using overloaded - operator
  return *this;
}

void Polynomial::CombineLikeTerms(Polynomial& polynomial2)
{
  Polynomial temp = polynomial2;
  int exp;
  
  for (int x = 0; x < MAX; x++)
  {
    polynomial2.Coefficients[x] = 0;
    polynomial2.Exponents[x] = 0;
  }
  
  for (int i = 1; i< MAX; i++)
  {
    exp = temp.Exponents[i];
    for (int j = i + 1; j < MAX; j++)
    {
      if (exp == temp.Exponents[j])
      {
        temp.Coefficients[i] += temp.Coefficients[j]; // Comment 12: Compare the value of 2 consecutive terms of a polynomial, and if their exponent values match, then add the corresponding coefficient to create one term rather than two
        temp.Exponents[j] = 0;
        temp.Coefficients[j] = 0;
      }
      }
  }
  polynomial2 = temp; // Comment 13: Everything is copied to temp, so we must copy it back to the passed parameter using overloaded = operator
}

void Polynomial::enterTerms()
{
  bool found = false;
  int term, tempC, tempE;
  
  cout << "Enter number of polynomial terms: ";
  cin >> Count;
  cout << endl;
  
  for (int i = 1; i <= Count; i++)
  {
    cout << "Enter Coefficient: ";
    cin >> tempC;
    cout << "Enter Exponent: ";
    cin >> tempE;
    
    if (tempC != 0)
    {
      if (tempE == 0)
      {
        Coefficients[0] += tempC; // Comment 14: If the exponenet value is zero, combine all non-exponent values into one term by adding it to the tempC value
        continue;
      }
      for (term = 1; (term < MAX) && (Coefficients[term] != 0); term++)
        if (tempE == Exponents[term])
        {
          Coefficients[term] += tempC; // Comment 15: If the exponent of a term is equivalent to the exponent of another term, then add the coefficients together to create one term
          Exponents[term] = tempE;
          found = true;
        }
      if (!found)
      {
        Coefficients[term] += tempC;
        Exponents[term] = tempE;
      }
    }
    cout << endl;
  }
}

Polynomial::~Polynomial() {} // no allocated memory to delete
