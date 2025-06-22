#include "header/FruitBuyer.h"
#include <iostream>

using std::cout;
using std::endl;

FruitBuyer::FruitBuyer(int money)
	:myMoney(money), numOfApples(0)
{
	if (money < 0)
	{
		cout << "[FBUYER] 올바르지 않은 값입니다." << endl;
		return;
	}
	//myMoney = money;
}

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
	//message passing
	numOfApples += seller.SaleApples(money); // seller, 메시지 패싱
	myMoney -= money/seller.GetAPPLE_PRICE() * seller.GetAPPLE_PRICE();
}

void FruitBuyer::ShowBuyResult()
{
	cout << "구매자 금액: "<<myMoney << endl;
	cout << "사과 개수: "<<numOfApples <<endl<< endl;
}
void BuyerSellerMessagePassingFunction() {
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "판매자 정보" << endl;
	seller.ShowSalesResult();
	cout << "구매자 정보" << endl;
	buyer.ShowBuyResult();
}

void BuyerSellerMessagePassingFunctionTwo() {
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, -1);

	cout << "판매자 정보" << endl;
	seller.ShowSalesResult();
	cout << "구매자 정보" << endl;
	buyer.ShowBuyResult();
}
