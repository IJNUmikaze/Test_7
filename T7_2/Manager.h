#pragma once
#include "Employee.h"
class Manager : public Employee
{
public:
	Manager(double x = 10000);
	virtual ~Manager(){}
	virtual double Calculate();
	virtual void Show();
private:
	double fee;
};

