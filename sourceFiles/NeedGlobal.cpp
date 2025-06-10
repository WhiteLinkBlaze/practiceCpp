#include "header/NeedGlobal.h"
#include <iostream>
using std::cout;
using std::endl;


int GlobalTest::globObjCnt = 0;
int Other::otherObjCnt = 0;


GlobalTest::GlobalTest()
{
	globObjCnt++;
	cout << globObjCnt << "번째 globalTest 객체" << endl;
}

Other::Other()
{
	otherObjCnt++;
	cout << otherObjCnt << "번째 Other 객체" << endl;
}
Other::Other(Other& copy)
{

	otherObjCnt++;
	cout << otherObjCnt << "번째 Other 객체" << endl;
}
void globalTestFunction()
{
	GlobalTest glb1;
	GlobalTest glb2;

	Other oth1;
	Other oth2 = oth1;
	Other();

}
