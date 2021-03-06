//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <CardKit/CRKCardSectionViewControllingDelegate-Protocol.h>
#import <CardKit/CRKEventResponding-Protocol.h>
#import <CardKit/CRKFeedbackDelegate-Protocol.h>
#import <CardKit/SFFeedbackListener-Protocol.h>

@class CRKCardSectionViewConfiguration, CRKOverlayButton, INUIRemoteViewController, NSArray, NSString, UIView;
@protocol CRCardSection, CRKCardSectionView, CRKCardSectionViewControllerDelegate;

@interface CRKCardSectionViewController : UIViewController <CRKCardSectionViewControllingDelegate, SFFeedbackListener, CRKFeedbackDelegate, CRKEventResponding>
{
    CRKOverlayButton *_overlayButton;	// 8 = 0x8
    _Bool _childVCDesiresInteractivity;	// 16 = 0x10
    _Bool _loading;	// 17 = 0x11
    id <CRKCardSectionViewControllerDelegate> _delegate;	// 24 = 0x18
    id <CRCardSection> _cardSection;	// 32 = 0x20
    NSArray *_extraCommands;	// 40 = 0x28
    INUIRemoteViewController *__remoteViewController;	// 48 = 0x30
    CRKCardSectionViewConfiguration *_viewConfiguration;	// 56 = 0x38
}

+ (void)_registerWithCardKit;	// IMP=0x0000000000006726
+ (id)cardSectionViewControllerForViewConfiguration:(id)arg1;	// IMP=0x000000000000613e
+ (void)registerCardSectionViewController;	// IMP=0x0000000000005fb5
+ (id)cardSectionClasses;	// IMP=0x0000000000005fad
+ (id)cardSectionViewControllerForCardSection:(id)arg1;	// IMP=0x0000000000005f94
- (void).cxx_destruct;	// IMP=0x000000000000910c
@property(nonatomic) __weak CRKCardSectionViewConfiguration *viewConfiguration; // @synthesize viewConfiguration=_viewConfiguration;
@property(readonly, nonatomic) INUIRemoteViewController *_remoteViewController; // @synthesize _remoteViewController=__remoteViewController;
@property(retain, nonatomic, getter=_extraCommands, setter=_setExtraCommands:) NSArray *extraCommands; // @synthesize extraCommands=_extraCommands;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) id <CRCardSection> cardSection; // @synthesize cardSection=_cardSection;
@property(nonatomic) __weak id <CRKCardSectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cardSectionViewDidInvalidateSizeForCardSection:(id)arg1;	// IMP=0x0000000000008f31
- (void)controllerForCard:(id)arg1 didReceiveAsyncCard:(id)arg2 withAsyncCardReceiptFeedback:(id)arg3;	// IMP=0x0000000000008e54
- (void)controllerForCard:(id)arg1 didRequestAsyncCard:(id)arg2 withAsyncCardRequestFeedback:(id)arg3;	// IMP=0x0000000000008d77
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;	// IMP=0x0000000000008cb1
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;	// IMP=0x0000000000008beb
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;	// IMP=0x0000000000008b25
- (void)cardViewDidDisappearForCard:(id)arg1 withDisappearanceFeedback:(id)arg2;	// IMP=0x0000000000008a5f
- (void)cardViewDidAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;	// IMP=0x0000000000008999
- (void)cardViewWillAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;	// IMP=0x00000000000088d3
- (_Bool)shouldHandleEngagement:(id)arg1 forCardSection:(id)arg2;	// IMP=0x0000000000008803
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;	// IMP=0x000000000000877c
- (_Bool)performCommand:(id)arg1 forViewController:(id)arg2;	// IMP=0x000000000000857e
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;	// IMP=0x00000000000084d9
- (void)willDismissViewController:(id)arg1;	// IMP=0x000000000000842f
- (void)presentViewController:(id)arg1;	// IMP=0x0000000000008385
- (void)cardSectionViewDidInvalidateSize:(id)arg1;	// IMP=0x0000000000008371
- (void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(_Bool)arg2;	// IMP=0x00000000000082d4
- (void)didEngageCardSection:(id)arg1;	// IMP=0x0000000000008100
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000080f8
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000007fe6
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000007eef
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000007df8
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000007c42
- (void)_setupCardSectionButtons;	// IMP=0x0000000000007a63
- (void)_setViewExternally:(id)arg1;	// IMP=0x00000000000079f8
- (void)viewDidLoad;	// IMP=0x00000000000079b7
- (void)loadView;	// IMP=0x00000000000079a5
- (id)_generateCardSectionViewAppearanceFeedback;	// IMP=0x0000000000007940
- (_Bool)_checkIfCardSectionIsNull:(id)arg1;	// IMP=0x0000000000007899
- (id)_backingCardSection;	// IMP=0x0000000000007818
- (_Bool)_shouldHideButtonOverlay;	// IMP=0x0000000000007715
- (_Bool)_isIndicatingActivity;	// IMP=0x000000000000770d
- (void)_buttonOverlayTouchWasCanceled:(id)arg1;	// IMP=0x00000000000076f6
- (void)_buttonOverlayWasTouchedDown:(id)arg1;	// IMP=0x00000000000076dc
- (void)_buttonOverlayWasTouchedUpOutside:(id)arg1;	// IMP=0x00000000000076c0
- (void)_buttonOverlayWasTouchedUpInside:(id)arg1;	// IMP=0x000000000000751e
- (void)_cardSectionTapped;	// IMP=0x0000000000007448
- (id)_preferredPunchoutCommand;	// IMP=0x000000000000725d
- (id)_destinationPunchout;	// IMP=0x000000000000709a
- (id)_commands;	// IMP=0x0000000000006fbc
- (_Bool)_shouldRenderButtonOverlay;	// IMP=0x0000000000006f77
- (void)_resumeTouchesIfNecessary;	// IMP=0x0000000000006f71
- (void)_cancelTouchesIfNecessary;	// IMP=0x0000000000006f6b
- (void)_finishLoadingViewIfNecessary;	// IMP=0x0000000000006ea9
- (void)_loadCardSectionView;	// IMP=0x0000000000006a13
- (void)_performAllCommands;	// IMP=0x0000000000006738
- (_Bool)_isLoadedWithIntentsUIView;	// IMP=0x0000000000006669
- (_Bool)_expectsSearchUIView;	// IMP=0x00000000000065ee
- (_Bool)_hasCorrespondingSearchUIView;	// IMP=0x0000000000006531
- (void)_performCommand:(id)arg1;	// IMP=0x00000000000063bd
- (id)_initWithCardSection:(id)arg1;	// IMP=0x0000000000006231
- (void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000000005fe0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<CRKCardSectionView> *view; // @dynamic view;

@end

