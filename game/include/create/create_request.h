#pragma once 
#include <create/create_tag.h>
#include <os/types.h>
#include <create/create_tag.h>
#include <base/base_process_class.h>

class Create_Request : public Create_Tag
{
private:
    u8                      mbIsCreating;
    u8                      _15[3];
    u8                      mMtdTg[0x1C];
    u32                     mpCtRqMtd;
    void*                   _38;
    u32                     mBsPcId;
    Base_Process_Class*     mpRes;
    u32                     mpLayer;
};
static_assert((sizeof(Create_Request) == 0x48), "Create Request Size Missmatch");