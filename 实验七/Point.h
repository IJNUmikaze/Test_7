#pragma once
#include"Shape.h"
#include<iostream>
using namespace std;
class Point : public Shape
{
public:
	Point(float l = 0, float r = 0);
	~Point(){}

	void SetPoint(float, float);
	float GetX()const { return x; }
	float GetY()const { return y; }

	void ShapeName()const {
		cout << "x=" << x << '\t' << "y=" << y << endl;
	}
	friend ostream& operator << (ostream& output, const Point& P);
private:
	float x;
	float y;
};

