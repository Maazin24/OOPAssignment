// Maazin Ahmed - Professor Melvin - COMSC 200

#include <iostream>
#include <string>
#include "Maazin_Ahmed_HeartRates.h"

using namespace std;

// This is the constructor which is initialized only when the name and DOB are provided as parameters
HeartRates::HeartRates(string First, string Last, int Month, int Day, int Year)
{
  SetFirstName(First);
  SetLastName(Last);
  SetBirthMonth(Month);
  SetBirthDay(Day);
  SetBirthYear(Year);
}

void HeartRates::SetFirstName(string x)
{
  FirstName = x;
}
void HeartRates::SetLastName(string x)
{
  LastName = x;
}
string HeartRates::GetFirstName() const
{
  return FirstName;
}
string HeartRates::GetLastName() const
{
  return LastName;
}

void HeartRates::SetBirthMonth(int x)
{
  BirthMonth = x;
}
void HeartRates::SetBirthDay(int y)
{
  BirthDay = y;
}
void HeartRates::SetBirthYear(int z)
{
  BirthYear = z;
}
int HeartRates::GetBirthMonth() const
{
  return BirthMonth;
}
int HeartRates::GetBirthDay() const
{
  return BirthDay;
}
int HeartRates::GetBirthYear() const
{
  return BirthYear;
}

void HeartRates::SetCurrentMonth(int x)
{
  CurrentMonth = x;
}
void HeartRates::SetCurrentDay(int y)
{
  CurrentDay = y;
}
void HeartRates::SetCurrentYear(int z)
{
  CurrentYear = z;
}
int HeartRates::GetCurrentMonth() const
{
  return CurrentMonth;
}
int HeartRates::GetCurrentDay() const
{
  return CurrentDay;
}
int HeartRates::GetCurrentYear() const
{
  return CurrentYear;
}

// Here the SetAge function is responsible for assigning the proper value to the current day private variables
void HeartRates::SetAge()
{
  cout << "Please enter today's month, day, and year:" << endl;
  cin >> CurrentMonth >> CurrentDay >> CurrentYear;
}

// Here the GetAge function is responsible for calculating the age of the user
int HeartRates::GetAge()
{
  if (CurrentMonth < BirthMonth) // If the user's month of birth has not yet arrived, that means he/she is yet to have his/her birthday in the current year
  {
    age = (CurrentYear - BirthYear - 1);
  }
  else if (CurrentDay < BirthDay && CurrentMonth == BirthMonth) // If the user's day of birth has not yet arrived, that means their bithday of the current year has not yet come
  {
    age = (CurrentYear - BirthYear - 1);
  }
  else
  {
    age = (CurrentYear - BirthYear);
  }
  return age;
}

// These functions use the age and MaxHeartRate Private member variables to calculate values for the Target HR
int HeartRates::GetMaximumHeartRate()
{
  MaxHeartRate = (220 - age);
  return MaxHeartRate;
}
int HeartRates::GetLowerTargetHeartRate()
{
  LowerBoundHR = (0.5)*(MaxHeartRate);
  return LowerBoundHR;
}
int HeartRates::GetUpperTargetHeartRate()
{
  UpperBoundHR = (0.85)*(MaxHeartRate);
  return UpperBoundHR;
}
