#include "Manager.h"
#include<iostream>
using namespace std;
Manager::Manager(double x) {
	fee = x;
}
void Manager::Show() {
	cout << "�����¹���" << Calculate() << "Ԫ" << endl;
	return;
}
double Manager::Calculate() {
	return fee;
}