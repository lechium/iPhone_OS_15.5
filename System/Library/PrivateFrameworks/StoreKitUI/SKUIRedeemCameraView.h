//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <StoreKitUI/UITextFieldDelegate-Protocol.h>

@class NSString, SKUIClientContext, SKUIITunesPassConfiguration, SKUIRedeemCameraLandingView, SKUIRedeemITunesPassLockup, SKUIRedeemTextField, UIButton, UIImage;
@protocol SKUIRedeemCameraViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIRedeemCameraView : UIView <UITextFieldDelegate>
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    id <SKUIRedeemCameraViewDelegate> _delegate;	// 16 = 0x10
    SKUIRedeemTextField *_inputAccessoryTextField;	// 24 = 0x18
    SKUIITunesPassConfiguration *_iTunesPassConfiguration;	// 32 = 0x20
    SKUIRedeemITunesPassLockup *_iTunesPassLockup;	// 40 = 0x28
    SKUIRedeemCameraLandingView *_landingView;	// 48 = 0x30
    UIView *_overlay;	// 56 = 0x38
    UIView *_redeemerView;	// 64 = 0x40
    UIButton *_termsButton;	// 72 = 0x48
    SKUIRedeemTextField *_textField;	// 80 = 0x50
    _Bool _displayRedeem;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000002e15e8
@property(retain, nonatomic) SKUIITunesPassConfiguration *ITunesPassConfiguration; // @synthesize ITunesPassConfiguration=_iTunesPassConfiguration;
@property(nonatomic) __weak id <SKUIRedeemCameraViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showRedeemer:(_Bool)arg1;	// IMP=0x00000000002e156e
- (void)_resumeRedeemer;	// IMP=0x00000000002e1532
- (void)_pauseRedeemer;	// IMP=0x00000000002e14f6
- (id)_newTextFieldWithClientContext:(id)arg1 placeholderColor:(id)arg2;	// IMP=0x00000000002e1279
- (_Bool)_isShowingRedeemer;	// IMP=0x00000000002e1264
- (void)_hideKeyboard;	// IMP=0x00000000002e121b
- (void)_termsButtonAction:(id)arg1;	// IMP=0x00000000002e11df
- (void)_tapGestureAction:(id)arg1;	// IMP=0x00000000002e117c
- (void)_landingButtonAction:(id)arg1;	// IMP=0x00000000002e1142
- (void)_iTunesPassLearnMoreAction:(id)arg1;	// IMP=0x00000000002e10e5
- (_Bool)textFieldShouldEndEditing:(id)arg1;	// IMP=0x00000000002e10c5
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000002e1035
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x00000000002e1015
- (void)textFieldTextDidChange:(id)arg1;	// IMP=0x00000000002e0fbe
- (void)keyboardDidHide:(id)arg1;	// IMP=0x00000000002e0fb8
- (void)keyboardWillHide:(id)arg1;	// IMP=0x00000000002e0e92
- (void)keyboardDidShow:(id)arg1;	// IMP=0x00000000002e0e66
- (void)keyboardWillShow:(id)arg1;	// IMP=0x00000000002e0cda
- (void)layoutSubviews;	// IMP=0x00000000002e0710
@property(copy, nonatomic) NSString *text;
- (void)start;	// IMP=0x00000000002e06ed
- (void)showKeyboard;	// IMP=0x00000000002e06d0
@property(retain, nonatomic) UIImage *image;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)dealloc;	// IMP=0x00000000002e0182
- (id)initWithClientContext:(id)arg1;	// IMP=0x00000000002dfbf7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

