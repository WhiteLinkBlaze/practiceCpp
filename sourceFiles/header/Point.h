#pragma once
#ifndef __POINT_H__
#define __POINT_H__
struct Point {
	enum {
		MAX_X = 100,
		MAX_Y = 100,
		MIN_X = 0,
		MIN_Y = 0
	};
	int xpos;
	int ypos;

	void MovePos(int x, int y);
	void AddPoint(const Point& pos);
	void showPosition();
};

void PointTestFunction();
#endif
