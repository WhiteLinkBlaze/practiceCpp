#pragma once


//적절한 생성자와 소멸자 정의
class MyFriendInfo
{
private:
	char* name;
	int age;
public:
	MyFriendInfo(const char* myname, int myage);

	void ShowMyFriendInfo();
	~MyFriendInfo();
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
	char* addr;
	char* phone;

public:
	MyFriendDetailInfo(const char* myname, int myage, const char* myaddr, const char* myphone);
	void ShowMyFriendDetatilInfo();
	~MyFriendDetailInfo();
};

void myFriendTestFunction();