#pragma once
#ifndef __BUYER__
#define __BUYER__ 0
#include "FruitSeller.h"

class FruitBuyer
{
private:
	int myMoney;
	int numOfApples;
public:
	void InitMembers(int money);
	void BuyApples(FruitSeller& seller, int money);
	void ShowBuyResult();
};

#endif // !__BUYER__