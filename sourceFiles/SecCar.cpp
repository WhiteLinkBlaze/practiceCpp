#include "header\\SecCar.h"

#include <iostream>
#include "Car.h"
using std::cout;
using std::endl;


void SecCar::InitMembers(const char* ID, int fuel)
{
	strcpy_s(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void SecCar::ShowCarState() {
	cout << "������ ID: " << gamerID << endl;
	cout << "���ᷮ: " << fuelGauge << "%" << endl;
	cout << "����ӵ�: " << curSpeed << "km/s" << endl;
}
void SecCar::Accel() {
	if (fuelGauge <= 0) {
		return;
	}
	else {
		fuelGauge -= SECCAR_CONST::FUEL_STEP;
	}
	if (curSpeed + SECCAR_CONST::ACC_STEP >= SECCAR_CONST::MAX_SPD) {
		curSpeed = SECCAR_CONST::MAX_SPD;
		return;
	}
	curSpeed += SECCAR_CONST::ACC_STEP;
}

void SecCar::Break() {
	if (curSpeed < SECCAR_CONST::BRK_STEP) {
		curSpeed = 0;
		return;
	}
	curSpeed -= SECCAR_CONST::BRK_STEP;
}