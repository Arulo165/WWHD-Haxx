#pragma once
#include "basis/seadTypes.h"
#include <thread/seadCriticalSection.h>

class EnergySaver
{
public:
    // Adress: 0x02032A34
    EnergySaver();

    ~EnergySaver();
    // Adress: 0x02032C6C
    EnergySaver* getInstance();
    // Adress: 0x02032BD0
    bool isEnbled();
    // Adress: 0x02032B48
    void static_init();
    // Adress: 0x02032AD8
    void toggleDim(bool pEnabled);

private:    
    bool                    mEnabled;
    u8                      _1[3];
    sead::CriticalSection   mCs;
    u8                      padding[0x3C-sizeof(sead::CriticalSection)]; // in the Ghidra database the size of sead::CriticalSection is 0x3C
};
static_assert((sizeof(EnergySaver) == 0x40));