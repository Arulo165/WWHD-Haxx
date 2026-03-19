#pragma once
#include <types.h>

struct ResourceSubStructEntryBase
{
    ResourceSubStructEntryBase*     mpNext;
    ResourceSubStructEntryBase*     _4;
    u8                              _8[0x4];
    u32                             mHash;
    void*                           mpVtbl;
    u8                              _14[0xC];
};
static_assert((sizeof(ResourceSubStructEntryBase) == 0x20),"ResourceSubStructEntryBase Size Missmatch");

struct ResourceListBase
{
    u32                             _0;
    ResourceSubStructEntryBase*     mpNextFree;
    ResourceSubStructEntryBase*     mpLast;
    u32                             _c;
    u32                             mArrSize;
};
static_assert((sizeof(ResourceListBase) == 0x14),"ResourceListBase Size Missmatch");