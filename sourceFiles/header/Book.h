#ifndef __BOOK_H__
#define __BOOK_H__
class Book
{
private:
    char * title;
    char * isbn;
    int price;
public:
    Book(const char * t, const char * i, int p);
    ~Book();
    void ShowBookInfo() const;
};
#endif