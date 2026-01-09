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
	Rectangle();
	Rectangle(const int& x1, const int& y1, const int& x2, const int& y2);
	bool InitMembers(const CPoint& u1, const CPoint& lr);
	void ShowRecInfo() const;
	void ShowAreaInfo() const;
};
void CPointRectangleTestFunction();
#endif // !1