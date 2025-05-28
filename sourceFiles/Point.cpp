

#ifndef iost
#define iost 0
#include <iostream>
#endif
#include "header\\Point.h"

void Point::MovePos(int x, int y)
{
	if (xpos + x >= MAX_X) xpos = MAX_X;
	else if (xpos + x <= MIN_X) xpos = MIN_X;
	else xpos += x;

	if (ypos + y >= MAX_Y) ypos = MAX_Y;
	else if (ypos + y <= MIN_Y) ypos = MIN_Y;
	else ypos += y;
}

void Point::AddPoint(const Point &pos)
{
	int x = pos.xpos;
	int y = pos.ypos;
	if (xpos + x >= MAX_X) xpos = MAX_X;
	else if (xpos + x <= MIN_X) xpos = MIN_X;
	else xpos += x;

	if (ypos + y >= MAX_Y) ypos = MAX_Y;
	else if (ypos + y <= MIN_Y) ypos = MIN_Y;
	else ypos += y;
}

void Point::showPosition()
{
	std::cout << "[" << xpos<<", "<<ypos << "]" << std::endl;
}