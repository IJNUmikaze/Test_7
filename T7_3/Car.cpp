#include "Car.h"
#include<iostream>
#include<string>
using namespace std;
Car::Car(int x, int y, string s1, string s2):Vehicle(s1,s2) {
	Seats = x;
	Doors = y;
}
Car::Car():Vehicle() {
	int x, y;
	cout << "��������λ���ͳ�����:";
	cin >> x >> y;
	Seats = x;
	Doors = y;
}
void Car::Add() {
	Car* p = new Car;
	Birth = p->Birth;
	Color = p->Color;
	Seats = p->Seats;
	Doors = p->Doors;
	return;
}
void Car::PrintInfo() {
	cout << "�������Ĳ���Ϊ:" << Birth << '\t';
	cout << "����������ɫΪ:" << Color << endl;
	cout << "����������λ��Ϊ:" << Seats << '\t';
	cout << "�������ĳ�����Ϊ:" << Doors << endl;
	return;
}