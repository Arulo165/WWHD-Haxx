#pragma once
#include "types.h"
#include <heap/seadDisposer.h>
#include <heap/seadHeap.h>


class LayoutMgr 
{
public:
    // Adress: 0x02005B3
    LayoutMgr();
    // Adress: 0x02005C24
    ~LayoutMgr();
    // Adress: 0x02005B90
    LayoutMgr* createInstance(sead::Heap* pHeap);
private:
    sead::IDisposer     mDisposer;
    sead::Heap*         mpHeap;
    void*               mGraphicsRessource;
    u8                  _18[0x4];
    void*               mpShaderSetUpHelper;
    void*               mpVtbl;
};
static_assert((sizeof(LayoutMgr) == 0x24), "LayoutMgr Size Missmatch");