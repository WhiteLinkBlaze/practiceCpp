#include "header/EBook.h"
#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

EBook::EBook(const char * t, const char * i, int p, const char * key)
    : Book(t,i,p)
{
    DRMKey = new char[strlen(key) + 1];
    strcpy(DRMKey,key);
}

EBook::~EBook()
{
    delete[] DRMKey;
}

void EBook::ShowEBookInfo() const
{
    ShowBookInfo();
    cout << "DRM Key: " << DRMKey << endl;
}