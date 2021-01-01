// Maazin Ahmed - COMSC 200 - Professor Melvin

#include <iostream>

#include "Maazin_Ahmed_Odometer.h"
#include "Maazin_Ahmed_FuelGauge.h"

using namespace std;

int main ()
{
  FuelGauge ToyotaGas;
  Odometer ToyotaMiles(0, &ToyotaGas); // Comment 7: The Odometer Object is initialized with the current mileage, and the corresponding FuelGauge object
  
  for (int i = 0; i < 15; i++)
  {
    ToyotaGas.AddFuel(); // Comment 8: Simulation of filling up the gas tank in order to drive the vehicle
  }
  
  while (ToyotaGas.get_Fuel() > 0) // Comment 9: Until the FuelGauge is empty, keep driving the vehicle
  {
    ToyotaMiles.AddMile(); // Comment 10: Simulation of the vehicle being drivin until it runs out of fuel
    cout << "Mileage: " << ToyotaMiles.get_mileage() << endl;
    cout << "Fuel Level: " << ToyotaGas.get_Fuel() << endl;
  }
  
  return 0;
}
