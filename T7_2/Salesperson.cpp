#include "Salesperson.h"
#include<iostream>
using namespace std;
Salesperson::Salesperson(double x, double y,double z) {
	fee = x;
	ratio = y;
	sale = z;
}
double Salesperson::Calculate() {
	return fee + sale * ratio;
}
void Salesperson::Show() {
	cout << "销售员月工资为" << Calculate() << "元" << endl;
	cout << "基础工资" << fee << "元" << '\t' << "销售额为" << sale << "元" << '\t' << "销售额提成比例为" << ratio << endl;
	return;
}