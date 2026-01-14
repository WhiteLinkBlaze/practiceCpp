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
EBook::EBook(const EBook& eb)
    :Book(eb)
{
    DRMKey = new char[strlen(eb.DRMKey) + 1];
    strcpy(DRMKey, eb.DRMKey);
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

EBook& EBook::operator=(const EBook& eb)
{
    if(this == &eb)
        return *this; 
    
    Book::operator=(eb);

    delete[] DRMKey;

    DRMKey = new char[strlen(eb.DRMKey) + 1];
    strcpy(DRMKey, eb.DRMKey);
    return *this;
}
void testEBook()
{
    EBook ebook1("Effective C++", "987-654-321", 25000, "DRM-KEY-001");
    cout << "EBook 1 Info:" << endl;
    ebook1.ShowEBookInfo();
    cout << endl;

    EBook ebook2 = ebook1;// Copy constructor
    cout << "EBook 2 (Copy of EBook 1) Info:" << endl;
    ebook2.ShowEBookInfo();
    cout << endl;

    EBook ebook3("Temp EBook", "111-111-111", 0, "TEMP-KEY");
    ebook3 = ebook1;// Assignment operator
    cout << "EBook 3 (Assigned from EBook 1) Info:" << endl;
    ebook3.ShowEBookInfo();
    cout << endl;
}