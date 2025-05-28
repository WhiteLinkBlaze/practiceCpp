#include "header\\Rectangle.h"

#include <iostream>
using std::cout;
using std::endl;

bool Rectangle::InitMembers(const CPoint& ul, const CPoint& lr)
{
	if (ul.GetX() > lr.GetX() || lr.GetY() < ul.GetY()) {
		cout << "잘못된 위치정보 전달" << endl;
		return false;
	}
	upLeft = ul;
	lowRight = lr;
	return true;
}

void Rectangle::ShowRecInfo() const {
	cout << "좌 상단: "<<"[" << upLeft.GetX() << ", "
		<< upLeft.GetY() <<"]" << endl;
	cout << "우 하단: " << "[" << lowRight.GetX() << ", "
		<< lowRight.GetY() << "]" << endl;
}