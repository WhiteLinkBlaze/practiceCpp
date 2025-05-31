#pragma once
#ifndef __NAMECARD__
#define __NAMECARD__ 0
namespace COMP_POS
{
	enum {CLERK,SENIOR,ASSIST,MANAGER};
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