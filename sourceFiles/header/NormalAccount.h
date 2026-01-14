#ifndef __NORMAL_ACCOUNT_H__
#define __NORMAL_ACCOUNT_H__
#include "Account.h"

class NormalAccount : public Account
{
private:
    int interestRate; //이자율
public:
    NormalAccount(int ID, int money, const MY_STRING::String name, int rate)
        : Account(ID, money, name), interestRate(rate) {}
    virtual void Deposit(int money) override
    {
        int interest = money * (interestRate / 100.0);
        Account::Deposit(money + interest);
    }
};
#endif