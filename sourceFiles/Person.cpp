#include "header\\Person.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

Person::Person()
{
	name = NULL;
	age = 0;
}

Person::Person(const char* myname, int myage)
{
	int len = strlen(myname) + 1;
	name = new char[len];
	strcpy_s(name, len, myname);
	age = myage;
}

void Person::ShowPersonInfo() const
{
	cout << "이름: " << name << endl;
	cout << "나이: " << age << endl;
}

void Person::SetPersonInfo(const char* myname, int myage)
{
	if (name != NULL)
	{
		delete[] name;
	}
	int len = strlen(myname) + 1;
	name = new char[len];
	strcpy_s(name, len, myname);
	age = myage;
}

Person::~Person()
{
	delete []name;
	cout << "called destructor" << endl;
}

void personClassTestFunction()
{
	Person man1("Lee dong woo", 29);
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
}

void objArrayTestFunction()
{
	Person parr[3];
	char nameStr[100];
	char* strPtr;
	int age;
	
	for (int i = 0; i < 3; i++)
	{
		cout << "이름: ";
		cin >> nameStr;
		cout << "나이: ";
		cin >> age;
		parr[i].SetPersonInfo(nameStr, age);
	}
	parr[0].ShowPersonInfo();
	parr[1].ShowPersonInfo();
	parr[2].ShowPersonInfo();
}

void objPtrArrayTestFunction()
{
	Person *parr[3];
	char nameStr[100];
	char* strPtr;
	int age;

	for (int i = 0; i < 3; i++)
	{
		
		cout << "이름: ";
		cin >> nameStr;
		cout << "나이: ";
		cin >> age;
		parr[i] = new Person(nameStr, age);
	}
	parr[0]->ShowPersonInfo();
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();
	delete parr[0];
	delete parr[1];
	delete parr[2];
}
