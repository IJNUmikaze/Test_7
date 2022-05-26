#include "PieceWorker.h"
#include<iostream>
using namespace std;
PieceWorker::PieceWorker(int x, double y) {
	sum = x;
	ratio = y;
}
double PieceWorker::Calculate() {
	return sum * ratio;
}
void PieceWorker::Show() {
	cout << "计件工月工资为" << Calculate() << "元" << endl;
	cout << "加工" << sum << "件" << '\t' << "每件" << ratio << "元" << endl;
	return;
}