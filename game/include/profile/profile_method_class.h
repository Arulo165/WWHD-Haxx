#pragma once
#include <profile/profile_leaf_method_class.h>


class profile_method_class : public profile_leaf_method_class
{
private:    
    fpcMtd__Method  mpUnkFunc1;
    fpcMtd__Method  mpUnkFunc2;
    fpcMtd__Method  mpUnkFunc3;
};
static_assert((sizeof(profile_method_class) == 0x20), "profile_method_class Size Missmatch");