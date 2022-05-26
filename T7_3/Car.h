#pragma once
#include "Vehicle.h"
#include<string>
#include<iostream>
using namespace std;
class Car :  public Vehicle
{
public:
	int Seats;
	int Doors;
	Car();
	Car(int x, int y,string s1,string s2);
	virtual ~Car(){
		cout << "Îö¹¹Car" << endl;
	}
	virtual void PrintInfo();
	virtual void Add();
};

