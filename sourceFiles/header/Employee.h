#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__
#include <cstring>
#include <iostream>
using std::cout, std::endl;
class Employee
{
private:
    char name[100];
public:
    Employee(const char * name)
    {
        strcpy(this->name, name);
    }
    void ShowYourName() const
    {
        cout<<"Name: "<<name<<endl;
    }
    virtual int GetPay() const=0;
    virtual void ShowSalaryInfo() const=0;
};

class EmployeeHandler
{
private:
	Employee* empList[50];
	
	int empNum;

public:
	EmployeeHandler() : empNum(0)
	{}
	
	void AddEmployee(Employee * emp)
	{
		empList[empNum++]=emp;
	}
	
	void ShowAllSalaryInfo() const
	{
		for(int i = 0; i<empNum; i++)
			empList[i]->ShowSalaryInfo();
	}
	
	void ShowTotalSalary() const
	{
		int sum=0;
		for(int i = 0; i<empNum; i++)
			sum+=empList[i]->GetPay();
		cout<<sum<<endl;
	}
	
	~EmployeeHandler()
	{
		for(int i=0; i<empNum; i++)
			delete empList[i];
	}
};
#endif