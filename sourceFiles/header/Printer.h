#pragma once
#include <iostream>
#ifndef __PRINTER__
#define __PRINTER__
namespace PRINT_CONST {
	enum {
		MAX_LEN = 20
	};
}
class Printer
{
private:
	char str[PRINT_CONST::MAX_LEN];
public:
	void SetString(const char *);
	void ShowString();
};

inline void Printer::ShowString()
{
	using std::cout;
	using std::endl;
	cout << str << endl;
}

#endif