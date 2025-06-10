#include "header/Mutable.h"
#include <iostream>

using std::cout;
using std::endl;
Mutable::Mutable(int n1, int n2):
num1(n1), num2(n2)
{
}

void Mutable::ShowMutableData() const
{
	cout << num1 << ", " << num2 <<endl;
}

void Mutable::CopyToNum2() const
{
	num2 = num1;
}
void mutableTestFunction()
{
	Mutable mu(1, 2);
	mu.ShowMutableData();
	mu.CopyToNum2();
	mu.ShowMutableData();
}