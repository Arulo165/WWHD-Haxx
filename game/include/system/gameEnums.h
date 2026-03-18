#pragma once
#include "types.h"

namespace GameEnums
{
    enum GBANames : u8
    {
        cGBAName_Bokoblin = 1
    };
    static_assert((sizeof(GBANames) == 0x1),"GBANames Size Missmatch" );

    enum MapTypes
    {
        cMapType_Overworld = 0,
        cMapType_Dungeon,
        cMapType_Unknown,
    };
    static_assert((sizeof(MapTypes) == 0x4), "MapTypes Size Missmatch");

    enum WindWakerNote : u8
    {
        cNote_Center = 0,
        cNote_Up,
        cNote_Right,
        cNote_Down,
        cNote_Left,
        cNote_NONE,
    };
    static_assert((sizeof(WindWakerNote) == 0x1), "WindWakerNote Size Missmatch");

    enum fopAcM_Status
    {
        cStatus_AppearsOnMiniMap = 0x20,
        cStatus_DoNotExecuteIfDidNotDraw = 0x80,
        cStatus_DoNotDrawIfCulled = 0x100,
        cStatus_Frozen = 0x400,
        cStatus_IsBeingCarried = 0x2000,
        cStatus_DoesNotPause = 0x20000,
        cStatus_DoNotDrawNextFrame = 0x1000000,
        cStatus_IsBossOrMiniBoss = 0x4000000,
    };
    static_assert((sizeof(fopAcM_Status) == 0x4), "fopAcM_Status Size Missmatch");

    enum fopAc_ac_c__Condition
    {
        cCondition_DidNotExecuteThisFrame = 0x2,
        cCondition_DidNotDrawThisFrame = 0x4,
        cCondition_Constructed = 0x8
    };
    static_assert((sizeof(fopAc_ac_c__Condition) == 0x4), "fopAc_ac_c__Condition Size Missmatch");

    enum fopAc_ac_c__AttentionFlags
    {
        cAttentionFlag_LockOn_Misc = 0x1,
        cAttentiionFlag_LockOn_Talk = 0x2,
        cAttentionFlag_LockOn_Enemy = 0x4,
        cAttentionFlag_Action_Talk = 0x8,
        cAttentionFlag_Action_Carry = 0x10,
        cAttentionFlag_Action_Door = 0x20,
        cAttentionFlag_Action_Treasure = 0x40,
        cAttentionFlag_Action_Ship = 0x80,
        cAttentionFlag_TalkFlag_NoTalk = 0x2000000,
        cAttentionFlag_EnemyFlag_NoLockOn = 0x4000000,
        cAttentionFlag_TalkFlag_Look = 0x8000000,
        cAttentionFlag_TalkFlag_Check = 0x20000000,
        cAttentionFlag_TalkFlag_Read = 0x40000000,
    };
    static_assert((sizeof(fopAc_ac_c__AttentionFlags) == 0x4), "fopAc_ac_c__AttentionFlags Size Missmatch");

    enum dEvt__ActorCommand : short
    {
        cActorCommand_None = 0,
        cActorCommand_InTalk,
        cActorCommand_InDemo,
        cActorCommand_InDoor,
        cActorCommand_InGetItem,
    };
    static_assert((sizeof(dEvt__ActorCommand) == 0x2), "dEvt__ActorCommand Size Missmatch");

    enum dEvt__ActorCondition : short
    {
        cActorCondition_None = 0x0,
        cActorCondition_CanTalk,
        cActorCondition_CanDoor = 0x4,
        cActorCondition_CanGetItem = 0x8,
        cActorCondition_CanTalkItem = 0x20,
    };
    static_assert((sizeof(dEvt__ActorCondition) == 0x2), "dEvt__ActorCondition Size Missmatch");

    enum dEvt__EventType : short
    {
        cEvtType_Talk = 0x0,
        cEvtType_Door,
        cEvtType_Other,
        cEvtType_Compulsory,
        cEvtType_Potential,
        cEvtType_Item,
        cEvtType_TalkXBtn,
        cEvtType_TalkYBtn,
        cEvtType_TalkZBtn,
        cEvtType_Catch,
        cEvtType_Treasure,
        cEvtType_Photo,
        cEvtType_change,
    };
    static_assert((sizeof(dEvt__EventType) == 0x2),"dEvt__EventType");

    enum dEvt__MoveApprovalFlag : u8
    {
        cMoveFlag_DontMove = 0x0,
        cMoveFlag_NormalMMove,
        cMoveFlag_ForceMove,
    };
    static_assert((sizeof(dEvt__MoveApprovalFlag) == 0x1), "dEvt__MoveApprovalFlag Size Missmatch");

    enum dEvt__OrderFlag : short
    {
        cOrderFlag_None = 0x0,
        cOrderFlag_RequiresPartnerPcId,
        cOrderFlag_IssueStaffAll,
        cOrderFlag_RequiresActiveActor2 = 0x4,
        cOrderFlag_UnkFlagSet = 0x8,
    };
    static_assert((sizeof(dEvt__OrderFlag) == 0x2), "dEvt__OrderFlag Size Mismatch");

    enum dEvt__StaffType
    {
        cStaffType_Normal = 0x0,
        cStaffType_All,
        cStaffType_Camera,
        cStaffType_Effect,
        cStaffType_TimeKeeper,
        cStaffType_NewName5,
        cStaffType_Director,
        cStaffType_Message,
        cStaffType_Sounds,
        cStaffType_Light,
        cStaffType_NewName4,
        cStaffType_Package,
        cStaffType_Create
    };
    static_assert((sizeof(dEvt__StaffType) == 0x4), "dEvt__StaffType Size Missmatch");

    enum fopAc_ac_c__Type : u8
    {
        cType_Regular = 0x0,
        cType_Link,
        cType_Enemy,
        cType_Wildlife,
        cType_NPC
    };
    static_assert((sizeof(fopAc_ac_c__Type) == 0x1), "fopAc_ac_c__Type Size Missmatch");

} // GameEnums