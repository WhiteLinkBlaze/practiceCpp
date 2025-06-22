#include "header/MyFriend.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;


MyFriendInfo::MyFriendInfo(const char* myname, int myage)
	:	age(myage)
{
	int len = strlen(myname) + 1;
	name = (char*)malloc(len * sizeof(char));
	if (name == NULL)return;
	memset(name, 0, len * sizeof(char));
	strcpy(name, myname);
}

void MyFriendInfo::ShowMyFriendInfo()
{
	cout << "이름: " << name << endl;
	cout << "나이: " << age << endl;

}

MyFriendInfo::~MyFriendInfo()
{
	free(name);
}

MyFriendDetailInfo::MyFriendDetailInfo(const char* myname, int myage,const char* myaddr,const char* myphone)
	:MyFriendInfo(myname, myage)

{
	int addrLen = strlen(myaddr) + 1;
	int phoneLen = strlen(myphone) + 1;
	addr = (char*)malloc(addrLen * sizeof(char));
	phone = (char*)malloc(phoneLen * sizeof(char));
	if (addr == NULL || phone == NULL) return;
	memset(addr, 0, addrLen * sizeof(char));
	strcpy(addr, myaddr);
	memset(phone, 0, phoneLen * sizeof(char));
	strcpy(phone, myphone);
}

void MyFriendDetailInfo::ShowMyFriendDetatilInfo()
{
	ShowMyFriendInfo();
	cout << "주소: " << addr << endl;
	cout << "전화: " << phone << endl;
}

MyFriendDetailInfo::~MyFriendDetailInfo()
{
	free(addr);
	free(phone);
}

void myFriendTestFunction()
{

	MyFriendDetailInfo mydi("Kim", 20,"Seoul","010-0000-0000");
	mydi.ShowMyFriendDetatilInfo();
}
