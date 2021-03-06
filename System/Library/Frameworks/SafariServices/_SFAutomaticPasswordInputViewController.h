//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIInputViewController.h>

#import <SafariServices/SFAutomaticPasswordInputViewDelegate-Protocol.h>
#import <SafariServices/SFAutomaticPasswordInputViewSizing-Protocol.h>

@class NSLayoutConstraint, NSString, SFAutomaticPasswordInputView;

@interface _SFAutomaticPasswordInputViewController : UIInputViewController <SFAutomaticPasswordInputViewDelegate, SFAutomaticPasswordInputViewSizing>
{
    SFAutomaticPasswordInputView *_inputView;	// 8 = 0x8
    NSString *_password;	// 16 = 0x10
    struct CGSize _portraitKeyboardSize;	// 24 = 0x18
    struct CGSize _landscapeKeyboardSize;	// 40 = 0x28
    NSLayoutConstraint *_heightConstraint;	// 56 = 0x38
    long long _currentInterfaceOrientation;	// 64 = 0x40
    long long _keyboardType;	// 72 = 0x48
    _Bool _logGeneratedPasswordAcceptedImplicitly;	// 80 = 0x50
    NSString *_autoFillContextProtocolObjectUUID;	// 88 = 0x58
}

+ (void)inputViewControllerWithAutoFillContext:(id)arg1 passwordRules:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c9640
- (void).cxx_destruct;	// IMP=0x00000000000ca6a2
- (void)dismissKeyboardPreservingFirstResponderIfNecessary;	// IMP=0x00000000000ca611
- (void)inputViewControllerDidSelectUseCustomPassword:(id)arg1;	// IMP=0x00000000000ca593
- (void)inputViewControllerDidSelectUseStrongPassword:(id)arg1;	// IMP=0x00000000000ca51b
- (struct CGSize)intrinsicContentSizeForInputView:(id)arg1;	// IMP=0x00000000000ca4ed
- (void)_updateKeyboardHeight;	// IMP=0x00000000000ca4a7
- (struct CGSize)_currentKeyboardSize;	// IMP=0x00000000000ca458
- (_Bool)_inputViewControllerShouldDirectlyInsertPassword;	// IMP=0x00000000000ca3bb
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000ca37a
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000ca26e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000ca156
- (void)_postButtonPressedNotificationForButton:(long long)arg1;	// IMP=0x00000000000ca01f
- (void)_dismissKeyboard:(id)arg1;	// IMP=0x00000000000ca00d
- (void)viewDidLoad;	// IMP=0x00000000000c9e9f
- (void)_updateKeyboardMetricsAndInterfaceOrientationIfNeeded;	// IMP=0x00000000000c9d9a
- (id)initWithPassword:(id)arg1 keyboardType:(long long)arg2;	// IMP=0x00000000000c9cf7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

