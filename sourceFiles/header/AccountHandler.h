#ifndef __ACCOUNT_HANDLER_H__
#define __ACCOUNT_HANDLER_H__
#include "Account.h"
#include "AccountArray.h"

class AccountHandler
{
private:
	BoundCheckPointPtrArray accArr;
	int accNum;
public:
	AccountHandler();
	void ShowMenu() const;
	void MakeAccount();
	void DepositMoney();
	void WithdrawMoney();
	void ShowAllAccInfo() const;
	~AccountHandler();
protected:
    void NormalMakeAccount();
	void CreditMakeAccount();
};
#endif