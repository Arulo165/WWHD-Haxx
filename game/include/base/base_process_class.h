#pragma once
#include <os/types.h>
#include <create/create_request.h>

class Base_Process_Class
{
public:
    // Adress: 0x025DD5F0
    Base_Process_Class();

    // Adress: 0x025DD630
    ~Base_Process_Class();
    
private:
    u32                 mBsType;       
    u32                 mBsPcId;       
    u16                 mProcName;     
    u8                  _pad_a;        
    u8                  mPauseFlag;    
    u8                  mInitState;    
    u8                  mCreateResult; 
    u16                 mBsTypeId;     
    u32                 mProf;         
    Create_Request*     mpCtRq;        
    u8                  mLyTg[0x1C];   
    u8                  mLnTg[0x18];   
    u8                  mDtTg[0x1C];   
    u8                  mPi[0x40];     
    u32                 mpPcMtd;       
    u32                 mpUserData;   
    u32                 mParameters;   
    void*               vtbl;          
    u32                 mSubType;      
};
static_assert((sizeof(Base_Process_Class)  == 0xBC), "Base_Process_Class Missmatch");