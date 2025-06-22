#include "header/Rectangle.h"

#include <iostream>
using std::cout;
using std::endl;

Rectangle::Rectangle()
{

}

Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2)
	:upLeft(x1,y1), lowRight(x2, y2)//멤버 이니셜라이저
{
}

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
void CPointRectangleTestFunction()
{
	CPoint pos1;
	if (!pos1.InitMembers(-2, 4)) {
		cout << "잘못된 수치입니다." << endl;
	}
	if (!pos1.InitMembers(2, 4)) {
		cout << "잘못된 수치입니다." << endl;
	}
	CPoint pos2;
	if (!pos2.InitMembers(5, 9)) {
		cout << "잘못된 수치입니다." << endl;
	}

	Rectangle rec;
	if (!rec.InitMembers(pos2, pos1))
		cout << "잘못된 수치입니다." << endl;
	if (!rec.InitMembers(pos1, pos2))
		cout << "잘못된 수치입니다." << endl;
	rec.ShowRecInfo();
}