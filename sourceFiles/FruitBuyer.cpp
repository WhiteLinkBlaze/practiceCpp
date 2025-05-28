#include "header\\FruitBuyer.h"
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
		cout << "[FBUYER] 잘못된 수치입니다." << endl;
		return;
	}
	//message passing ����
	numOfApples += seller.SaleApples(money); // seller, 메시지 패싱
	myMoney -= money;
}

void FruitBuyer::ShowBuyResult()
{
	cout << "구매자 금액: "<<myMoney << endl;
	cout << "사과 개수: "<<numOfApples <<endl<< endl;
}
