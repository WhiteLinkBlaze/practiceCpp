#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__
#include "MyString.h"
#include "AccountException.h"

using MY_STRING::String;
class Account
{
private:
	int accID;		//계좌 번호
	int balance;	//잔액
	String cusName;	//고객 이름
public:
	Account();
	Account(Account& ref);
	Account(int ID, int money, const String name);
	Account& operator=(const Account& ref);
	int GetAccID() const;
	virtual void Deposit(int money); //입금
	int Withdraw(int money); //출금
	void ShowAccInfo() const;
	~Account();
};

void AccountLoop();
#endif
