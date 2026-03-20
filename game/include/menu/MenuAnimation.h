#pragma once
#include <types.h>

namespace nw { namespace lyt {
    class Layout;
    class GroupAnimator;
}} // nw::lyt


class MenuAnimation
{
public:
    //MenuAnimation(nw::lyt::Layout* lyt, )
private:
    nw::lyt::Layout*            mpLayout;
    f32                         _4;
    u8                          _8[0xc];
    char                        _14[32];
    nw::lyt::GroupAnimator*     mpGroupAnimator;
    void*                       mpVtbl;
};
static_assert((sizeof(MenuAnimation) == 0x3C), "MenuAnimation Size Missmatch");