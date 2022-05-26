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
	cout << "请输入产地和颜色:";
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
	cout << "载具的产地为:" << Birth << '\t';
	cout << "载具的颜色为:" << Color << endl;
	return;
}