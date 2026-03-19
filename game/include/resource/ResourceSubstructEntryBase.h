#pragma once
#include <types.h>

struct ResourceSubstructEntryBase
{
    ResourceSubstructEntryBase*     mpNext;
    ResourceSubstructEntryBase*     _4;
    u8                              _8[0x4];
    u32                             mHash;
    void*                           mpVtbl;
    u8                              _14[0xc];
};
static_assert((sizeof(ResourceSubstructEntryBase) == 0x20), "ResourceSubstructEntryBase Size Missmatch");