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
	FruitBuyer(int money = 0);
	void InitMembers(int money);
	void BuyApples(FruitSeller& seller, int money);
	void ShowBuyResult();
};
void BuyerSellerMessagePassingFunction();
void BuyerSellerMessagePassingFunctionTwo();
#endif // !__BUYER__