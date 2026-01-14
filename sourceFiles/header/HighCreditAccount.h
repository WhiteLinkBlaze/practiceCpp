#ifndef __HIGH_CREDIT_ACCOUNT_H__
#define __HIGH_CREDIT_ACCOUNT_H__
#include "NormalAccount.h"

class HighCreditAccount : public NormalAccount
{
private:
    int creditLevel; //신용 등급
public:
    HighCreditAccount(int ID, int money, const MY_STRING::String name, int rate, int level)
        : NormalAccount(ID, money, name, rate), creditLevel(level) {}
    virtual void Deposit(int money) override
    {
        int interest = money * (creditLevel / 100.0);
        NormalAccount::Deposit(money + interest);
    }
};
#endif