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
	Person(const char* myname, int myage);
	void ShowPersonInfo()const;
	void SetPersonInfo(const char* myname, int myage);
	~Person();
};

void personClassTestFunction();
void objArrayTestFunction();
void objPtrArrayTestFunction();
#endif