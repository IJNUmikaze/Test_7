#include "HourWorker.h"
#include<iostream>
using namespace std;
HourWorker::HourWorker(double x, double y,double z) {
	hours = x;
	ratio = y;
	extra = z;
}
double HourWorker::Calculate() {
	return hours * ratio;
}
void HourWorker::Show() {
	cout << "Сʱ���¹���Ϊ" << Calculate()+extra << "Ԫ" << endl;
	cout << "����ʱ��" << hours << "Сʱ" << '\t' << "ÿСʱ" << ratio << "Ԫ" << '\t' << "�Ӱ��" << extra << "Ԫ" << endl;
	return;
}