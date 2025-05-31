#pragma once
#ifndef __SELLER__
#define __SELLER__ 0
class FruitSeller
{
private:
	const unsigned int APPLE_PRICE;
	int numOfApples;
	int myMoney;
public:
	FruitSeller(unsigned int price=1500, int money=0, int apples=0);
	void InitMembers(int price, int num, int money);
	int SaleApples(int money);
	void ShowSalesResult();
	unsigned int GetAPPLE_PRICE();
};
#endif
