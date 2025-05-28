#include "Ring.h"
#include <iostream>
using std::cout;
using std::endl;

bool Ring::Init(Circle& inner, Circle& outer)
{
	CPoint innerCirclePoint = inner.GetPos();
	CPoint outerCirclePoint = outer.GetPos();
	int innerCircleRadius = inner.GetRadius();
	int outerCircleRadius = outer.GetRadius();


	if (innerCirclePoint.GetX() + innerCircleRadius > outerCirclePoint.GetX() + outerCircleRadius
		|| innerCirclePoint.GetY() + innerCircleRadius > outerCirclePoint.GetY() + outerCircleRadius
		|| innerCirclePoint.GetX() - innerCircleRadius < outerCirclePoint.GetX() - outerCircleRadius
		|| innerCirclePoint.GetY() - innerCircleRadius < outerCirclePoint.GetY() - outerCircleRadius)
	{
		cout << "[RING] 잘못된 위치입니다." << endl;
		return false;
	}


	innerCircle = inner;
	outerCircle = outer;

	return true;
}

bool Ring::Init(int oneX, int oneY, int oneR, int twoX, int twoY, int twoR)
{
	Circle one, two;
	CPoint cpOne, cpTwo;
	if (!cpOne.InitMembers(oneX, oneY)
		|| !cpTwo.InitMembers(twoX, twoY)
		|| !one.InitMembers(cpOne, oneR)
		|| two.InitMembers(cpTwo, twoR)) return false;
	Init(one, two);
	return true;
}

void Ring::ShowRingInfo() const
{
	cout << "inner Circle info... " << endl;
	innerCircle.ShowCircleInfo();
	cout << "outer Circle info... " << endl;
	outerCircle.ShowCircleInfo();

}