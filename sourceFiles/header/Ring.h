#pragma once

#ifndef __RING__
#define __RING__ 0
#include "Circle.h"
class Ring
{
private:
	Circle innerCircle;
	Circle outerCircle;
public:
	bool Init(Circle & inner, Circle & outer);
	bool Init(int oneX, int oneY, int oneR, int twoX, int twoY, int twoR);
	void ShowRingInfo()const;
};
void RingTestFunction();
#endif
