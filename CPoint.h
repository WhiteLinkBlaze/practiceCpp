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
	bool InitMembers(int xpos, int ypos);
	void ShowPosition() const;
	int GetX() const;	// ������ �Լ�
	int GetY() const;	// ������ �Լ�
	bool SetX(int xpos);// ������ �Լ�
	bool SetY(int ypos);// ������ �Լ�
private:
	bool validation(int pos)
	{
		if (pos >= MIN && pos <= MAX)return true;
		return false;
	}
};
#endif

