#include "AccountArray.h"
#include "BankingCommonDec.h"


BoundCheckPointPtrArray::BoundCheckPointPtrArray(const BoundCheckPointPtrArray& arr)
{}
BoundCheckPointPtrArray& BoundCheckPointPtrArray::operator=(const BoundCheckPointPtrArray& arr)
{}

BoundCheckPointPtrArray::BoundCheckPointPtrArray(int len)
:arrlen(len)
{
    arr = new Account*[arrlen];
}

ACCOUNT_PTR& BoundCheckPointPtrArray::operator[](int idx)
{
    if(idx < 0 || idx >= arrlen)
    {
        cout<<"Array index out of bound exception"<<endl;
        exit(1);
    }
    return arr[idx];
}
ACCOUNT_PTR BoundCheckPointPtrArray::operator[](int idx) const
{
    if(idx < 0 || idx >= arrlen)
    {
        cout<<"Array index out of bound exception"<<endl;
        exit(1);
    }
    return arr[idx];
}

int BoundCheckPointPtrArray::GetArrLen() const
{
    return this->arrlen;
}

BoundCheckPointPtrArray::~BoundCheckPointPtrArray()
{
    delete[] arr;
}


