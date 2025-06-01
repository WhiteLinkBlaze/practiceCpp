#pragma once
#ifndef __COPYCONSTRUCTOR__
#define __COPYCONSTRUCTOR__


class CopyConstructor
{
private:
	int num;
public:
	CopyConstructor(int n);
	CopyConstructor(const CopyConstructor& copy);
	~CopyConstructor();
};

CopyConstructor FunctionObj(CopyConstructor ob);

void CopyConstructorTestFunction();
#endif