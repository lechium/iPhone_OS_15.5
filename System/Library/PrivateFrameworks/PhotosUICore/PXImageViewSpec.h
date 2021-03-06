//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PXImageViewSpec
{
    _Bool _shouldEnableFocus;	// 8 = 0x8
    NSArray *_overlaySpecs;	// 16 = 0x10
    long long _roundedCornersMode;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000006b98a5
@property(nonatomic) long long roundedCornersMode; // @synthesize roundedCornersMode=_roundedCornersMode;
@property(nonatomic) _Bool shouldEnableFocus; // @synthesize shouldEnableFocus=_shouldEnableFocus;
@property(copy, nonatomic) NSArray *overlaySpecs; // @synthesize overlaySpecs=_overlaySpecs;
@property(readonly, nonatomic) double focusedSizeIncrease;
@property(readonly, nonatomic) struct CGSize floatingUnfocusedShadowExpansion;
@property(readonly, nonatomic) double floatingUnfocusedShadowVerticalOffset;
@property(readonly, nonatomic) double floatingShadowRadius;
@property(readonly, nonatomic) double floatingUnfocusedShadowRadius;
@property(readonly, nonatomic) double floatingShadowOpacity;
@property(readonly, nonatomic) double floatingUnfocusedShadowOpacity;
@property(readonly, nonatomic) struct CGPoint floatingContentMotionTranslation;
@property(readonly, nonatomic) struct CGPoint floatingContentMotionRotation;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006b96ee
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006b95a4
- (unsigned long long)hash;	// IMP=0x00000000006b9523
- (id)init;	// IMP=0x00000000006b94e0

@end

