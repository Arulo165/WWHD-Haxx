#pragma once
#include <os/types.h>

class profile_leaf_method_class
{
public:
    fpcMtd__Method* mpCreate;    
    fpcMtd__Method* mpDelete;    
    fpcMtd__Method* mpExecute;   
    fpcMtd__Method* mpIsDelete;  
    fpcMtd__Method* mpDraw;      
};
static_assert(sizeof(profile_leaf_method_class) == 0x14, "profile_leaf_method_class Size Mismatch");