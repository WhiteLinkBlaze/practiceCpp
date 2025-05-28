#include "FruitBuyer.h"
#include <iostream>

using std::cout;
using std::endl;

void FruitBuyer::InitMembers(int money)
{
	myMoney = money;
	numOfApples = 0;
}

void FruitBuyer::BuyApples(FruitSeller& seller, int money)
{
	if (money < 0) {
		cout << "잘못된 금액입니다." << endl;
		return;
	}
	//message passing 예시
	numOfApples += seller.SaleApples(money); // seller, 사과 2000원어치 주세요
	myMoney -= money;
}

void FruitBuyer::ShowBuyResult()
{
	cout << "현재 잔액: "<<myMoney << endl;
	cout << "사과 개수: "<<numOfApples <<endl<< endl;
}
