//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXPhotosSlideAnimationDelegate
{
    struct CGPoint _viewportShift;	// 8 = 0x8
}

- (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_4f725fed *)arg2 styles:(inout CDStruct_76b550e2 *)arg3 infos:(inout CDStruct_9d1ebe49 *)arg4 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange)arg5;	// IMP=0x00000000000373bc
- (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_4f725fed *)arg2 styles:(inout CDStruct_76b550e2 *)arg3 infos:(inout CDStruct_9d1ebe49 *)arg4 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange)arg5;	// IMP=0x0000000000037342
- (void)animation:(id)arg1 prepareWithRootLayout:(id)arg2 viewportShift:(struct CGPoint)arg3;	// IMP=0x00000000000372eb

@end

