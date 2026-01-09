#pragma once
#ifndef __ACCOUNT__
#define __ACCOUNT__

namespace BANK_SYSTEM
{
	enum{MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};
}
class Account
{
private:
	int accID;		//계좌 번호
	int balance;	//잔액
	char* cusName;	//고객 이름
public:
	Account();
	Account(Account& ref);
	Account(int ID, int money, const char* name);
	int GetAccID() const;
	void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;
	~Account();
};

class AccountHandler
{
private:
	Account* accArr[100];
	int accNum;
public:
	AccountHandler();
	void ShowMenu() const;
	void MakeAccount();
	void DepositMoney();
	void WithdrawMoney();
	void ShowAllAccInfo() const;
	~AccountHandler();
};

void AccountLoop();
#endif
