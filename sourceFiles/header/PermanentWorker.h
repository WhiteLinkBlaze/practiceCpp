#ifndef __PERMANENTWORKER_H__
#define __PERMANENTWORKER_H__
#include "Employee.h"
class PermanentWorker : public Employee
{
private:
    int salary;
public:
    PermanentWorker(const char* name, int money)
    :Employee(name), salary(money)
    {}
    int GetPay() const
    {
        return salary;
    }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout<<"salary: "<<salary<<endl;
    }
};
#endif