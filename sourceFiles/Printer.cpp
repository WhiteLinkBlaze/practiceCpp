#include "header\\Printer.h"
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;
void Printer::SetString(const char* ccstr)
{
	if (PRINT_CONST::MAX_LEN <= strlen(ccstr)) {
		cout << ccstr << "is too long string" << endl;
		return;
	}
	strcpy_s(str, ccstr);
}