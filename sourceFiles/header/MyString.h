#ifndef __MY_STRING_H_
#define __MY_STRING_H_
#include "BankingCommonDec.h"
namespace MY_STRING
{
    const int MAX_STR_LEN = 100;

class String
{
private:
	int len;
	char * str;
public:
	String();
	String(const char * s);
	String(const String& s);
	~String();
	String& operator= (const String& s);
	String& operator+= (const String& s);
	bool operator== (const String& s);
	String operator+ (const String& s);


	friend ostream& operator<<(ostream& os, const String& s);
	friend istream& operator>>(istream& is, String& s);
};
}
#endif