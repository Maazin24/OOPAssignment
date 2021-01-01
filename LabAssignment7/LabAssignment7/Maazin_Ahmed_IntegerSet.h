// Maazin Ahmed - Professor Melvin - COMSC 200

#ifndef Maazin_Ahmed_IntegerSet_h
#define Maazin_Ahmed_IntegerSet_h

#include <iostream>
#include <vector>

using namespace std;
const int MAX = 101; // Comment 1: The Set Object can only contain the values from 0 to 100, so MAX has been initialized as the upper bound for the vector object 'Set'

class IntegerSet
{
private:
  vector<bool> Set; // Comment 2: Vector of boolean values, if the value is in the set, the corresponding index will return true
public:
  IntegerSet();
  void inputSet();
  void emptySet();
  IntegerSet unionOfSets(IntegerSet); // Comment 3: Union Of Sets is used to combine both sets into one set, and does not repeat any values that occur twice
  IntegerSet intersectionOfSets(IntegerSet); // Comment 4: Intersection of sets is used to find the values that are occurent in both sets
  void insertElement(int);
  void deleteElement(int);
  void printSet();
  bool isEqualTo(IntegerSet); // Comment 5: Is Equal To is used to figure out whether or not both sets are equivalent vectors by comparing each corresponding value in both sets
  IntegerSet(int [], int);
};

#endif
