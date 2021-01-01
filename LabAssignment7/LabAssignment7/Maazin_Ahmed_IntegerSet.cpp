// Maazin Ahmed - Professor Melvin - COMSC 200

#include <iostream>
#include "Maazin_Ahmed_IntegerSet.h"

using namespace std;

IntegerSet::IntegerSet()
{
  Set = vector<bool>(MAX); // Comment 6: Set is initialized to an empty vector with all values of 0 and size "MAX" (100)
    for (int i = 0; i < MAX; i++)
    {
      (Set)[i] = false;
    }
}

void IntegerSet::inputSet()
{
  int temp = 0;
  while (temp != -1) // Comment 7: While the user does not input -1, a number less than 0, or a number greater than 100, the code will continue to input numbers into the set object
  {
  cout << "Enter an Element (-1 to end): ";
  cin >> temp;
    if (temp >= 0 && temp < MAX)
      (Set)[temp] = true;
    else if ( temp == -1 )
    {
      break;
    }
    else
      cout << "Invalid Element" << endl;
  }
  cout << "Entry Complete" << endl;
}

void IntegerSet::emptySet()
{
  for (int i = 0; i < MAX; i++)
  {
    Set[i] = false;
  }
}

IntegerSet IntegerSet::unionOfSets(IntegerSet SET2)
{
  IntegerSet SET3;
  for (int i = 0; i < MAX; i++)
  {
    if((Set)[i] == true || (SET2.Set)[i] == true)
    {
      SET3.insertElement(i); // Comment 8: SET 3 object will store every value that is contained in both of the Sets (ignoring repeats), and is returned at the end of the function
    }
  }
  return SET3;
}

IntegerSet IntegerSet::intersectionOfSets(IntegerSet SET2)
{
  IntegerSet SET3;
  for (int i = 0; i < MAX; i++)
  {
    if((Set)[i] == true && (SET2.Set)[i] == true)
    {
      SET3.insertElement(i); // Comment 9: SET 3 Object will store the values that are contained in both of the Sets, and is returned at the end of the function
    }
  }
  return SET3;
}

void IntegerSet::insertElement(int NEW)
{
  if (NEW >= 0 && NEW < MAX)
  {
    (Set)[NEW] = true;
  }
  else
    cout << "Invalid Element" << endl;
}

void IntegerSet::deleteElement(int NEW)
{
  if (NEW >= 0 && NEW < MAX)
  {
    (Set)[NEW] = false;
  }
  else
    cout << "Invalid Element" << endl;
}

void IntegerSet::printSet()
{
  cout << "{ ";
  for (int i = 0; i < MAX; i++)
  {
    if((Set)[i] == true)
    {
      cout << i << "  ";
    }
  }
  cout << "}" << endl;
}

bool IntegerSet::isEqualTo(IntegerSet COMPARISON)
{
  for (int i = 0; i < MAX; i++)
  {
    if((Set)[i] != (COMPARISON.Set)[i])
      return false;
  }
      return true;
}

IntegerSet::IntegerSet(int Copy[], int Size)
{
  Set = vector<bool>(MAX);
  for (int i = 0; i < Size; i++)
  {
    if (Copy[i] >= 0 && Copy[i] < MAX)
    {
      (Set)[Copy[i]] = true; // Comment 10: The array passed through the function is copied into the vector object, and any out-of-range values are not inserted
    }
    else
      cout << "Invalid Insertion Attempted" << endl;
  }
}
