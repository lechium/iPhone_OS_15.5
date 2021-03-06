//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClockKitUI/CLKUITimeLabelStyle.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>

@class NSNumber, NTKLayoutRule;

@interface NTKDigitalTimeLabelStyle : CLKUITimeLabelStyle <NSCopying>
{
    NTKLayoutRule *_layoutRule;	// 8 = 0x8
    NSNumber *_tracking;	// 16 = 0x10
}

+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect)arg1 withBaselineY:(double)arg2 withFont:(id)arg3 forDevice:(id)arg4;	// IMP=0x00000000000cb014
+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect)arg1 withFont:(id)arg2 forDevice:(id)arg3;	// IMP=0x00000000000caf5e
+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect)arg1 forDevice:(id)arg2;	// IMP=0x00000000000caf41
+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect)arg1 weight:(double)arg2 forDevice:(id)arg3;	// IMP=0x00000000000cae76
+ (id)defaultStyleForBounds:(struct CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(_Bool)arg3 withBaselineY:(double)arg4 withFont:(id)arg5 forDevice:(id)arg6;	// IMP=0x00000000000cac70
+ (id)_fontForDesign:(id)arg1 withWeight:(double)arg2 onDevice:(id)arg3;	// IMP=0x00000000000cabd7
+ (id)defaultRoundedStyleForBounds:(struct CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(_Bool)arg3 forDevice:(id)arg4;	// IMP=0x00000000000caadd
+ (id)defaultStyleForBounds:(struct CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(_Bool)arg3 withBaselineY:(double)arg4 forDevice:(id)arg5;	// IMP=0x00000000000caa0f
+ (id)defaultStyleForBounds:(struct CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(_Bool)arg3 font:(id)arg4 forDevice:(id)arg5;	// IMP=0x00000000000ca94b
+ (id)defaultStyleForBounds:(struct CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(_Bool)arg3 forDevice:(id)arg4;	// IMP=0x00000000000ca8a8
- (void).cxx_destruct;	// IMP=0x00000000000cb25f
@property(retain, nonatomic) NSNumber *tracking; // @synthesize tracking=_tracking;
@property(retain, nonatomic) NTKLayoutRule *layoutRule; // @synthesize layoutRule=_layoutRule;
- (unsigned long long)hash;	// IMP=0x00000000000ca7ef
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ca725
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ca686

@end

