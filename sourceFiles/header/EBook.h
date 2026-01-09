#ifndef __EBOOK_H__
#define __EBOOK_H__
#include "Book.h"
class EBook : public Book
{
private:
    char * DRMKey;
public:
    EBook(const char * t, const char * i, int p, const char * key);
    ~EBook();
    void ShowEBookInfo() const;
};
#endif