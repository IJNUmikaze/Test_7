#include<iostream>
#include"Vehicle.h"
#include"Car.h"
#include"MotorBike.h"
using namespace std;
int main() {
	Vehicle* V[6];
	for (int i = 0; i < 3; i++) {
		V[i] = new Car(0, 0, "Not Decided","Not Decided");
	}
	for (int i = 3; i < 6; i++) {
		V[i] = new MotorBike(0, "Not Decided", "Not Decided");
	}
	for (int i = 0; i < 6; i++) {
		cout << "第" << i + 1 << "项数据:" << endl;
		V[i]->Add();
		cout << endl;
	}
	for (int i = 0; i < 6; i++) {
		cout << "第" << i + 1 << "项数据:" << endl;
		V[i]->PrintInfo();
		cout << endl;
	}
	for (int i = 0; i < 6; i++) {
		delete V[i];
	}
	return 0;
}