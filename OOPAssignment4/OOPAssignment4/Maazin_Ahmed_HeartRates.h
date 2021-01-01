// Maazin Ahmed - Professor Melvin - COMSC 200

#ifndef Maazin_Ahmed_HeartRates_h
#define Maazin_Ahmed_HeartRates_h

using namespace std;

class HeartRates
{
private:
  
  // These are all the member variables for every HeartRates class object, they all have one getter and setter function
  
  string FirstName;
  string LastName;
  int BirthMonth;
  int BirthDay;
  int BirthYear;
  int CurrentMonth;
  int CurrentDay;
  int CurrentYear;
  
  int age;
  int MaxHeartRate;
  int LowerBoundHR;
  int UpperBoundHR;
  
public:
  HeartRates(string, string, int, int, int);
  
  // Here are the prototypes for each getter and setter function which is implemented in the second cpp file
  
  void SetFirstName(string);
  void SetLastName(string);
  string GetFirstName() const;
  string GetLastName() const;
  
  void SetBirthMonth(int);
  void SetBirthDay(int);
  void SetBirthYear(int);
  int GetBirthMonth() const;
  int GetBirthDay() const;
  int GetBirthYear() const;
  
  void SetCurrentMonth(int);
  void SetCurrentDay(int);
  void SetCurrentYear(int);
  int GetCurrentMonth() const;
  int GetCurrentDay() const;
  int GetCurrentYear() const;
  
  void SetAge();
  int GetAge();
  int GetMaximumHeartRate();
  int GetLowerTargetHeartRate();
  int GetUpperTargetHeartRate();
};

#endif
