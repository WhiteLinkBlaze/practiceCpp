#include "header/Circle.h"
#include <iostream>

using std::cout;
using std::endl;

Circle::Circle()
{
}

Circle::Circle(const int x, const int y, const int rad)
	:pos(x,y),radius(rad)
{
	if (rad < 0) {
		cout << "[CIRCLE] 올바르지 않은 값입니다." << endl;
		radius = 0;
		return;
	}
}

bool Circle::InitMembers(const CPoint& position, int r)
{
	
	if (r < 0) {
		cout << "[CIRCLE] 잘못된 수치입니다."<< endl;
		return false;
	}
	pos = position;
	radius = r;
	return true;
}
void Circle::ShowCircleInfo() const
{
	cout << "radius: " << radius << endl;
	pos.ShowPosition();
}

CPoint Circle::GetPos() const
{
	return pos;
}

int Circle::GetRadius() const
{
	return radius;
}

bool Circle::SetPos(const CPoint & position)
{
	if (position.GetX() < 0 || position.GetY() < 0) return false;
	pos = position;
	return true;
}

bool Circle::setRadius(int r)
{
	if (r <= 0) return false;
	radius = r;
	return true;
}
