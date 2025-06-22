
#include <iostream>
#include "header/Calculator.h"
#include "header/Printer.h"
using std::cout;
using std::endl;

void Calculator::InitCalculator()
{
	count_add = 0;
	count_div = 0;
	count_min = 0;
	count_mult = 0;
}

double Calculator::Add(double num1, double num2)
{
	count_add++;
	return num1 + num2;
}

double Calculator::Div(double num1, double num2)
{
	count_div++;
	return num1 / num2;
}

double Calculator::Min(double num1, double num2)
{
	count_min++;
	return num1 - num2;
}

double Calculator::Mult(double num1, double num2)
{
	count_mult++;
	return num1 * num2;
}

void Calculator::ShowOpCount()
{
	cout << "더하기: " << count_add
		<< " 빼기: " << count_min
		<< " 곱하기: " << count_mult
		<< " 나누기: " << count_div << endl;
}

void CalculatorTestFunction() {
	Calculator cal;
	cal.InitCalculator();
	cout << "3.2 + 2.4 =" << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 =" << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 =" << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 =" << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();

	Printer ptr;
	ptr.SetString("Hello World!");
	ptr.ShowString();
}