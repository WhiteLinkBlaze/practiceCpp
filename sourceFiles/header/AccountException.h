#ifndef __ACCOUNT_EXCEPTION_H__
#define __ACCOUNT_EXCEPTION_H__
#include "BankingCommonDec.h"
class MinusException
{
private:
    int exval;
public:
    MinusException(int value) : exval(value) {}
    void ShowExceptionReason() const
    {
        std::cout << "입(출)금액 "<<exval<<"은 유효하지 않습니다." << std::endl;
    }
};

class IsuffException
{
private:
    int balance;
    int reqval;
public:
    IsuffException(int bal, int req) : balance(bal), reqval(req) {}
    void ShowExceptionReason() const
    {
        std::cout << "잔액에서 "<<reqval - balance<<"가(이) 부족합니다." << std::endl;
    }
};

#endif