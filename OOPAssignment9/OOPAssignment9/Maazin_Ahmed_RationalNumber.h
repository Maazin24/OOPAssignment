// Maazin Ahmed - COMSC 200 - Professor Melvin

#ifndef Maazin_Ahmed_RationalNumber_h
#define Maazin_Ahmed_RationalNumber_h

class RationalNumber
{
private:
  int Numerator;
  int Denominator;
public:
  RationalNumber(); // Comment 1: There are two constructors, one that takes in two arguments (numerator and denominator) and one that takes no arguments and initializes the the numerator and denominator to zero
  RationalNumber(int, int);
  void printRational();
  RationalNumber operator+(const RationalNumber); // Comment 2: All parameters will be const because we want to protect the value of the passed parameter
  RationalNumber operator-(const RationalNumber);
  RationalNumber operator*(const RationalNumber);
  RationalNumber operator/(const RationalNumber);
  bool operator>(const RationalNumber);
  bool operator<(const RationalNumber);
  bool operator>=(const RationalNumber);
  bool operator<=(const RationalNumber);
  bool operator==(const RationalNumber);
  bool operator!=(const RationalNumber);
  const RationalNumber operator=(const RationalNumber);
};

#endif
