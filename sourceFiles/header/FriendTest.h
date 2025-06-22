#ifndef __FRIENDTEST__
#define __FRIENDTEST__
#include <iostream>
using std::cout;
using std::endl;
class Point;

class PointF
{
private:
	int opcnt;
public:
	PointF() : opcnt(0) {}

	Point PointAdd(const Point&, const Point&);
	Point PointSub(const Point&, const Point&);

	inline ~PointF()
	{
		cout << "Operation times: " << opcnt << endl;
	}


};

class Point
{
private:
	int x;
	int y;
public:
	Point(const int& xpos, const int& ypos) :x(xpos), y(ypos) {}
	friend Point PointF::PointAdd(const Point&, const Point&);
	friend Point PointF::PointSub(const Point&, const Point&);
	friend void ShowPointPos(const Point&);
};

void FriendTestFunction();
#endif
