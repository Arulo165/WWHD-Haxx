#pragma once
#include <menu/MenuStateHolder.h>

class MenuStateMgr 
{
public:
    virtual ~MenuStateMgr();

private:
    MenuStateHolder mStateHolder;
};
static_assert((sizeof(MenuStateMgr) == 0x28), "MenuStateChanger ize Missmatch");