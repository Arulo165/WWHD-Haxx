#pragma once
#include <base/base_process_class.h>

class Leafdraw_Class : public Base_Process_Class
{
private:
    u32     mpSubMtd;
    u8      _C0[2];
    u8      mDwPi[2];
};
static_assert((sizeof(Leafdraw_Class) == 0xC4), "Leafdraw_Class Size Missmatch");