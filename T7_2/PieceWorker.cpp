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
	cout << "�Ƽ����¹���Ϊ" << Calculate() << "Ԫ" << endl;
	cout << "�ӹ�" << sum << "��" << '\t' << "ÿ��" << ratio << "Ԫ" << endl;
	return;
}