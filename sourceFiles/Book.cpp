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
Book::Book(const Book& b)
    : price(b.price)
{
    title = new char[strlen(b.title) + 1];
    strcpy(title, b.title);
    isbn = new char[strlen(b.isbn) + 1];
    strcpy(isbn, b.isbn);
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
Book& Book::operator=(const Book& b)
{
    if(this == &b)
        return *this; 
    
    delete[] title;
    delete[] isbn;

    title = new char[strlen(b.title) + 1];
    strcpy(title, b.title);
    isbn = new char[strlen(b.isbn) + 1];
    strcpy(isbn, b.isbn);
    price = b.price;
    return *this;
}