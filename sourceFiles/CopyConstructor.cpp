#include "header/CopyConstructor.h"
#include <iostream>

using std::cout;
using std::endl;
CopyConstructor::CopyConstructor(int n) : num(n)
{
	cout << "New Object: " << this << endl;
}
CopyConstructor::CopyConstructor(const CopyConstructor& copy) : num(copy.num)
{
	cout << "New Copy obj: " << this << endl;
}
CopyConstructor::~CopyConstructor()
{
	cout << "Destroy obj: " << this << endl;
}

CopyConstructor FunctionObj(CopyConstructor ob)
{
	cout << "Param ADR: " << &ob << endl;
	return ob;
}

void CopyConstructorTestFunction()
{
	CopyConstructor obj(7);
	FunctionObj(obj);

	cout << endl;
	CopyConstructor tempRef = FunctionObj(obj);
	cout << "Return Obj " << &tempRef << endl;
}