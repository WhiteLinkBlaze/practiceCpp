#pragma once
#ifndef __NAMECARD__
#define __NAMECARD__ 0
#include <iostream>
namespace COMP_POS
{
	enum {CLERK,SENIOR,ASSIST,MANAGER};
	void ShowPositionInfo(int pos)
	{
		switch (pos)
		{
		case ASSIST:
			cout << "대리" << endl;
			break;
		case CLERK:
			cout << "사원" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		}
	}
}
class NameCard
{
private:
	char* name;
	char* companyName;
	char* telephone;
	int rank;
public:
	NameCard(const char * myName, const char * myCompanyName, const char * myPhoneNumber, const int myRank);
	void ShowNameCardInfo();
	~NameCard();

};

void nameCardTestFunction();
#endif