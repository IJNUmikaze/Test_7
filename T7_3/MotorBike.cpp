#include "MotorBike.h"
#include<iostream>
#include<string>
using namespace std;
MotorBike::MotorBike(int x, string s1, string s2) :Vehicle(s1, s2) {
	Guns = x;
}
MotorBike::MotorBike() :Vehicle(){
	int n;
	cout << "������������:";
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
	cout << "��Ħ�г��Ĳ���Ϊ:" << Birth << '\t';
	cout << "��Ħ�г�����ɫΪ:" << Color << endl;
	cout << "��Ħ�г���������Ϊ:" << Guns << endl;
	return;
}