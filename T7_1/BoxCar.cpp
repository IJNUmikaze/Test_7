#include "BoxCar.h"
#include<iostream>
using namespace std;
void BoxCar::printCapacity()const {
	cout << "����ʣ��";
	cout << 20.0 - area << "ƽ��" << endl;
	return;
}
BoxCar::BoxCar(double x) {
	area = x;
}