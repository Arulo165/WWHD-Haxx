#pragma once

#include <heap/seadDisposer.h>
#include <heap/seadHeap.h>
#include <thread/seadDelegateThread.h>
#include <resource/ResourceList.h>
#include <resource/ResourceSubstructEntryBase.h>

struct LayoutResMgr_substruct_entry
{
    ResourceSubstructEntryBase      mParent;
    u8                              _20[0x64 - sizeof(ResourceSubstructEntryBase)];
};
static_assert((sizeof(LayoutResMgr_substruct_entry) == 0x64), "LayoutResMgr_substruct_entry Size Missmatch");

struct LayoutResMgr_substruct
{
    ResourceListBase                    mResourceListBase;
    LayoutResMgr_substruct_entry        _14[1024];
};
static_assert((sizeof(LayoutResMgr_substruct) == 0x19014), "LayoutResMgr_substruct Size Missmatch");


class LayoutResMgr
{
private:
    sead::IDisposer             mDisposer;
    u8                          _10[0x4];
    sead::Heap*                 mpLayoutResidentResHeap;
    u8                          _18[0x4];
    sead::DelegateThread*       mpLayoutResMgrDelegate;
    u8                          _20[0x4];
    LayoutResMgr_substruct      mEntry_list_thing;
    void*                       mpVtbl;
};
static_assert((sizeof(LayoutResMgr) == 0x1903C), "LayoutResMgr Size Missmatch");