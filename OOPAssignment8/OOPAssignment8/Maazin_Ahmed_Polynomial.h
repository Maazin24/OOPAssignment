// Maazin Ahmed - Professor Melvin -- COMSC 200

#ifndef Maazin_Ahmed_Polynomial_h
#define Maazin_Ahmed_Polynomial_h
const int MAX = 100;

class Polynomial
{
private:
  int Coefficients[MAX];
  int Exponents[MAX];
  int Count;
  void CombineLikeTerms(Polynomial&); // Comment 1: This function will be responsible for combining like terms, for example: if the user inputs two terms 4x and 5x, the combineliketerms function will make it one term 9x
public:
  Polynomial();
  void enterTerms();
  void printPolynomial() const;
  Polynomial operator+(const Polynomial&) const;
  Polynomial operator-(const Polynomial&) const;
  const Polynomial operator=(const Polynomial&);
  Polynomial& operator+=(const Polynomial&);
  Polynomial& operator-=(const Polynomial&);
  ~Polynomial();
};

#endif
