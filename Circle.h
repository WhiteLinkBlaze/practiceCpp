#pragma once
#ifndef __CIRCLE__
#define __CIRCLE__ 0
#include "CPoint.h"
class Circle
{
private:
	CPoint pos;
	int radius;
public:
	bool InitMembers(const CPoint & position, int r);
	void ShowCircleInfo() const;

	CPoint GetPos() const;
	int GetRadius() const;

	bool SetPos(const CPoint & position);
	bool setRadius(int r);
};

#endif