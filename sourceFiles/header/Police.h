#ifndef __POLICE_H__
#define __POLICE_H__
#include "Gun.h"
using std::cout;
using std::endl;

class Police
{
private:
    int handcuffs;
    Gun * pistol;
public:
    Police(int hc, int b) : handcuffs(hc)
    {
        pistol = new Gun(b);
    }
    Police(const Police& p) : handcuffs(p.handcuffs)
    {
        pistol = new Gun(p.pistol->GetBullets());
    }
    ~Police()
    {
        if(pistol != nullptr)
            delete pistol;
    }
    void ShowPoliceInfo() const
    {
        cout << "Handcuffs: " << handcuffs << endl;
        cout << "Bullets: " << pistol->GetBullets() << endl;
    }
    void PutHandcuff()
    {
        if(handcuffs > 0)
            handcuffs--;
    }
    void Shoot()
    {
        pistol->Shoot();
    }
    int GetHandcuffs() const
    {
        return handcuffs;
    }
    int GetBullets() const
    {
        return pistol->GetBullets();
    }
    Police& operator=(const Police& p)
    {
        if(this == &p)
            return *this;
        if(pistol != nullptr)
            delete pistol;
        if(p.pistol != nullptr)
            pistol = new Gun(*p.pistol);
        else
            pistol = nullptr;
        handcuffs = p.handcuffs;
        return *this;
    }
};
#endif