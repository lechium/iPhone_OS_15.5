//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class CAShapeLayerAnimated, NSDate, UIActivityIndicatorView, UIColor, UIImageView, UIImpactFeedbackGenerator;
@protocol AVTRecordingButtonLongPressDelegate;

@interface AVTRecordingButton : UIButton
{
    _Bool _forceUsePhoneStyle;	// 8 = 0x8
    _Bool _ignoresLongPress;	// 9 = 0x9
    _Bool _isTrackingLongPress;	// 10 = 0xa
    id <AVTRecordingButtonLongPressDelegate> _longPressDelegate;	// 16 = 0x10
    unsigned long long _uiState;	// 24 = 0x18
    UIColor *_centerCircleColor;	// 32 = 0x20
    CAShapeLayerAnimated *_outerCircle;	// 40 = 0x28
    CAShapeLayerAnimated *_innerCircle;	// 48 = 0x30
    UIImageView *_iconView;	// 56 = 0x38
    UIActivityIndicatorView *_spinner;	// 64 = 0x40
    UIImpactFeedbackGenerator *_feedbackGenerator;	// 72 = 0x48
    NSDate *_lastFeedbackSent;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000787ae
@property(retain, nonatomic) NSDate *lastFeedbackSent; // @synthesize lastFeedbackSent=_lastFeedbackSent;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(nonatomic) _Bool isTrackingLongPress; // @synthesize isTrackingLongPress=_isTrackingLongPress;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) CAShapeLayerAnimated *innerCircle; // @synthesize innerCircle=_innerCircle;
@property(retain, nonatomic) CAShapeLayerAnimated *outerCircle; // @synthesize outerCircle=_outerCircle;
@property(nonatomic) _Bool ignoresLongPress; // @synthesize ignoresLongPress=_ignoresLongPress;
@property(retain, nonatomic) UIColor *centerCircleColor; // @synthesize centerCircleColor=_centerCircleColor;
@property(nonatomic, setter=setUIState:) unsigned long long uiState; // @synthesize uiState=_uiState;
@property(nonatomic) _Bool forceUsePhoneStyle; // @synthesize forceUsePhoneStyle=_forceUsePhoneStyle;
@property(nonatomic) __weak id <AVTRecordingButtonLongPressDelegate> longPressDelegate; // @synthesize longPressDelegate=_longPressDelegate;
- (void)endLongPress:(_Bool)arg1;	// IMP=0x0000000000078593
- (void)startLongPress;	// IMP=0x0000000000078508
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000078492
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000078383
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000782ef
- (void)sendHapticFeedbackIfNeeded;	// IMP=0x00000000000781f2
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000078144
- (void)layoutSubviews;	// IMP=0x00000000000773ea
- (void)configure;	// IMP=0x0000000000076f25
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000076ed9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000076e45

@end
