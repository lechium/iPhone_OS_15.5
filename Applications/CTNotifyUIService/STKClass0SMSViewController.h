//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class CALayer, STKClass0SMSSessionAction, UIButton, UILabel, UIView, UIVisualEffectView;

@interface STKClass0SMSViewController : SBUIRemoteAlertServiceViewController
{
    UIView *_contentContainerView;	// 8 = 0x8
    UIVisualEffectView *_alertContainerView;	// 16 = 0x10
    UIVisualEffectView *_blurEffectContainerView;	// 24 = 0x18
    UIVisualEffectView *_darkBlurView;	// 32 = 0x20
    UILabel *_messageTextLabel;	// 40 = 0x28
    UILabel *_messageTitleLabel;	// 48 = 0x30
    UIButton *_dismissButton;	// 56 = 0x38
    UIButton *_learnMoreButton;	// 64 = 0x40
    CALayer *_lineLayer;	// 72 = 0x48
    STKClass0SMSSessionAction *_sessionAction;	// 80 = 0x50
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0040000000007d6c
- (void).cxx_destruct;	// IMP=0x0020000000009055
@property(readonly, nonatomic) STKClass0SMSSessionAction *sessionAction; // @synthesize sessionAction=_sessionAction;
- (id)blurEffectContainerView;	// IMP=0x0010000000008ef2
- (id)alertContainerView;	// IMP=0x0010000000008d0d
- (id)darkBlurView;	// IMP=0x0010000000008c40
- (id)learnMoreButton;	// IMP=0x0010000000008aa0
- (id)dismissButton;	// IMP=0x00100000000087ba
- (id)messageTextLabel;	// IMP=0x0010000000008656
- (id)messageTitleLabel;	// IMP=0x0010000000008499
- (id)contentContainerView;	// IMP=0x00100000000083a9
- (void)setMessageString:(id)arg1;	// IMP=0x0010000000008157
- (void)dismiss;	// IMP=0x001000000000802e
- (void)dismissButtonClicked:(id)arg1;	// IMP=0x001000000000801c
- (void)learnMoreButtonClicked:(id)arg1;	// IMP=0x0010000000007f93
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007d74
- (void)viewDidLayoutSubviews;	// IMP=0x00100000000073c9
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000007310
- (void)viewDidLoad;	// IMP=0x00100000000072a1
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000007245
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000000723d
- (void)dealloc;	// IMP=0x00100000000071f4

@end
