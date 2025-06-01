#pragma once
#ifndef __NAMECARD__
#define __NAMECARD__

#include <iostream>
using std::cout;
using std::endl;

namespace COMP_POS
{
	enum {CLERK,SENIOR,ASSIST,MANAGER};
	void ShowPositionInfo(int pos);
}
class NameCard
{
private:
	char* name;
	char* companyName;
	char* telephone;
	int rank;
public:
	NameCard(const NameCard& copy);
	NameCard(const char * myName, const char * myCompanyName, const char * myPhoneNumber, const int myRank);
	void ShowNameCardInfo();
	~NameCard();

};

void nameCardTestFunction();
void CopyTestFunction();
#endif