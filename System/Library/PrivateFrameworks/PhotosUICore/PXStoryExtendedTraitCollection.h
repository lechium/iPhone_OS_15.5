//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSShadow;

@interface PXStoryExtendedTraitCollection
{
    double _displayScale;	// 8 = 0x8
    double _viewportCornerRadius;	// 16 = 0x10
    NSShadow *_viewportShadow;	// 24 = 0x18
    struct CGSize _layoutReferenceSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000a3af6a
@property(readonly, nonatomic) NSShadow *viewportShadow; // @synthesize viewportShadow=_viewportShadow;
@property(readonly, nonatomic) double viewportCornerRadius; // @synthesize viewportCornerRadius=_viewportCornerRadius;
- (double)displayScale;	// IMP=0x0000000000a3af35
- (struct CGSize)layoutReferenceSize;	// IMP=0x0000000000a3af1d
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a3aeee
- (void)setDisplayScale:(double)arg1;	// IMP=0x0000000000a3aeb3
- (void)setLayoutReferenceSize:(struct CGSize)arg1;	// IMP=0x0000000000a3ae72
- (long long)layoutOrientation;	// IMP=0x0000000000a3ae52
- (id)initWithLayoutReferenceSize:(struct CGSize)arg1 displayScale:(double)arg2;	// IMP=0x0000000000a3ade0
- (id)initWithLayoutReferenceSize:(struct CGSize)arg1;	// IMP=0x0000000000a3adc6

@end

