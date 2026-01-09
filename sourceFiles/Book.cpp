#include "header/Book.h"
#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

Book::Book(const char * t, const char * i, int p)
    : price(p)
{
    title = new char[strlen(t) + 1];
    strcpy(title, t);
    isbn = new char[strlen(i) + 1];
    strcpy(isbn, i);
}
Book::~Book()
{
    delete[] title;
    delete[] isbn;
}
void Book::ShowBookInfo() const
{
    cout << "Title: " << title << endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Price: " << price << endl;
}