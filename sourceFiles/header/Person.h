#pragma once
#ifndef __PERSON__
#define __PERSON__ 0

class Person
{
private:
	char* name;
	int age;
public:
	Person();
	Person(const Person& p1);				//복사 생성자 정의
	Person(const char* myname, int myage);
	void ShowPersonInfo()const;
	void SetPersonInfo(const char* myname, int myage);
	~Person();
};

void personClassTestFunction();
void objArrayTestFunction();
void objPtrArrayTestFunction();
void shallowCopyTestFunction();
#endif