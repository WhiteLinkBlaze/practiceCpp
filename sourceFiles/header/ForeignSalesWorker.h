#ifndef __FOREIGNSALESWORKER_H__
#define __FOREIGNSALESWORKER_H__
#include "SalesWorker.h"
namespace RISK_LEVEL
{
    enum{
        RISK_A=3,
        RISK_B=2,
        RISK_C=1
    };
};
class ForeignSalesWorker : public SalesWorker
{
private:
    const double riskPayRatio; // 위험 수당 비율
public:
    ForeignSalesWorker(const char * name, int money, double ratio, int riskRatio)
    : SalesWorker(name, money, ratio), riskPayRatio((double)riskRatio * 0.1)
    {}
    int GetPay() const
    {
        return SalesWorker::GetPay() + (int)(SalesWorker::GetPay()*riskPayRatio);
    }
    void ShowSalaryInfo() const
    {
        ShowYourName;
        cout<<"salary: "<<SalesWorker::GetPay()<<endl;
        cout<<"risk pay: "<<(int)(SalesWorker::GetPay()*riskPayRatio)<<endl;
        cout<<"sum: "<<GetPay()<<endl;
    }
};
#endif