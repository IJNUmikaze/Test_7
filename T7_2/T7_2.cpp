#include<iostream>
#include"Employee.h"
#include"HourWorker.h"
#include"Manager.h"
#include"PieceWorker.h"
#include"Salesperson.h"
using namespace std;
int main() {
	Employee* p;
	p = new Manager;
	p->Show();
	cout << endl;
	delete p;
	p = new Salesperson;
	p->Show();
	cout << endl;
	delete p;
	p = new PieceWorker;
	p->Show();
	cout << endl;
	delete p;
	p = new HourWorker;
	p->Show();
	cout << endl;
	delete p;
	return 0;
}