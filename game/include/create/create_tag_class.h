#pragma once
#include <os/types.h>
#include <node/node_class.h>

class Create_Tag_Class : public Node_Class
{
public:
    u32 mpTagData;
    u8  mbAdded;
    u8  _11[3];
};
static_assert((sizeof(Create_Tag_Class) == 0x14), "Create_Tag_Class size Missmatch");