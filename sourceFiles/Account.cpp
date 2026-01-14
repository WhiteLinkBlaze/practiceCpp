#include "header/Account.h"
#include "header/NormalAccount.h"
#include "header/HighCreditAccount.h"
#include <cstdlib>
using MY_STRING::String;
using std::cout;
using std::endl;
using std::cin;

Account::Account()
	:accID(0), balance(0),cusName(NULL)
{
}

Account::Account(Account& ref): accID(ref.accID), balance(ref.balance)
{
	cusName = ref.cusName;
}

Account::Account(int ID, int money, const String name)
	:accID(ID), balance(money)
{
	cusName = String(name);
}
Account& Account::operator=(const Account& ref)
{
	if(this == &ref)
		return *this;
	accID = ref.accID;
	balance = ref.balance;
	cusName = ref.cusName;
	return *this;
}
int Account::GetAccID() const
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

void Account::ShowAccInfo() const
{
	cout << "계좌 번호: " << accID << endl;
	cout << "잔액: " <<balance<< endl;
	cout << "고객 이름: " << cusName<< endl;
}

Account::~Account()
{
	cout << "삭제합니다." << endl;
	ShowAccInfo();
}
