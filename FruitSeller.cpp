#include "FruitSeller.h"
#include <iostream>
using std::cout;
using std::endl;

void FruitSeller::InitMembers(int price, int num, int money)
{
	APPLE_PRICE = price;
	numOfApples = num;
	myMoney = money;
}



int FruitSeller::SaleApples(int money)
{
	if (money < 0)
	{
		cout << "�߸��� �ݾ��Դϴ�." << endl;
		return 0;
	}
	int num = money / APPLE_PRICE;
	numOfApples -= num;
	myMoney += money;
	return num;
}

void FruitSeller::ShowSalesResult()
{
	cout << "���� ���: " << numOfApples << endl;
	cout << "��� ����: " << myMoney << endl << endl;
}
