#ifndef __SQUARE_H__
#define __SQUARE_H__
#include "Rectangle.h"
class Square : public Rectangle
{
public:
    Square(int s) : Rectangle(0,s,s,0) {}
};
#endif