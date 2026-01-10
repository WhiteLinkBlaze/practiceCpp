#ifndef __SALESWORKER_H__
#define __SALESWORKER_H__
#include "PermanentWorker.h"
class SalesWorker : public PermanentWorker
{
private:
    int salesResult; //월 판매 실적
    double bonusRatio; // 상여금 비율
public:
    SalesWorker(const char * name, int money, double ratio)
    : PermanentWorker(name, money), salesResult(0),bonusRatio(ratio)
    {}
    void AddSalesResult(int value)
    {
        salesResult+=value;
    }
    int GetPay() const
    {
        return PermanentWorker::GetPay()
        + (int)(salesResult*bonusRatio);
    }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout<<"salary: "<<GetPay()<<endl;
    }
};
#endif