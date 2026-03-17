#pragma once
#include <unk/leafdraw_class.h>
#include <create/create_tag_class.h>
#include <heap/seadHeap.h>
#include <system/gameEnums.h>
#include <math/seadVector.h>
#include <math/seadMatrix.h>
#include <event/dEvt_info_c.h>
#include <profile/profile_method_class.h>

struct ActorPlace
{
    sead::Vector3f              mPos;
    sead::Vector3<short>        mRot;
    u8                          mRoomNo;    
    u8                          _13;
};
static_assert((sizeof(ActorPlace) == 0x14), "ActorPlace Size Missmatch");

class fopAc_ac_c : public Leafdraw_Class
{
public:
    // Adress: 0x025D4ED0;
    fopAc_ac_c();
private:
    u32                                         mAcType; // ToDo: Figure out Types and create Enum
    Create_Tag_Class                            mAcTg;
    Create_Tag_Class                            mDwTg;
    profile_method_class*                       mSubMtd;
    sead::Heap*                                 mpHeap;
    dEvt_info_c                                 mEvtInfo;
    u8                                          mTevStr[0x1C8];
    short                                       mSetID;
    u8                                          mActorType;
    u8                                          mCullType;
    u8                                          mDemoObjId;
    u8                                          mSubtype;
    GameEnums::GBANames                         mGbaName;
    u8                                          _2DF;
    GameEnums::fopAcM_Status                    mStatus;
    GameEnums::fopAc_ac_c__Condition            mConditions;
    u32                                         mParentID;
    ActorPlace                                  mOrig;
    ActorPlace                                  mNext;
    ActorPlace                                  mCurrent;
    sead::Vector3<short>                        mCollisionRot;
    sead::Vector3f                              mScale;
    sead::Vector3f                              mVelocity;
    sead::Matrix34f*                            mpCullMtx;
    sead::Vector3f                              mCullSizeBoxMin;
    sead::Vector3f                              mCullSizeBoxMax;
    f32                                         mCullFarDistanceRatio;
    void*                                       _368[2];
    f32                                         mVelocityFwd;
    f32                                         mAccelerationY;
    f32                                         mVelocityYMin;
    sead::Vector3f                              mEyePos;
    u8                                          mAttentionDistances[8];
    sead::Vector3f                              mAttenionPos;
    GameEnums::fopAc_ac_c__AttentionFlags       mAttentionFlags;
    u8                                          mMaxHp;
    s8                                          mCurrHp;
    u8                                          _3A2[2];
    u32                                         mItemTableIdx;
    u8                                          mItemStealNum;
    u8                                          mItemStealLeft;
    u8                                          _3AA[2];
};
static_assert((sizeof(fopAc_ac_c) == 0x3AC), "fopAc_ac_c Size Missmatch");
