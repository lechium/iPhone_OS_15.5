//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/BNPresentable-Protocol.h>

@class BNBannerSourceLayoutDescription, NSString, NSTimer, PKBannerModel, PKSecureElementPass, PLPlatterView, UIButton, UIImageView, UILabel;
@protocol BNPresentableContext, PKBannerViewControllerDelegate;

@interface PKBannerViewController : UIViewController <BNPresentable>
{
    PLPlatterView *_platterView;	// 8 = 0x8
    NSTimer *_dismissTimer;	// 16 = 0x10
    id <PKBannerViewControllerDelegate> _delegate;	// 24 = 0x18
    UIImageView *_cardArtImageView;	// 32 = 0x20
    UILabel *_primaryLabel;	// 40 = 0x28
    UILabel *_secondaryLabel;	// 48 = 0x30
    _Bool _wasAutomaticallyDismissed;	// 56 = 0x38
    NSString *_requestIdentifier;	// 64 = 0x40
    long long _destination;	// 72 = 0x48
    BNBannerSourceLayoutDescription *_layoutDescription;	// 80 = 0x50
    PKBannerModel *_bannerModel;	// 88 = 0x58
    PKSecureElementPass *_pass;	// 96 = 0x60
    NSString *_primaryText;	// 104 = 0x68
    NSString *_secondaryText;	// 112 = 0x70
    UIButton *_actionButton;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000000e9b4
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(retain, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
@property(readonly, nonatomic) PKSecureElementPass *pass; // @synthesize pass=_pass;
@property(readonly, nonatomic) PKBannerModel *bannerModel; // @synthesize bannerModel=_bannerModel;
@property(readonly, nonatomic) BNBannerSourceLayoutDescription *layoutDescription; // @synthesize layoutDescription=_layoutDescription;
@property(readonly, nonatomic) long long destination; // @synthesize destination=_destination;
- (void)_cleanupAndDismissBannerWithAutomaticDismissal:(_Bool)arg1;	// IMP=0x000000000000e83f
- (void)_scheduleDismissTimerIfNecessary;	// IMP=0x000000000000e71f
- (void)_handleBannerTapped:(id)arg1;	// IMP=0x000000000000e687
- (struct CGSize)preferredContentSizeWithPresentationSize:(struct CGSize)arg1 containerSize:(struct CGSize)arg2;	// IMP=0x000000000000e662
- (struct UIEdgeInsets)bannerContentOutsets;	// IMP=0x000000000000e610
@property(readonly, nonatomic, getter=isDraggingInteractionEnabled) _Bool draggingInteractionEnabled;
@property(readonly, nonatomic) UIViewController *viewController;
@property(readonly, copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, copy, nonatomic) NSString *requesterIdentifier;
- (void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x000000000000e4fb
- (void)presentableDidAppearAsBanner:(id)arg1;	// IMP=0x000000000000e4b3
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000000e453
- (_Bool)shouldShowActionButton;	// IMP=0x000000000000e44b
- (void)viewWillLayoutSubviews;	// IMP=0x000000000000e0ba
- (id)_newPlatterView;	// IMP=0x000000000000db96
- (void)viewDidLoad;	// IMP=0x000000000000da61
- (id)initWithSecureElementPass:(id)arg1 destination:(long long)arg2 layoutDescription:(id)arg3 bannerModel:(id)arg4 delegate:(id)arg5;	// IMP=0x000000000000d938

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isDraggingDismissalEnabled) _Bool draggingDismissalEnabled;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <BNPresentableContext> presentableContext;
@property(readonly, nonatomic) long long presentableType;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) _Bool touchOutsideDismissalEnabled;

@end
