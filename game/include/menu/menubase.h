#pragma once
#include "types.h"
#include <basis/seadTypes.h>
#include <menu/MenuStateMgr.h>


class MenuBaseParent
{
public:
    virtual ~MenuBaseParent();
private:
    u32 _00;
};
static_assert((sizeof(MenuBaseParent) == 0x8));


class MenuBase : public MenuBaseParent
{
private:
    MenuStateMgr        mStateMgr;
    void*               _30;
    u32                 mResourceAccessor;
    u8                  mResourcePtrs[0xC];
    u32                 _44;
    u32                 mNum_ptrs;
    MenuBaseParent**    mChildren_ptrs_maybe;
};
static_assert((sizeof(MenuBase) == 0x50), "MenuBase Size Missmatch");