#include "TankCar.h"
#include<iostream>
using namespace std;
void TankCar::printCapacity()const {
	cout << "����ʣ��" << 5000.0 - volume << "��" << endl;
	return;
}
TankCar::TankCar(double x) {
	volume = x;
}