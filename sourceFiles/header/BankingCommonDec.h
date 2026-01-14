#ifndef __BANKING_COMMON_DEC_H__
#define __BANKING_COMMON_DEC_H__
#include <iostream>
#include <iosfwd>
#include <cstring>

//using std::cout, std::endl, std::cin;
using namespace std;

namespace BANK_SYSTEM
{
    enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
    enum { NORMAL = 1, CREDIT };
    enum { LEVEL_A = 7, LEVEL_B = 4, LEVEL_C = 2 };
}
#endif