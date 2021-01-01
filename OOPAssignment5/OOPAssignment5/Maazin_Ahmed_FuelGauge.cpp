// Maazin Ahmed - COMSC 200 - Professor Melvin

#include <iostream>
#include "Maazin_Ahmed_FuelGauge.h"

using namespace std;

FuelGauge::FuelGauge()
{
  FuelAmount = 0;
}
int FuelGauge::get_Fuel() const
{
  return FuelAmount;
}
void FuelGauge::AddFuel()
{
  if (FuelAmount < 15)
  {
    FuelAmount++;
  }
}
void FuelGauge::UseFuel()
{
    FuelAmount--;
}
