#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

namespace BANK_SYSTEM
{
	enum{MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};
	enum{NORMAL=1, CREDIT};
	enum{LEVEL_A=7, LEVEL_B=4, LEVEL_C=2};
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
	virtual void Deposit(int money);//입금
	virtual int Withdraw(int money);//출금
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
	void NormalMakeAccount();
	void CreditMakeAccount();
	void DepositMoney();
	void WithdrawMoney();
	void ShowAllAccInfo() const;
	~AccountHandler();
};

void AccountLoop();
#endif
