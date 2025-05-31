#include"header/NameCard.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

NameCard::NameCard(const char* myName, const char* myCompanyName, const char* myPhoneNumber, const int myRank)
{
	int nameLen = strlen(myName) + 1;
	name = new char[nameLen];
	strcpy_s(name, nameLen, myName);

	int companyLen = strlen(myCompanyName) + 1;
	companyName = new char[companyLen];
	strcpy_s(companyName, companyLen, myCompanyName);

	int phoneNumberLen = strlen(myPhoneNumber) + 1;
	telephone = new char[phoneNumberLen];
	strcpy_s(telephone, phoneNumberLen, myPhoneNumber);

	rank = myRank;
}

void NameCard::ShowNameCardInfo()
{
	const char* cTempPtr = NULL;
	
	cout << "이름: " << name << endl;
	cout << "회사: " << companyName << endl;
	cout << "전화번호: " << telephone << endl;
	cout << "직급: ";COMP_POS::ShowPositionInfo(rank);
}

NameCard::~NameCard()
{
	delete []name;
	delete []companyName;
	delete []telephone;
}

void nameCardTestFunction()
{
	NameCard manClerk("LEE","ABC","010-0000-0000",COMP_POS::CLERK);
	NameCard manSenior("HONG","ORANGE","010-1111-1111",COMP_POS::SENIOR);
	NameCard manAssist("KIM","SOGOOD","010-2222-2222",COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSenior.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
}
