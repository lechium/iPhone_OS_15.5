//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKLinkedAppIconView, PKPass, PKPaymentPass, PKSecureElementPass, UIButton;
@protocol PKPassFooterContentViewDelegate;

@interface PKPassFooterContentView : UIView
{
    UIButton *_infoButton;	// 8 = 0x8
    _Bool _physicalButtonRequired;	// 16 = 0x10
    _Bool _invalidated;	// 17 = 0x11
    _Bool _requestPileSuppression;	// 18 = 0x12
    long long _style;	// 24 = 0x18
    id <PKPassFooterContentViewDelegate> _delegate;	// 32 = 0x20
    PKPass *_pass;	// 40 = 0x28
    PKSecureElementPass *_secureElementPass;	// 48 = 0x30
    PKLinkedAppIconView *_appIconView;	// 56 = 0x38
    UIView *_bottomRule;	// 64 = 0x40
    long long _coachingState;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000003ef0a7
@property(readonly, nonatomic) _Bool requestPileSuppression; // @synthesize requestPileSuppression=_requestPileSuppression;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) long long coachingState; // @synthesize coachingState=_coachingState;
@property(readonly, nonatomic, getter=isPhysicalButtonRequired) _Bool physicalButtonRequired; // @synthesize physicalButtonRequired=_physicalButtonRequired;
@property(readonly, nonatomic) UIView *bottomRule; // @synthesize bottomRule=_bottomRule;
@property(readonly, nonatomic) PKLinkedAppIconView *appIconView; // @synthesize appIconView=_appIconView;
@property(readonly, nonatomic) PKSecureElementPass *secureElementPass; // @synthesize secureElementPass=_secureElementPass;
@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(nonatomic) __weak id <PKPassFooterContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (id)_buttonWithTitle:(id)arg1 action:(id)arg2;	// IMP=0x00000000003eedba
- (void)_infoButtonPressed:(id)arg1;	// IMP=0x00000000003ee64b
- (void)_authenticateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003ee635
- (void)_setRequestPileSuppression:(_Bool)arg1;	// IMP=0x00000000003ee5bf
- (void)_setCoachingState:(long long)arg1;	// IMP=0x00000000003ee550
- (void)_setPhysicalButtonRequired:(_Bool)arg1;	// IMP=0x00000000003ee500
@property(readonly, nonatomic, getter=isPassAuthorized) _Bool passAuthorized;
- (void)_didInvalidate;	// IMP=0x00000000003ee4f2
- (void)invalidate;	// IMP=0x00000000003ee4cd
- (void)showFullScreenBarcode;	// IMP=0x00000000003ee4c7
- (void)coachingStateDidChange;	// IMP=0x00000000003ee4c1
- (void)didBecomeHiddenAnimated:(_Bool)arg1;	// IMP=0x00000000003ee4bb
- (void)willBecomeHiddenAnimated:(_Bool)arg1;	// IMP=0x00000000003ee4b5
- (void)didBecomeVisibleAnimated:(_Bool)arg1;	// IMP=0x00000000003ee4af
- (void)willBecomeVisibleAnimated:(_Bool)arg1;	// IMP=0x00000000003ee4a9
- (void)layoutSubviews;	// IMP=0x00000000003ee1ce
@property(readonly, nonatomic) PKPaymentPass *paymentPass;
@property(readonly, nonatomic) struct CGRect infoButtonFrame;
@property(nonatomic) double infoButtonAlpha;
- (void)dealloc;	// IMP=0x00000000003ee0f3
- (id)initWithPass:(id)arg1;	// IMP=0x00000000003edb69
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003edb5b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003edb4d
- (id)init;	// IMP=0x00000000003edb3f

@end

