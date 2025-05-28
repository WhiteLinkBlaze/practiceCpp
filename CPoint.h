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
	int GetX() const;	// ¿¢¼¼½º ÇÔ¼ö
	int GetY() const;	// ¿¢¼¼½º ÇÔ¼ö
	bool SetX(int xpos);// ¿¢¼¼½º ÇÔ¼ö
	bool SetY(int ypos);// ¿¢¼¼½º ÇÔ¼ö
private:
	bool validation(int pos)
	{
		if (pos >= MIN && pos <= MAX)return true;
		return false;
	}
};
#endif

