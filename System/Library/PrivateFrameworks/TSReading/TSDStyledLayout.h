//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSDStyledLayout
{
    _Bool mIsUpdatingOpacity;	// 272 = 0x110
    double mDynamicOpacity;	// 280 = 0x118
}

- (void)dynamicOpacityChangeDidEnd;	// IMP=0x0000000000233e3d
- (void)dynamicOpacityUpdateToValue:(double)arg1;	// IMP=0x0000000000233dd4
- (void)dynamicOpacityChangeDidBegin;	// IMP=0x0000000000233dc3
- (_Bool)canFlip;	// IMP=0x0000000000233dbb
- (_Bool)isInvisible;	// IMP=0x0000000000233db3
@property(readonly, nonatomic) double opacity;
- (struct CGRect)frameForCulling;	// IMP=0x0000000000233b94
- (struct CGRect)reflectionFrameForSubRect:(struct CGRect)arg1;	// IMP=0x00000000002339c0
- (struct CGRect)reflectionFrameInRoot;	// IMP=0x0000000000233945
- (struct CGRect)reflectionFrame;	// IMP=0x00000000002338ca
- (struct CGRect)i_baseFrame;	// IMP=0x00000000002337fd
- (struct CGRect)reflectionBoundsForRect:(struct CGRect)arg1;	// IMP=0x000000000023375e
- (struct CGRect)shadowedNaturalBoundsWithoutOffset;	// IMP=0x0000000000233675
- (struct CGRect)alignmentFrameInRoot;	// IMP=0x0000000000233572
- (struct CGRect)aliasedAlignmentFrameForScale:(double)arg1;	// IMP=0x0000000000233517
- (id)styledInfo;	// IMP=0x0000000000233505

@end
