//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVMicaPackage, AVObservationController, AVOutputContext, MPMediaControls, NSObject, NSString, UIButton, UIColor, UIViewPropertyAnimator;
@protocol AVRoutePickerViewDelegate, OS_dispatch_queue;

@interface AVRoutePickerView : UIView
{
    NSObject<OS_dispatch_queue> *_getAirPlayStatusQueue;	// 8 = 0x8
    UIColor *_activeTintColor;	// 16 = 0x10
    UIButton *_routePickerButton;	// 24 = 0x18
    UIButton *_customButton;	// 32 = 0x20
    struct CGSize _oldSize;	// 40 = 0x28
    UIViewPropertyAnimator *_buttonHighlightAnimator;	// 56 = 0x38
    AVObservationController *_observationController;	// 64 = 0x40
    AVOutputContext *_outputContext;	// 72 = 0x48
    _Bool _airPlayActive;	// 80 = 0x50
    _Bool _prioritizesVideoDevices;	// 81 = 0x51
    AVMicaPackage *_routePickerButtonMicaPackage;	// 88 = 0x58
    MPMediaControls *_routePickingControls;	// 96 = 0x60
    id <AVRoutePickerViewDelegate> _delegate;	// 104 = 0x68
    long long _routePickerButtonStyle;	// 112 = 0x70
    NSString *_overrideRoutingContextUID;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000007d765
@property(copy, nonatomic) NSString *overrideRoutingContextUID; // @synthesize overrideRoutingContextUID=_overrideRoutingContextUID;
@property(nonatomic) long long routePickerButtonStyle; // @synthesize routePickerButtonStyle=_routePickerButtonStyle;
@property(nonatomic) __weak id <AVRoutePickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)_normalizedRect:(struct CGRect)arg1 fromView:(id)arg2;	// IMP=0x000000000007d5b0
- (id)_defaultActiveTintColor;	// IMP=0x000000000007d577
- (_Bool)_isAirPlayActive;	// IMP=0x000000000007d375
- (void)_setupOutputContext;	// IMP=0x000000000007d2bf
- (void)_updateAirPlayActive;	// IMP=0x000000000007d235
- (void)_registerNotifications;	// IMP=0x000000000007d1ab
- (void)_setRoutePickerButtonAlpha:(double)arg1 animated:(_Bool)arg2;	// IMP=0x000000000007cfe8
- (void)_routePickerButtonTouchUp:(id)arg1;	// IMP=0x000000000007cfc9
- (void)_routePickerButtonTouchDragEnter:(id)arg1;	// IMP=0x000000000007cfaa
- (void)_routePickerButtonTouchDown:(id)arg1;	// IMP=0x000000000007cf8e
- (void)_routePickerButtonTapped:(id)arg1;	// IMP=0x000000000007cc49
- (void)_createOrUpdateRoutePickerButton;	// IMP=0x000000000007c71c
- (void)presentRoutePicker:(id)arg1;	// IMP=0x000000000007c70a
@property(nonatomic) _Bool prioritizesVideoDevices;
- (void)updateButtonAppearance;	// IMP=0x000000000007c301
- (void)setCustomButton:(id)arg1;	// IMP=0x000000000007c2a0
- (id)customButton;	// IMP=0x000000000007c28b
- (void)setAirPlayActive:(_Bool)arg1;	// IMP=0x000000000007c194
- (_Bool)isAirPlayActive;	// IMP=0x000000000007c184
@property(retain, nonatomic) UIColor *activeTintColor;
- (void)didMoveToWindow;	// IMP=0x000000000007c0a1
- (void)tintColorDidChange;	// IMP=0x000000000007c060
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000007c043
- (void)layoutSubviews;	// IMP=0x000000000007bcbe
- (void)dealloc;	// IMP=0x000000000007bc75
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007bc31
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000007bbdc

@end
