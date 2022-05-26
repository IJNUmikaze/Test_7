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
	cout << "请输入座位数和车门数:";
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
	cout << "该汽车的产地为:" << Birth << '\t';
	cout << "该汽车的颜色为:" << Color << endl;
	cout << "该汽车的座位数为:" << Seats << '\t';
	cout << "该汽车的车门数为:" << Doors << endl;
	return;
}