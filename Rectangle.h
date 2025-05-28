#pragma once
#ifndef __RECTANGLE__
#define __RECTANGLE__ 0


#include "CPoint.h"
class Rectangle
{
public:
	CPoint upLeft;
	CPoint lowRight;
public:
	bool InitMembers(const CPoint& u1, const CPoint& lr);
	void ShowRecInfo() const;
};
#endif // !1