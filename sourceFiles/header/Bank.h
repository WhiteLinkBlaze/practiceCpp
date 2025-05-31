#pragma once
#ifndef __BANK__
#define __BANK__
#include "Account.h"
namespace BANK {
	enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
}
class Bank
{
private:
	const int maxLen;
	int count;
	Account ** userList;
public:
	Bank();
	void ShowMenu();		//메뉴
	void MakeAccount();		//계좌개설을 위한 함수
	void DepositeMoney();	//입금
	void WithdrawMoney();	//출금
	void ShowAllAccInfo();	//잔액조회
	~Bank();

};

void bankTestFunctionLoop();
#endif
