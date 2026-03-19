#pragma once
#include <actor/fopAc_ac_c.h>

class daPy_py_c : public fopAc_ac_c
{
public:
    // Adress: 0x023D47E8
    daPy_py_c();
    // Adress: 0x023D483C
    ~daPy_py_c();
    // Adress: 0x023D4688
    void changePlayer(fopAc_ac_c*  pPlayer);
    // Adress: 0x023D46F
    void setDoButtonQuake();
    // Adress: 0x023D4768
    void stopDoBttonQuake(u32 pStopFlag);
private:
    u8                      _3AC[0x6];
    short                   mQuakeTimer;
    u32                     _3B4[2];
    u32                     mNoResetFlg1;
    u32                     _3C0;
    f32                     mNormalSpeedMax;
    u8                      _3C8[8];
    sead::Vector3<short>    mBodyAngle;
    u8                      _3D6[2];
    sead::Vector3f          mHeadTopPos;
    sead::Vector3f          mSwordTopPos;
    sead::Vector3f          _3F0;
    sead::Vector3f          mRightHandPos;
    sead::Vector3f          mRopePos; // I dont know what this does here
    f32                     _414;          
    u8                      _418[4];       
    f32                     _41c;       
};
static_assert((sizeof(daPy_py_c) == 0x420), "daPy_py_c Size Missmatch");

