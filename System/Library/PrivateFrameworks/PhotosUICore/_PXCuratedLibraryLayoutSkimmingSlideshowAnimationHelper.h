//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _PXCuratedLibraryLayoutSkimmingSlideshowAnimationHelper
{
    unsigned long long _userInterfaceDirection;	// 32 = 0x20
    struct PXSimpleIndexPath _fromIndexPath;	// 40 = 0x28
    struct PXSimpleIndexPath _toIndexPath;	// 72 = 0x48
}

- (void)_adjustGeometries:(inout CDStruct_4f725fed *)arg1 styles:(inout CDStruct_76b550e2 *)arg2 infos:(inout CDStruct_9d1ebe49 *)arg3 spriteIndexRange:(struct _PXGSpriteIndexRange)arg4 appearing:(_Bool)arg5;	// IMP=0x000000000004ea19
- (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_4f725fed *)arg2 styles:(inout CDStruct_76b550e2 *)arg3 infos:(inout CDStruct_9d1ebe49 *)arg4 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange)arg5;	// IMP=0x000000000004e9e7
- (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_4f725fed *)arg2 styles:(inout CDStruct_76b550e2 *)arg3 infos:(inout CDStruct_9d1ebe49 *)arg4 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange)arg5;	// IMP=0x000000000004e9b5
- (id)animation:(id)arg1 doubleSidedAnimatedSpriteIndexesForModifiedSpriteIndexes:(id)arg2 rootLayout:(id)arg3 presentedGeometries:(const CDStruct_4f725fed *)arg4 styles:(const CDStruct_76b550e2 *)arg5 infos:(const CDStruct_9d1ebe49 *)arg6;	// IMP=0x000000000004e8ef
- (_Bool)_shoulAnimateSpriteWithInfo:(const CDStruct_9d1ebe49 *)arg1 matchingSectionIndexPath:(struct PXSimpleIndexPath)arg2 spriteKind:(out unsigned char *)arg3;	// IMP=0x000000000004e8aa
- (double)animationDuration;	// IMP=0x000000000004e89c
- (long long)animationCurve;	// IMP=0x000000000004e891
- (_Bool)wantsDoubleSidedAnimations;	// IMP=0x000000000004e889
- (void)setUserData:(id)arg1;	// IMP=0x000000000004e662
- (id)initWithLayout:(id)arg1;	// IMP=0x000000000004e5ef

@end
