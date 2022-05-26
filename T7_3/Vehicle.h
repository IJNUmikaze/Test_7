#pragma once
#include<string>
#include<iostream>
using namespace std;
class Vehicle
{
public:
	string Birth;
	string Color;
	virtual void PrintInfo();
	virtual void Add();
	Vehicle();
	Vehicle(string s1, string s2);
	virtual ~Vehicle(){
		cout << "Îö¹¹Vehicle" << endl;
	}
};

