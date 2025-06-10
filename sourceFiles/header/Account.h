#pragma once
#ifndef __ACCOUNT__
#define __ACCOUNT__
class Account
{
private:
	int accID;		//계좌 번호
	int balance;	//잔액
	char* cusName;	//고객 이름
public:
	Account();
	Account(Account& ref);
	Account(int ID, int money,const char* name);
	int GetAccID() const;
	void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;
	~Account();
};
#endif
