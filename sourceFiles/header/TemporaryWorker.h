#ifndef __TEMPORARYWORKER_H__
#define __TEMPORARYWORKER_H__
#include "Employee.h"

class TemporaryWorker : public Employee
{
private:
	int workTime;//이 달에 일한 시간의 합계
	int payPerHour;//시간당 급여
public:
	TemporaryWorker(char * name, int pay)
	:Employee(name), workTime(0),payPerHour(pay)
	{ }
	void AddWorkTime(int time)
	{
		workTime+=time;
	}
	int GetPay() const
	{
		return workTime*payPerHour;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout<<"salary: "<<GetPay()<<endl;
	}
};
#endif