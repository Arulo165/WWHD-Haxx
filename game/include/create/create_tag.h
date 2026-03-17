#pragma once 
#include <create/create_tag_class.h>
#include <actor/fopAc_ac_c.h>

class Create_Tag : public Create_Tag_Class
{

};
static_assert((sizeof(Create_Tag) == 0x14), "Create_Tag Size Missmatch");

