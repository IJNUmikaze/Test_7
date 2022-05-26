#include<vector>
#include"Car.h"
#include"BoxCar.h"
#include"TankCar.h"
#include<iostream>

using namespace std;
//------------------------------
int main() {
	vector<Car*> cars(4);
	cars[0] = new BoxCar(15);     // ����15ƽ��
	cars[1] = new BoxCar(10);
	cars[2] = new TankCar(3000); // ����3000��
	cars[3] = new BoxCar(20);
	for (int i = 0; i < 4; i++)
		cars[i]->printCapacity(); // ���ʣ������
	for (int j = 0; j < 4; j++)
		delete cars[j];
}//-----------------------------
