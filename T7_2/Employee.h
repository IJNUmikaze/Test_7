#pragma once
class Employee
{
public:
	Employee(){}
	virtual ~Employee(){}
	virtual double Calculate() { return 0.0; }
	virtual void Show(){}
};

