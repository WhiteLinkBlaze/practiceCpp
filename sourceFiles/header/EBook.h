#ifndef __EBOOK_H__
#define __EBOOK_H__
#include "Book.h"
class EBook : public Book
{
private:
    char * DRMKey;
public:
    EBook(const char * t, const char * i, int p, const char * key);
    EBook(const EBook& eb);
    ~EBook();
    void ShowEBookInfo() const;
    EBook& operator=(const EBook& eb);
};
void testEBook();
#endif