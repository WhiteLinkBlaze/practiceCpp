#include "header/Account.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

Account::Account()
	:accID(0), balance(0),cusName(NULL)
{
}

Account::Account(int ID, int money, const char* name)
	:accID(ID), balance(money)
{
	int len = strlen(name) + 1;
	cusName = new char[len];
	strcpy_s(cusName, len, name);
}

int Account::GetAccID()
{
	return accID;
}

void Account::Deposit(int money)
{
	if (money <= 0)
	{
		cout << "[ACCOUNT]유효하지 않은 값입니다." << endl;
		return;
	}
	balance += money;
}

int Account::Withdraw(int money)
{
	if (money > balance)
	{
		cout << "[ACCOUNT]유효하지 않은 값입니다." << endl;
		return 0;
	}
	balance -= money;
	return money;
}

void Account::ShowAccInfo()
{
	cout << "계좌 번호: " << accID << endl;
	cout << "잔액: " <<balance<< endl;
	cout << "고객 이름: " << cusName<< endl;
}

Account::~Account()
{
	cout << "삭제합니다." << endl;
	ShowAccInfo();
	delete cusName;
}
