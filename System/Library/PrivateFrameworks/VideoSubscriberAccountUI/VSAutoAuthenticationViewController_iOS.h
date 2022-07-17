//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <VideoSubscriberAccountUI/VSAutoAuthenticationViewController-Protocol.h>

@class NSString, UIButton, UILabel, UIScrollView, VSAutoAuthenticationViewModel, VSFontCenter, VSIdentityProviderLogoView;
@protocol VSAuthenticationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSAutoAuthenticationViewController_iOS : UIViewController <VSAutoAuthenticationViewController>
{
    _Bool _cancellationAllowed;	// 8 = 0x8
    id <VSAuthenticationViewControllerDelegate> _delegate;	// 16 = 0x10
    VSAutoAuthenticationViewModel *_viewModel;	// 24 = 0x18
    UIScrollView *_scrollView;	// 32 = 0x20
    VSIdentityProviderLogoView *_logoView;	// 40 = 0x28
    UILabel *_accountNameLabel;	// 48 = 0x30
    UILabel *_messageTitleLabel;	// 56 = 0x38
    UILabel *_messageLabel;	// 64 = 0x40
    UILabel *_noticeLabel;	// 72 = 0x48
    UILabel *_manualSignInTitleLabel;	// 80 = 0x50
    UIButton *_manualSignInButton;	// 88 = 0x58
    UILabel *_footerLabel;	// 96 = 0x60
    VSFontCenter *_fontCenter;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000060b50
@property(retain, nonatomic) VSFontCenter *fontCenter; // @synthesize fontCenter=_fontCenter;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UIButton *manualSignInButton; // @synthesize manualSignInButton=_manualSignInButton;
@property(retain, nonatomic) UILabel *manualSignInTitleLabel; // @synthesize manualSignInTitleLabel=_manualSignInTitleLabel;
@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *messageTitleLabel; // @synthesize messageTitleLabel=_messageTitleLabel;
@property(retain, nonatomic) UILabel *accountNameLabel; // @synthesize accountNameLabel=_accountNameLabel;
@property(retain, nonatomic) VSIdentityProviderLogoView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) VSAutoAuthenticationViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <VSAuthenticationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000060947
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000006090e
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000608d5
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000006089c
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000606de
- (void)viewDidLoad;	// IMP=0x000000000005f5d8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000005f3d1
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000005f308
@property(readonly, nonatomic) struct CGSize preferredLogoSize;
- (void)_manualSignInButtonPressed:(id)arg1;	// IMP=0x000000000005f153
- (void)_stopObservingViewModel:(id)arg1;	// IMP=0x000000000005f12a
- (void)_startObservingViewModel:(id)arg1;	// IMP=0x000000000005f0fb
- (void)dealloc;	// IMP=0x000000000005f0b2
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000005f06e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005efc7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
