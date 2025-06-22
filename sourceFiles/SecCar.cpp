#include "header/SecCar.h"

#include <iostream>
#include "header/Car.h"
using std::cout;
using std::endl;


void SecCar::InitMembers(const char* ID, int fuel)
{
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void SecCar::ShowCarState() {
	cout << "회원 ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재 속도: " << curSpeed << "km/s" << endl;
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