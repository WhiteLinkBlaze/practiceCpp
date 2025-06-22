#include"header/NameCard.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

NameCard::NameCard(const NameCard& copy)
	:rank(copy.rank)
{
	size_t nameLen = strlen(copy.name) + 1;
	name = new char[nameLen];
	strcpy(name, copy.name);

	size_t companyLen = strlen(copy.companyName) + 1;
	companyName = new char[companyLen];
	strcpy(companyName, copy.companyName);

	size_t phoneNumberLen = strlen(copy.telephone) + 1;
	telephone = new char[phoneNumberLen];
	strcpy(telephone, copy.telephone);
}

NameCard::NameCard(const char* myName, const char* myCompanyName, const char* myPhoneNumber, const int myRank)
{
	size_t nameLen = strlen(myName) + 1;
	name = new char[nameLen];
	strcpy(name, myName);

	size_t companyLen = strlen(myCompanyName) + 1;
	companyName = new char[companyLen];
	strcpy(companyName, myCompanyName);

	size_t phoneNumberLen = strlen(myPhoneNumber) + 1;
	telephone = new char[phoneNumberLen];
	strcpy(telephone, myPhoneNumber);

	rank = myRank;
}

void NameCard::ShowNameCardInfo()
{
	const char* cTempPtr = NULL;
	
	cout << "이름: " << name << endl;
	cout << "회사: " << companyName << endl;
	cout << "전화번호: " << telephone << endl;
	cout << "직급: ";
	COMP_POS::ShowPositionInfo(rank);
}

NameCard::~NameCard()
{
	cout << "[NAMECARD] 삭제합니다." << endl;
	ShowNameCardInfo();
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

void CopyTestFunction()
{
	NameCard manClerk("LEE", "ABC", "010-0000-0000", COMP_POS::CLERK);
	NameCard copy1 = manClerk;
	NameCard manSenior("HONG", "ORANGE", "010-1111-1111", COMP_POS::SENIOR);
	NameCard copy2 = manSenior;
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();
}

void COMP_POS::ShowPositionInfo(int pos)
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