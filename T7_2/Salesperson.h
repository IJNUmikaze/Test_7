#pragma once
#include "Employee.h"
class Salesperson : public Employee
{
public:
	Salesperson(double x=3000,double y= 0.03,double z=10000);
	virtual ~Salesperson(){}
	virtual void Show();
	virtual double Calculate();
private:
	double fee;
	double ratio;
	double sale;
};

