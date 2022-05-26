#pragma once
#include "Car.h"
class TankCar : public Car
{
public:
	TankCar(double x = 0.0);
	virtual ~TankCar(){}
	double volume;
	virtual void printCapacity() const;
};

