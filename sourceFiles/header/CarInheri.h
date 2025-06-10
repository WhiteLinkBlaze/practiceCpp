#pragma once


class Car
{
private:
	int gasolineGauge;
public:
	Car();
	Car(int n);
	int GetGasGauge();
};

class HybridCar : public Car
{
private:
	int eletricGauge;
public:
	HybridCar();
	HybridCar(int ele);
	HybridCar(int gas, int ele);
	int GetEleGauge();
};

class HyBridWaterCar : public HybridCar
{
private:
	int waterGauge;
public:
	HyBridWaterCar();
	HyBridWaterCar(int water);
	HyBridWaterCar(int ele, int water);
	HyBridWaterCar(int gas, int ele, int water);
	void ShowCurrentGauge();
};

void carTestFunction();