#include "Vehicle.h"
#include<string>
#include<iostream>
using namespace std;
Vehicle::Vehicle(string s1, string s2) {
	Birth = s1;
	Color = s2;
}
Vehicle::Vehicle() {
	string str1, str2;
	cout << "��������غ���ɫ:";
	cin >> str1 >> str2;
	Birth = str1;
	Color = str2;
}
void Vehicle::Add() {
	Vehicle* p = new Vehicle;
	Birth = p->Birth;
	Color = p->Color;
	return;
}
void Vehicle::PrintInfo() {
	cout << "�ؾߵĲ���Ϊ:" << Birth << '\t';
	cout << "�ؾߵ���ɫΪ:" << Color << endl;
	return;
}