#include "header\\Rectangle.h"

#include <iostream>
using std::cout;
using std::endl;

bool Rectangle::InitMembers(const CPoint& ul, const CPoint& lr)
{
	if (ul.GetX() > lr.GetX() || lr.GetY() < ul.GetY()) {
		cout << "�߸��� ��ġ���� ����" << endl;
		return false;
	}
	upLeft = ul;
	lowRight = lr;
	return true;
}

void Rectangle::ShowRecInfo() const {
	cout << "�� ���: "<<"[" << upLeft.GetX() << ", "
		<< upLeft.GetY() <<"]" << endl;
	cout << "�� �ϴ�: " << "[" << lowRight.GetX() << ", "
		<< lowRight.GetY() << "]" << endl;
}