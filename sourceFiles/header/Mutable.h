#pragma once
#ifndef __MUTABLE__
#define __MUTABLE__

class Mutable
{
private:
	int num1;
	mutable int num2;
public:
	Mutable(int n1, int n2);
	void ShowMutableData()const;
	void CopyToNum2()const;

};
void mutableTestFunction();
#endif
