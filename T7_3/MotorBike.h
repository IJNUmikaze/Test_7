#pragma once
#include "Vehicle.h"
#include<iostream>
using namespace std;
class MotorBike :  public Vehicle
{
public:
	int Guns;
	MotorBike();
	MotorBike(int x, string s, string s2);
	virtual ~MotorBike() {
		cout << "Îö¹¹MotorBike" << endl;
	}
	virtual void PrintInfo();
	virtual void Add();

};

