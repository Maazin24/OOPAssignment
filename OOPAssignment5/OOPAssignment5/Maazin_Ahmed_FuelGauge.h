// Maazin Ahmed - COMSC 200 - Professor Melvin

#ifndef FuelGauge_h
#define FuelGauge_h

class FuelGauge
{
private:
  int FuelAmount;
public:
  FuelGauge();
  int get_Fuel() const;
  void AddFuel();
  void UseFuel();
};

#endif
