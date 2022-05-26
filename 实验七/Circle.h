#pragma once
#include"Point.h"
class Circle : public Point
{
public:
	Circle(float l = 0, float r = 0, float R = 0);
	void SetRadius(float);
	float GetRadius()const { return Radius; }
	void ShapeName()const {
		cout << "Circle =" << Radius << endl;
	}
	float Area()const;
	~Circle(){}
	friend ostream& operator<<(ostream& output, const Circle& C);
private:
	float Radius;
};

