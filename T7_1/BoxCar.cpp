#include "BoxCar.h"
#include<iostream>
using namespace std;
void BoxCar::printCapacity()const {
	cout << "本车剩余";
	cout << 20.0 - area << "平米" << endl;
	return;
}
BoxCar::BoxCar(double x) {
	area = x;
}