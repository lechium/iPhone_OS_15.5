//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMExposureBiasStatusIndicatorTickMarksView, UILabel, UIView;

@interface CAMExposureBiasStatusIndicator
{
    _Bool _exposureValueVisible;	// 8 = 0x8
    double _exposureBiasValue;	// 16 = 0x10
    double _shadowClipping;	// 24 = 0x18
    double _highlightClipping;	// 32 = 0x20
    UILabel *__exposureLabel;	// 40 = 0x28
    CAMExposureBiasStatusIndicatorTickMarksView *__ticksView;	// 48 = 0x30
    UIView *__shadowClippingTick;	// 56 = 0x38
    UIView *__highlightClippingTick;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001d7147
@property(readonly, nonatomic) UIView *_highlightClippingTick; // @synthesize _highlightClippingTick=__highlightClippingTick;
@property(readonly, nonatomic) UIView *_shadowClippingTick; // @synthesize _shadowClippingTick=__shadowClippingTick;
@property(readonly, nonatomic) CAMExposureBiasStatusIndicatorTickMarksView *_ticksView; // @synthesize _ticksView=__ticksView;
@property(readonly, nonatomic) UILabel *_exposureLabel; // @synthesize _exposureLabel=__exposureLabel;
@property(nonatomic) double highlightClipping; // @synthesize highlightClipping=_highlightClipping;
@property(nonatomic) double shadowClipping; // @synthesize shadowClipping=_shadowClipping;
@property(nonatomic, getter=isExposureValueVisible) _Bool exposureValueVisible; // @synthesize exposureValueVisible=_exposureValueVisible;
@property(nonatomic) double exposureBiasValue; // @synthesize exposureBiasValue=_exposureBiasValue;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;	// IMP=0x00000000001d6fd7
- (id)imageNameForAXHUD;	// IMP=0x00000000001d6fca
- (void)_updateHighlightClippingTickAlpha;	// IMP=0x00000000001d6ce1
- (void)_updateShadowClippingTickAlpha;	// IMP=0x00000000001d6c75
- (double)_clippingTickAlphaForClipping:(double)arg1;	// IMP=0x00000000001d6c5b
- (struct CGRect)_clippingTickFrameForClipping:(double)arg1 leftAligned:(_Bool)arg2;	// IMP=0x00000000001d6a5b
- (void)_updateTicks;	// IMP=0x00000000001d69bd
- (void)_updateExposureLabel;	// IMP=0x00000000001d6899
- (_Bool)supportsOrientations;	// IMP=0x00000000001d6891
- (id)imageNameForCurrentState;	// IMP=0x00000000001d6889
- (_Bool)shouldUseOutline;	// IMP=0x00000000001d6881
- (void)_layoutHighlightClippingTick;	// IMP=0x00000000001d67fd
- (void)_layoutShadowClippingTick;	// IMP=0x00000000001d6776
- (void)layoutSubviews;	// IMP=0x00000000001d6400
- (double)_horizontalExposureLabelOffset;	// IMP=0x00000000001d6392
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000001d62e9
- (id)init;	// IMP=0x00000000001d611e

@end

