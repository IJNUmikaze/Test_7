#include "TankCar.h"
#include<iostream>
using namespace std;
void TankCar::printCapacity()const {
	cout << "±¾³µÊ£Óà" << 5000.0 - volume << "Éý" << endl;
	return;
}
TankCar::TankCar(double x) {
	volume = x;
}