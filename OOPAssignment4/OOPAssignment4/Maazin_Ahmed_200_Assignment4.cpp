// Maazin Ahmed - Professor Melvin - COMSC 200

#include <iostream>
#include "Maazin_Ahmed_HeartRates.h"

using namespace std;

int main()
{
  // These lines prompt the user for their name and date of birth, and then uses that data to initialize the Object
  string FirstName, LastName;
  int  bDay, bMonth, bYear;
  cout << "Please enter first and last name (separated by spaces):" << endl;
  cin >> FirstName >> LastName;
  cout << "Please enter month, day and year of birth (separated by spaces):" << endl;
  cin >> bMonth >> bDay >> bYear;
  
  // Here the Object is initialized, the name and date of birth parameters are passed to set the Object's member variables
  HeartRates Individual(FirstName, LastName, bMonth, bDay, bYear);
  
  // These lines of code output the user's name onto the screen using the name getter and setter functions
  cout << "First Name: " << Individual.GetFirstName() << endl;
  cout << "Last Name: " << Individual.GetLastName() << endl;
  
  // Here the age, maximum heart rate, and target heart rate is calculated and outputed to the screen
  Individual.SetAge();
  cout << "Age: " << Individual.GetAge() << endl;
  cout << "Maximum Heart Rate: " << Individual.GetMaximumHeartRate() << endl;
  cout << "Target Heart Rate: " << Individual.GetLowerTargetHeartRate() << "-" << Individual.GetUpperTargetHeartRate() << endl;
  
  return 0;
}
