// Maazin Ahmed - COMSC 200 - Professor Melvin

#ifndef Odometer_h
#define Odometer_h

#include "Maazin_Ahmed_FuelGauge.h"

class Odometer
{
private:
  int mileage;
  int fuelcheck;
  FuelGauge * Reference; // Comment 5: This pointer is used to refer to the FuelGauge class in order to know the amount fuel in the vehicle
public:
  Odometer(int, FuelGauge*); // Comment 6:  Constructor takes in both the mileage of the car, and its corresponding FuelGauge object
  int get_mileage() const;
  void AddMile();
};

#endif
