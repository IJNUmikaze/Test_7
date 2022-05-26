#include "MotorBike.h"
#include<iostream>
#include<string>
using namespace std;
MotorBike::MotorBike(int x, string s1, string s2) :Vehicle(s1, s2) {
	Guns = x;
}
MotorBike::MotorBike() :Vehicle(){
	int n;
	cout << "请输入气缸数:";
	cin >> n;
	Guns = n;
}
void MotorBike::Add() {
	MotorBike* p = new MotorBike;
	Guns = p->Guns;
	Birth = p->Birth;
	Color = p->Color;
	return;
}
void MotorBike::PrintInfo() {
	cout << "该摩托车的产地为:" << Birth << '\t';
	cout << "该摩托车的颜色为:" << Color << endl;
	cout << "该摩托车的气缸数为:" << Guns << endl;
	return;
}