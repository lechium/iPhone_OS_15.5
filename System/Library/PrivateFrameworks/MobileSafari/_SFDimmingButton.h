//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSValue, UIColor;

@interface _SFDimmingButton
{
    UIColor *_cachedDimmedBackgroundColor;	// 8 = 0x8
    _Bool _alwaysUsesUIMenuOrdering;	// 16 = 0x10
    double _normalImageAlpha;	// 24 = 0x18
    double _highlightedImageAlpha;	// 32 = 0x20
    double _highlightAnimationDuration;	// 40 = 0x28
    UIColor *_dimmableBackgroundColor;	// 48 = 0x30
    NSValue *_tapTargetSideMargins;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000098cd7
@property(nonatomic) _Bool alwaysUsesUIMenuOrdering; // @synthesize alwaysUsesUIMenuOrdering=_alwaysUsesUIMenuOrdering;
@property(retain, nonatomic) NSValue *tapTargetSideMargins; // @synthesize tapTargetSideMargins=_tapTargetSideMargins;
@property(retain, nonatomic) UIColor *dimmableBackgroundColor; // @synthesize dimmableBackgroundColor=_dimmableBackgroundColor;
@property(nonatomic) double highlightAnimationDuration; // @synthesize highlightAnimationDuration=_highlightAnimationDuration;
@property(nonatomic) double highlightedImageAlpha; // @synthesize highlightedImageAlpha=_highlightedImageAlpha;
@property(nonatomic) double normalImageAlpha; // @synthesize normalImageAlpha=_normalImageAlpha;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;	// IMP=0x0000000000098bd3
@property(retain, nonatomic) NSNumber *tapTargetSideMargin;
- (void)_updateBackgroundColor;	// IMP=0x0000000000098a54
- (void)_updateImageAlpha;	// IMP=0x00000000000989b2
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000009875e
- (void)layoutSubviews;	// IMP=0x000000000009871d
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000098634

@end

