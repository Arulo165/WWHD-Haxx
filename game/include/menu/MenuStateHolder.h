#pragma once
#include <types.h>

class MenuBase;

class MenuStateHolder
{
private:
    void*       mStateChangerVtbl;
    MenuBase*   mpMenu;
    void*       mpState;
    u8          mChanger[0x14];
    void*       vtbl;
};  
static_assert((sizeof(MenuStateHolder) == 0x24), "MenuStateHolder Size Missmatch");