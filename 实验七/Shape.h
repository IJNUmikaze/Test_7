#pragma once
class Shape
{
public:
	virtual void ShapeName()const = 0;
	virtual float Area()const { return 0.0; }
	virtual float Volume() { return 0.0; }
	virtual ~Shape(){}
};

