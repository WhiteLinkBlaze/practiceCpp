#include "header/CarInheri.h"
#include <iostream>
using std::cout;
using std::endl;

Car::Car() : gasolineGauge(0)
{
}

Car::Car(int n) : gasolineGauge(n)
{
}

int Car::GetGasGauge()
{
	return gasolineGauge;
}

HybridCar::HybridCar() :eletricGauge(0)
{
}

HybridCar::HybridCar(int ele): eletricGauge(ele)
{
}

HybridCar::HybridCar(int gas, int ele): Car(gas), eletricGauge(ele)
{
}

int HybridCar::GetEleGauge()
{
	return eletricGauge;
}

HyBridWaterCar::HyBridWaterCar():waterGauge(0)
{
}

HyBridWaterCar::HyBridWaterCar(int water) : waterGauge(water)
{
}

HyBridWaterCar::HyBridWaterCar(int ele, int water): HybridCar(ele),waterGauge(water)
{
}

HyBridWaterCar::HyBridWaterCar(int gas, int ele, int water): HybridCar(gas,ele),waterGauge(water)
{
}

void HyBridWaterCar::ShowCurrentGauge()
{
	cout << "잔여 가솔린: " << GetGasGauge() << endl;
	cout << "잔여 전기량: " << GetEleGauge() << endl;
	cout << "잔여 워터량: " << waterGauge << endl<<endl;
}

void carTestFunction()
{
	HyBridWaterCar hw1;

	hw1.ShowCurrentGauge();

	HyBridWaterCar hw2(10);

	hw2.ShowCurrentGauge();

	HyBridWaterCar hw3(10,20,30);

	hw3.ShowCurrentGauge();
}
