
#ifndef __NEEDGLOBAL__
#define __NEEDGLOBAL__



class GlobalTest
{
private:
	static int globObjCnt;
public:
	GlobalTest();
};


class Other
{
private:
	static int otherObjCnt;
public:
	Other();
	Other(Other& copy);
};

void globalTestFunction();

#endif
