#ifndef __GUN_H__
#define __GUN_H__
#include <iostream>
using std::cout;
using std::endl;
class Gun
{
private:
    int bullets;
public:
    Gun(int b) : bullets(b) {}
    void Shoot() { if(bullets > 0){ cout<<"BANG!"<<endl;bullets--; }}
    int GetBullets() const { return bullets; }
};
#endif