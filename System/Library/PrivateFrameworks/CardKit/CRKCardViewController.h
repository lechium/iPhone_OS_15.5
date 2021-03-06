//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <CardKit/CRKCardSectionViewControllerDelegate-Protocol.h>
#import <CardKit/CRKCardSectionViewProviderDelegate-Protocol.h>
#import <CardKit/CRKCardViewControlling-Protocol.h>

@class CRKComposedStackView, NSMapTable, NSMutableArray, NSString;
@protocol CRCard, CRKCardSectionViewSourcing, CRKCardViewControllerDelegate;

@interface CRKCardViewController : UIViewController <CRKCardSectionViewControllerDelegate, CRKCardSectionViewProviderDelegate, CRKCardViewControlling>
{
    NSMutableArray *_cardSectionViewControllers;	// 8 = 0x8
    NSMapTable *_cardSectionsToCardSectionViewControllersMapTable;	// 16 = 0x10
    NSMapTable *_handledParametersForInteraction;	// 24 = 0x18
    NSMutableArray *_pendingDismissalCommands;	// 32 = 0x20
    _Bool _loaded;	// 40 = 0x28
    id <CRKCardSectionViewSourcing> _builtInCardSectionViewSource;	// 48 = 0x30
    NSMutableArray *_loadingCardSections;	// 56 = 0x38
    _Bool _indicatingActivity;	// 64 = 0x40
    _Bool _loadBundles;	// 65 = 0x41
    id <CRCard> _card;	// 72 = 0x48
    id <CRKCardViewControllerDelegate> _cardViewControllerDelegate;	// 80 = 0x50
    id <CRKCardSectionViewSourcing> _cardSectionViewSource;	// 88 = 0x58
    long long _preferredPunchoutIndex;	// 96 = 0x60
}

+ (void)_registerCardSectionViewControllers;	// IMP=0x000000000000a2f7
+ (void)initialize;	// IMP=0x0000000000009eeb
- (void).cxx_destruct;	// IMP=0x000000000000ed59
@property long long preferredPunchoutIndex; // @synthesize preferredPunchoutIndex=_preferredPunchoutIndex;
@property(nonatomic) _Bool loadBundles; // @synthesize loadBundles=_loadBundles;
@property(readonly, nonatomic, getter=isIndicatingActivity) _Bool indicatingActivity; // @synthesize indicatingActivity=_indicatingActivity;
@property(retain, nonatomic) id <CRKCardSectionViewSourcing> cardSectionViewSource; // @synthesize cardSectionViewSource=_cardSectionViewSource;
@property(nonatomic) __weak id <CRKCardViewControllerDelegate> cardViewControllerDelegate; // @synthesize cardViewControllerDelegate=_cardViewControllerDelegate;
@property(retain, nonatomic) id <CRCard> card; // @synthesize card=_card;
- (double)contentHeightForWidth:(double)arg1;	// IMP=0x000000000000ec56
@property(nonatomic) __weak id <CRKCardViewControllerDelegate> delegate;
- (id)defaultFeedbackDelegateForProvider:(id)arg1;	// IMP=0x000000000000ebbb
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;	// IMP=0x000000000000eaf5
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;	// IMP=0x000000000000ea2f
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;	// IMP=0x000000000000e969
- (void)userDidReportFeedback:(id)arg1 fromCardSection:(id)arg2;	// IMP=0x000000000000e8a3
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;	// IMP=0x000000000000e7dd
- (void)cardSectionView:(id)arg1 willProcessEngagementFeedback:(id)arg2;	// IMP=0x000000000000e717
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;	// IMP=0x000000000000e706
- (void)willDismissViewController:(id)arg1;	// IMP=0x000000000000e65c
- (void)presentViewController:(id)arg1;	// IMP=0x000000000000e5b2
- (void)didEngageCardSection:(id)arg1;	// IMP=0x000000000000e4f2
- (long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1;	// IMP=0x000000000000e4e1
- (void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2;	// IMP=0x000000000000e4d0
- (void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2;	// IMP=0x000000000000e426
- (void)cardSectionViewControllerShouldBeRemoved:(id)arg1;	// IMP=0x000000000000e364
- (_Bool)performCommand:(id)arg1 forCardSectionViewController:(id)arg2;	// IMP=0x000000000000e352
- (_Bool)_fireAndForgetOutboundCommand:(id)arg1;	// IMP=0x000000000000dc65
- (void)handleCardCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000dac4
- (struct CGSize)boundingSizeForCardSectionViewController:(id)arg1;	// IMP=0x000000000000d9e6
- (void)cardSectionViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;	// IMP=0x000000000000d93c
- (void)cardSectionViewControllerBoundsDidChange:(id)arg1;	// IMP=0x000000000000d80a
- (void)cardSectionViewControllerDidFinishLoading:(id)arg1;	// IMP=0x000000000000d6f9
- (id)init;	// IMP=0x000000000000d6eb
- (struct CGSize)preferredContentSize;	// IMP=0x000000000000d5ff
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000000d5f7
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000000d3f9
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000000d289
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000000d17b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000d084
- (void)viewDidLayoutSubviews;	// IMP=0x000000000000d055
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x000000000000cfeb
- (void)loadView;	// IMP=0x000000000000cf8d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000cf7f
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000000cf71
- (void)_loadCardSectionViewControllersFromCard:(id)arg1 currentSourceInvalid:(_Bool)arg2;	// IMP=0x000000000000c3c9
- (void)_setCardWithLoadedBundles:(id)arg1 loadProvidersImmediately:(_Bool)arg2;	// IMP=0x000000000000bf67
- (void)_setCard:(id)arg1 loadProvidersImmediately:(_Bool)arg2;	// IMP=0x000000000000bb68
- (id)_generateCardViewAppearanceFeedback;	// IMP=0x000000000000ba07
- (_Bool)_isActuallyVisible;	// IMP=0x000000000000b90b
- (void)_finishLoading;	// IMP=0x000000000000b1ec
- (void)_configureCardSectionViewController:(id)arg1 forCardSection:(id)arg2;	// IMP=0x000000000000b086
- (_Bool)_askDelegateToPerformReferentialCommand:(id)arg1;	// IMP=0x000000000000af3c
- (void)_addCardSectionViewControllersAsChildViewControllers:(id)arg1;	// IMP=0x000000000000ad20
- (void)_removeCardSectionViewControllersFromParentViewController:(id)arg1;	// IMP=0x000000000000ab52
- (long long)_convertSFSeparatorStyleToCRKKeylineStyle:(int)arg1;	// IMP=0x000000000000ab3c
- (long long)_defaultKeylineStyleBetweenLeadingCardSection:(id)arg1 andTrailingCardSection:(id)arg2;	// IMP=0x000000000000a823
- (long long)_keylineStyleBetweenLeadingCardSectionViewController:(id)arg1 andTrailingCardSectionViewController:(id)arg2;	// IMP=0x000000000000a6f8
- (id)_cardSectionViewControllerForCardSection:(id)arg1;	// IMP=0x000000000000a6db
- (void)_resumeTouchesIfNecessary;	// IMP=0x000000000000a5ab
- (void)_cancelTouchesIfNecessary;	// IMP=0x000000000000a47b
- (id)_loadCardSectionViewControllerFromCardSection:(id)arg1;	// IMP=0x000000000000a324
- (id)_initWithCard:(id)arg1;	// IMP=0x000000000000a310
- (id)_initWithCard:(id)arg1 delegate:(id)arg2 loadBundles:(_Bool)arg3 loadProvidersImmediately:(_Bool)arg4;	// IMP=0x000000000000a13f
- (id)_initWithCard:(id)arg1 delegate:(id)arg2 loadProvidersImmediately:(_Bool)arg3;	// IMP=0x000000000000a127
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000000009f4f
- (id)initWithCard:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000009f31

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) CRKComposedStackView *view; // @dynamic view;

@end

