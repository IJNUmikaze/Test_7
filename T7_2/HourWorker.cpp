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
	cout << "小时工月工资为" << Calculate()+extra << "元" << endl;
	cout << "工作时间" << hours << "小时" << '\t' << "每小时" << ratio << "元" << '\t' << "加班费" << extra << "元" << endl;
	return;
}