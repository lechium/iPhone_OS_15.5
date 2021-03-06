//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

@interface _UIConstraintBasedLayoutHostingView
{
    UIView *_hostedView;	// 120 = 0x78
    _Bool _hasAddedConstraints;	// 128 = 0x80
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0000000000a0801e
@property(retain, nonatomic) UIView *hostedView; // @synthesize hostedView=_hostedView;
- (struct CGSize)_layoutSizeThatFits:(struct CGSize)arg1 fixedAxes:(unsigned long long)arg2;	// IMP=0x0000000000a0866c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000a08555
- (CDStruct_c3b9c2ee)_baselineOffsetsAtSize:(struct CGSize)arg1;	// IMP=0x0000000000a08538
- (_Bool)_layoutHeightDependsOnWidth;	// IMP=0x0000000000a0851b
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x0000000000a084dd
- (void)updateConstraints;	// IMP=0x0000000000a08326
- (void)_layoutMetricsInvalidatedForHostedView;	// IMP=0x0000000000a08320
- (void)_scheduleUpdateConstraintsPassAsEngineHostNeedingLayout:(_Bool)arg1;	// IMP=0x0000000000a082c6
- (void)constraintsDidChangeInEngine:(id)arg1;	// IMP=0x0000000000a08277
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;	// IMP=0x0000000000a08213
- (void)_setFrameWithAlignmentRect:(struct CGRect)arg1;	// IMP=0x0000000000a081d3
- (void)willRemoveSubview:(id)arg1;	// IMP=0x0000000000a08186
- (id)initWithHostedView:(id)arg1;	// IMP=0x0000000000a08026

@end

