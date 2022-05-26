#include "Circle.h"
Circle::Circle(float l, float r,float R):Point(l,r),Radius(R){}
void Circle::SetRadius(float R) {
	Radius = R;
}
ostream& operator<<(ostream& output, const Circle& C) {
	output << C.Radius << endl;
	return output;
}
float Circle::Area() const{
	return Radius * Radius * 3.14;
}