#include "header\\CPoint.h"
#include <iostream>
using std::cout;
using std::endl;


bool CPoint::InitMembers(int xpos, int ypos)
{
    if (!validation(xpos) || !validation(ypos))
    {
        cout << "[CPOINT] 잘못된 수치입니다." << endl;
        return false;
    }

    x = xpos;
    y = ypos;

    return true;
}

void CPoint::ShowPosition() const
{
    cout << "[" << x << ", "
                << y << "]" << endl;
}

int CPoint::GetX() const
{
    return x;
}

int CPoint::GetY() const
{
    return y;
}

bool CPoint::SetX(int xpos)
{
    if (!validation(xpos))
    {
        cout << "[CPOINT] 잘못된 수치입니다." << endl;
        return false;
    }
    x = xpos;
    return true;
}

bool CPoint::SetY(int ypos)
{
    if (!validation(ypos))
    {
        cout << "[CPOINT] 잘못된 수치입니다." << endl;
        return false;
    }
    y = ypos;
    return true;
}
