//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ControlCenterUIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIPanGestureRecognizer, UIView, _UIEdgeFeedbackGenerator;

@interface CCUIContinuousSliderView <UIGestureRecognizerDelegate>
{
    UIView *_valueIndicatorClippingView;	// 8 = 0x8
    UIView *_backgroundView;	// 16 = 0x10
    double _startingLength;	// 24 = 0x18
    float _startingValue;	// 32 = 0x20
    _Bool _gestureStartedInside;	// 36 = 0x24
    UIPanGestureRecognizer *_valueChangeGestureRecognizer;	// 40 = 0x28
    _UIEdgeFeedbackGenerator *_edgeFeedbackGenerator;	// 48 = 0x30
    double _continuousSliderCornerRadius;	// 56 = 0x38
    unsigned long long _axis;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000003066
@property(readonly, nonatomic) UIView *valueIndicatorClippingView; // @synthesize valueIndicatorClippingView=_valueIndicatorClippingView;
@property(nonatomic) unsigned long long axis; // @synthesize axis=_axis;
@property(nonatomic) double continuousSliderCornerRadius; // @synthesize continuousSliderCornerRadius=_continuousSliderCornerRadius;
- (void)_endTrackingWithGestureRecognizer:(id)arg1;	// IMP=0x0000000000002f2c
- (void)_continueTrackingWithGestureRecognizer:(id)arg1;	// IMP=0x0000000000002d60
- (void)_beginTrackingWithGestureRecognizer:(id)arg1;	// IMP=0x0000000000002c14
- (void)_handleValueChangeGestureRecognizer:(id)arg1;	// IMP=0x0000000000002b7f
- (void)_updateValueForPanGestureRecognizer:(id)arg1 forContinuedGesture:(_Bool)arg2;	// IMP=0x00000000000029db
- (float)_valueForTouchTranslation:(struct CGPoint)arg1;	// IMP=0x000000000000289c
- (id)topLevelBlockingGestureRecognizers;	// IMP=0x0000000000002812
- (struct CGPoint)glyphCenter;	// IMP=0x00000000000026d1
- (void)layoutSubviews;	// IMP=0x0000000000002482
- (double)sliderLengthForValue:(float)arg1;	// IMP=0x00000000000023e2
- (float)filteredValueForValue:(float)arg1;	// IMP=0x0000000000002370
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000002060

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
