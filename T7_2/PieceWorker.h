#pragma once
#include "Employee.h"
class PieceWorker :  public Employee
{
public:
	PieceWorker(int x = 10000,double y=0.5);
	virtual ~PieceWorker(){}
	virtual double Calculate();
	virtual void Show();
private:
	int sum;
	double ratio;
};

