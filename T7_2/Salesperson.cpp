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
	cout << "����Ա�¹���Ϊ" << Calculate() << "Ԫ" << endl;
	cout << "��������" << fee << "Ԫ" << '\t' << "���۶�Ϊ" << sale << "Ԫ" << '\t' << "���۶���ɱ���Ϊ" << ratio << endl;
	return;
}