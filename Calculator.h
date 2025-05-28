#pragma once
class Calculator
{
private:
	unsigned int count_add;
	unsigned int count_div;
	unsigned int count_min;
	unsigned int count_mult;
public:
	void InitCalculator();
	double Add(double, double);
	double Div(double, double);
	double Min(double, double);
	double Mult(double, double);
	void ShowOpCount();
};

