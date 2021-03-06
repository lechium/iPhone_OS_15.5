//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBPIPContentViewLayoutContext, SBPIPContentViewLayoutMetrics, SBPIPDefaults;

@interface SBPIPContentViewLayoutSettings : NSObject
{
    SBPIPContentViewLayoutContext *_context;	// 8 = 0x8
    SBPIPContentViewLayoutMetrics *_platformMetrics;	// 16 = 0x10
    SBPIPDefaults *_pipDefaults;	// 24 = 0x18
}

+ (id)pipDefaults;	// IMP=0x00000000006081c1
- (void).cxx_destruct;	// IMP=0x0000000000608ee2
- (double)defaultCornerRadius;	// IMP=0x0000000000608ecc
- (double)contentViewPaddingWhileStashed;	// IMP=0x0000000000608eb6
- (double)contentViewPadding;	// IMP=0x0000000000608ea0
- (unsigned long long)currentContentViewPosition;	// IMP=0x0000000000608e45
- (void)setContentViewPosition:(unsigned long long)arg1;	// IMP=0x0000000000608dec
- (struct CGSize)minimumStashedTabSize;	// IMP=0x0000000000608dd6
- (struct CGSize)_maximumContentViewSizeForAspectRatio:(struct CGSize)arg1 maximumReferenceSize:(double)arg2;	// IMP=0x0000000000608d52
- (struct CGSize)_minimumContentViewSizeForAspectRatio:(struct CGSize)arg1 minimumReferenceSize:(double)arg2;	// IMP=0x0000000000608bd6
- (struct CGSize)maximumPreferredContentViewSizeForAspectRatio:(struct CGSize)arg1;	// IMP=0x0000000000608b85
- (struct CGSize)minimumPreferredContentViewSizeForAspectRatio:(struct CGSize)arg1;	// IMP=0x0000000000608b34
- (struct CGSize)maximumPossibleContentViewSizeForAspectRatio:(struct CGSize)arg1;	// IMP=0x0000000000608a53
- (struct CGSize)minimumPossibleContentViewSizeForAspectRatio:(struct CGSize)arg1;	// IMP=0x0000000000608972
- (struct CGSize)currentContentViewSizeForAspectRatio:(struct CGSize)arg1;	// IMP=0x0000000000608921
- (struct CGSize)_contentViewSizeForAspectRatio:(struct CGSize)arg1 currentSize:(double)arg2;	// IMP=0x00000000006087f5
- (struct CGSize)defaultContentViewSizeForAspectRatio:(struct CGSize)arg1;	// IMP=0x00000000006086f1
- (void)setMaximumSizeSpanForPreferredSizeTuning:(double)arg1;	// IMP=0x00000000006086db
- (void)setMinimumSizeSpanBetweenPreferredSizes:(double)arg1;	// IMP=0x00000000006086c5
- (void)setContentViewSize:(struct CGSize)arg1;	// IMP=0x000000000060834a
- (void)updatePlatformMetrics:(id)arg1;	// IMP=0x0000000000608304
- (id)platformMetrics;	// IMP=0x00000000006082f6
- (id)initWithPlatformMetrics:(id)arg1 contentSize:(struct CGSize)arg2;	// IMP=0x0000000000608216

@end

