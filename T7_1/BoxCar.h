#pragma once
#include "Car.h"
class BoxCar : public Car
{
public:
	double area;
	virtual void printCapacity()const;
	BoxCar(double x = 0.0);
	virtual ~BoxCar(){}
};

