#include "Circle.h"
#include <iostream>

using std::cout;
using std::endl;

bool Circle::InitMembers(const CPoint& position, int r)
{
	
	if (r < 0) {
		cout << "[CIRCLE] �߸��� ��ġ�Դϴ�."<< endl;
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
