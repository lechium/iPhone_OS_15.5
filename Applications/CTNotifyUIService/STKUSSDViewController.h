//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class MISSING_TYPE, NSLayoutConstraint, NSMutableArray, NSNumberFormatter, NSString, NSTimer, NSXPCConnection, STKUSSDSessionAction, TPButton, UIActivityIndicatorView, UILayoutGuide, UITextView, UIView, USSDReplyField;

@interface STKUSSDViewController : SBUIRemoteAlertServiceViewController
{
    NSTimer *_timeoutTimer;	// 8 = 0x8
    STKUSSDSessionAction *_sessionAction;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    NSString *_displayText;	// 32 = 0x20
    NSMutableArray *_supplementaryServicesInfo;	// 40 = 0x28
    TPButton *_dismissButton;	// 48 = 0x30
    TPButton *_replyButton;	// 56 = 0x38
    UIActivityIndicatorView *_activityIndicator;	// 64 = 0x40
    UIView *_notifyView;	// 72 = 0x48
    UIView *_replyView;	// 80 = 0x50
    UITextView *_charsRemainingView;	// 88 = 0x58
    UITextView *_textView;	// 96 = 0x60
    USSDReplyField *_responseField;	// 104 = 0x68
    UILayoutGuide *_keyboardGuide;	// 112 = 0x70
    NSLayoutConstraint *_keyboardTopConstraint;	// 120 = 0x78
    NSLayoutConstraint *_textViewHeightConstraint;	// 128 = 0x80
    NSLayoutConstraint *_textViewBottomConstraint;	// 136 = 0x88
    NSNumberFormatter *_decimalFormatter;	// 144 = 0x90
    _Bool _hasReceivedContent;	// 152 = 0x98
    _Bool _allowsResponse;	// 153 = 0x99
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x002000000000ac59
- (void).cxx_destruct;	// IMP=0x002000000000eaa9
@property(nonatomic) _Bool allowsResponse; // @synthesize allowsResponse=_allowsResponse;
@property(readonly, nonatomic) STKUSSDSessionAction *sessionAction; // @synthesize sessionAction=_sessionAction;
- (void)_updateNotifyText:(id)arg1;	// IMP=0x001000000000dbea
- (void)_updateCharsRemaining;	// IMP=0x001000000000dab9
- (void)_setupResponseBar;	// IMP=0x001000000000d11c
- (void)_displayDidTimeout;	// IMP=0x001000000000d0de
- (void)_noteDidReceiveContent:(id)arg1;	// IMP=0x001000000000d05e
- (id)_replyView;	// IMP=0x001000000000c17b
- (_Bool)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange)arg3;	// IMP=0x001000000000c0e9
- (void)sessionDidReceiveSupplementaryServicesEvent:(id)arg1;	// IMP=0x001000000000c027
- (void)sessionWantsResponse:(_Bool)arg1;	// IMP=0x001000000000bf86
- (void)sessionDidTerminate;	// IMP=0x001000000000be94
- (void)sessionDidReceiveErrorCode:(long long)arg1 string:(id)arg2;	// IMP=0x001000000000bbbc
- (void)sessionDidReceiveString:(id)arg1;	// IMP=0x001000000000b9e9
- (void)dismissCoalescingSession;	// IMP=0x001000000000b931
- (void)viewDidLayoutSubviews;	// IMP=0x001000000000b84f
- (void)_textDidChangeNotification:(id)arg1;	// IMP=0x001000000000b83d
- (void)_keyboardWillChangeFrame:(id)arg1;	// IMP=0x001000000000b6a8
- (void)_replyClicked:(id)arg1;	// IMP=0x001000000000b39d
- (void)_okayClicked:(id)arg1;	// IMP=0x001000000000b2f5
- (void)_cancelClicked:(id)arg1;	// IMP=0x001000000000b298
- (MISSING_TYPE *)startTimeoutTimerIfNecessary;	// IMP=0x001000000000b212
- (void)dismiss;	// IMP=0x001000000000b0f6
- (void)clearTimeoutTimer;	// IMP=0x001000000000b0be
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ac61
- (void)_willAppearInRemoteViewController;	// IMP=0x001000000000abab
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000000aad4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000000a90f
- (void)viewDidLoad;	// IMP=0x0010000000009b3b
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000009adf
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000009ad7
- (void)dealloc;	// IMP=0x0010000000009a40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
