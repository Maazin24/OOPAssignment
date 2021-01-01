// Maazin Ahmed - COMSC 200 - Professor Melvin

#include <iostream>
#include "Maazin_Ahmed_Odometer.h"

using namespace std;

Odometer::Odometer(int x, FuelGauge* Check) // Comment 1: The Odometer Constructor initialized the mileage, and also requires a FuelGauge object to be passed through
{
  mileage = x;
  fuelcheck = x;
  Reference = Check;
  
}
int Odometer::get_mileage() const
{
  return mileage;
}
void Odometer::AddMile()
{
  mileage++;
  if (mileage > 999999)
  {
    mileage = 0; // Comment 2: Reset the odometer to zero if the mileage exceeds 1,000,000 miles of driving
  }
  if (fuelcheck > mileage)
  {
    int temp = mileage + 1000000; // Comment 3: Temp checks to see the amount of miles drivin since last fuel gauge decrement
    if ((temp - fuelcheck) >= 24) // Comment 4: If the amount of miles drivin since last fuel gauge decrement hits 24, then decrement the Fuel Gauge
    {
      Reference->UseFuel();
      fuelcheck = mileage;
    }
  }
  else
  {
    if ((mileage - fuelcheck) >= 24)
    {
      Reference->UseFuel();
      fuelcheck = mileage;
    }
  }
}
