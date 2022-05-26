#include<iostream>
#include"Point.h"
#include"Shape.h"
#include"Circle.h"
using namespace std;
int main() {
	Shape* S;
	S = new Point(3, 4);
	S->ShapeName();
}