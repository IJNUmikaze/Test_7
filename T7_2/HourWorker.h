#pragma once
#include "Employee.h"
class HourWorker :  public Employee
{
public:
	HourWorker(double x = 10.0, double y = 60.0,double z=500.0);
	virtual ~HourWorker(){}
	virtual double Calculate();
	virtual void Show();
private:
	double hours;
	double extra;
	double ratio;
};

