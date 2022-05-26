#include "Point.h"
Point::Point(float l, float r) :x(l), y(r){}
void Point::SetPoint(float l, float r) {
	x = l;
	y = r;
}
ostream& operator<<(ostream& output, const Point& P) {
	output << P.x << '\t' << P.y << endl;
	return output;
}