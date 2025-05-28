

#ifndef iost
#define iost 0
#include <iostream>
#endif
#include "Car.h"
using std::cout;
using std::endl;


void Car::ShowCarState() {
	cout << "소유자 ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%"  << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl;
}
void Car::Accel() {
	if (fuelGauge <= 0) {
		return;
	}
	else{
		fuelGauge -= FUEL_STEP;
	}
	if (curSpeed + ACC_STEP >= MAX_SPD) {
		curSpeed = MAX_SPD;
		return;
	}
	curSpeed += ACC_STEP;
}

void Car::Break() {
	if (curSpeed < BRK_STEP) {
		curSpeed = 0;
		return;
	}
	curSpeed -= BRK_STEP;
}