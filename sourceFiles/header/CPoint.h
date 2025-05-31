#pragma once
#ifndef __CPOINT__
#define __CPOINT__
class CPoint
{
private:
	enum {
		MIN = 0,
		MAX = 100,
	};
	int x;
	int y;
public:
	CPoint();
	CPoint(const int& xpos, const int& ypos);
	bool InitMembers(int xpos, int ypos);
	void ShowPosition() const;
	int GetX() const;	// 액세스 함수
	int GetY() const;	// 액세스 함수
	bool SetX(int xpos);// 액세스 함수
	bool SetY(int ypos);// 액세스 함수
private:
	bool validation(int pos);
};
#endif

