#include "header/FruitSeller.h"
#include <iostream>
using std::cout;
using std::endl;


FruitSeller::FruitSeller(unsigned int price, int money, int apples)
	:APPLE_PRICE(price)
{
	if (apples  < 0 || money < 0)
	{
		cout << "[FSELLER] 올바르지 않은 값입니다." << endl;
		return;
	}
	myMoney = money;
	numOfApples = apples;
}


void FruitSeller::InitMembers(int price, int num, int money)
{
	//APPLE_PRICE = price;
	numOfApples = num;
	myMoney = money;
}



int FruitSeller::SaleApples(int money)
{
	if (money < 0)
	{
		cout << "[FSELLER] 잘못된 수치입니다." << endl;
		return 0;
	}
	int num = money / APPLE_PRICE;
	numOfApples -= num;
	myMoney += num * APPLE_PRICE;
	return num;
}

void FruitSeller::ShowSalesResult()
{
	cout << "판매자 사과 개수: " << numOfApples << endl;
	cout << "판매자 금액: " << myMoney << endl << endl;
}

unsigned int FruitSeller::GetAPPLE_PRICE()
{
	return APPLE_PRICE;
}
