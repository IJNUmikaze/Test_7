#include "Manager.h"
#include<iostream>
using namespace std;
Manager::Manager(double x) {
	fee = x;
}
void Manager::Show() {
	cout << "经理月工资" << Calculate() << "元" << endl;
	return;
}
double Manager::Calculate() {
	return fee;
}