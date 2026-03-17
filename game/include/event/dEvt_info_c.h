#pragma once
#include "basis/seadTypes.h"
#include <os/types.h>
#include <system/gameEnums.h>

struct dEvt_info_c__vtbl
{
    void*   _0;
    void*   _4;
    void*   _8;
    void*   _12;
};
static_assert((sizeof(dEvt_info_c__vtbl) == 0x10), "dEvt_info_c__vtbl Size Missmatch");

class dEvt_info_c
{
public: 
    // Adress: 0x0253E948
    dEvt_info_c();
private:    
    GameEnums::dEvt__ActorCommand       mCommand;
    GameEnums::dEvt__ActorCondition     mCondition;
    short                               mEventId;
    s8                                  mMapToolId;
    u8                                  _7;
    void*                               mpEventCB;
    void*                               mpCheckCB;
    void*                               mpPhotoCB;
    dEvt_info_c__vtbl*                  mVtbl;
};
static_assert((sizeof(dEvt_info_c) == 0x18), "dEvt_info_c Size Missmatch");