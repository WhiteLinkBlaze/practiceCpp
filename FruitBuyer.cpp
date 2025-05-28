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
		cout << "�߸��� �ݾ��Դϴ�." << endl;
		return;
	}
	//message passing ����
	numOfApples += seller.SaleApples(money); // seller, ��� 2000����ġ �ּ���
	myMoney -= money;
}

void FruitBuyer::ShowBuyResult()
{
	cout << "���� �ܾ�: "<<myMoney << endl;
	cout << "��� ����: "<<numOfApples <<endl<< endl;
}
