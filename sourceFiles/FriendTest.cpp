#include "header/FriendTest.h"
#include <iostream>
using std::cout;
using std::endl;

Point PointF::PointAdd(const Point&pnt1, const Point&pnt2)
{
	opcnt++;
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);
}

Point PointF::PointSub(const Point&pnt1, const Point&pnt2)
{
	opcnt++;
	return Point(pnt1.x-pnt2.x, pnt1.y - pnt2.y);
}

void ShowPointPos(const Point&pos)
{
	cout << "x: " << pos.x << ", ";
	cout << "y: " << pos.y << endl;
}

void FriendTestFunction()
{
	Point pos1(1, 2);
	Point pos2(2, 4);

	PointF pf;

	ShowPointPos(pf.PointAdd(pos1, pos2));
	ShowPointPos(pf.PointSub(pos2, pos1));
}
