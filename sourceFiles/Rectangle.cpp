#include "header\\Rectangle.h"

#include <iostream>
using std::cout;
using std::endl;

bool Rectangle::InitMembers(const CPoint& ul, const CPoint& lr)
{
	if (ul.GetX() > lr.GetX() || lr.GetY() < ul.GetY()) {
		cout << "[RECTANGLE] 잘못된 수치입니다." << endl;
		return false;
	}
	upLeft = ul;
	lowRight = lr;
	return true;
}

void Rectangle::ShowRecInfo() const {
	cout << "좌상단 : "<<"[" << upLeft.GetX() << ", "
		<< upLeft.GetY() <<"]" << endl;
	cout << "우하단: " << "[" << lowRight.GetX() << ", "
		<< lowRight.GetY() << "]" << endl;
}