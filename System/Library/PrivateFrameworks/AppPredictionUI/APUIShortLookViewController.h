//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AppPredictionUI/APUIIntentHandlingViewControllerDelegate-Protocol.h>
#import <AppPredictionUI/APUILongLookViewControllerDataSource-Protocol.h>
#import <AppPredictionUI/APUILongLookViewControllerDelegate-Protocol.h>
#import <AppPredictionUI/CRKCardPresentationDelegate-Protocol.h>
#import <AppPredictionUI/CRKCardViewControllerDelegate-Protocol.h>
#import <AppPredictionUI/PLClickPresentationInteractionManagerDelegate-Protocol.h>
#import <AppPredictionUI/PLClickPresentationInteractionPresenting-Protocol.h>

@class APUIIntentHandlingViewController, APUILongLookViewController, APUITVIntentHandler, ATXAction, CRKCardPresentation, INIntent, INInteraction, NSString, NSUserActivity, NSUserDefaults, PLClickPresentationInteractionManager, SFSearchResult, UIView;
@protocol APUIActionFeedbackDelegate, APUIShortLookViewControllerDelegate, CRKCardViewControllerDelegate, CRKCardViewControlling, PLClickPresentationInteractionPresentable;

@interface APUIShortLookViewController : UIViewController <APUIIntentHandlingViewControllerDelegate, CRKCardPresentationDelegate, CRKCardViewControllerDelegate, PLClickPresentationInteractionPresenting, PLClickPresentationInteractionManagerDelegate, APUILongLookViewControllerDataSource, APUILongLookViewControllerDelegate>
{
    APUILongLookViewController<PLClickPresentationInteractionPresentable> *_presentableViewController;	// 8 = 0x8
    APUITVIntentHandler *_tvIntentHandler;	// 16 = 0x10
    double _preferredPlatterContentHeight;	// 24 = 0x18
    _Bool _acceptPlatterTaps;	// 32 = 0x20
    long long _dismissalReason;	// 40 = 0x28
    _Bool _actionCompletedSuccessfully;	// 48 = 0x30
    _Bool _hasShownLongLook;	// 49 = 0x31
    _Bool _wasPresentedImmediately;	// 50 = 0x32
    _Bool _representsVoiceShortcut;	// 51 = 0x33
    NSUserDefaults *_userDefaults;	// 56 = 0x38
    INIntent *_intent;	// 64 = 0x40
    NSUserActivity *_userActivity;	// 72 = 0x48
    PLClickPresentationInteractionManager *_clickPresentationInteractionManager;	// 80 = 0x50
    NSString *_bundleId;	// 88 = 0x58
    SFSearchResult *_searchResult;	// 96 = 0x60
    long long _displayContext;	// 104 = 0x68
    id <APUIShortLookViewControllerDelegate> _delegate;	// 112 = 0x70
    id <APUIActionFeedbackDelegate> _actionFeedbackDelegate;	// 120 = 0x78
    APUIIntentHandlingViewController *_intentHandlingViewController;	// 128 = 0x80
    ATXAction *_atxAction;	// 136 = 0x88
    INInteraction *_interaction;	// 144 = 0x90
    CRKCardPresentation *_cardPresentation;	// 152 = 0x98
    UIViewController<CRKCardViewControlling> *_currentCardViewController;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000000a176
@property(retain, nonatomic) UIViewController<CRKCardViewControlling> *currentCardViewController; // @synthesize currentCardViewController=_currentCardViewController;
@property(retain, nonatomic) CRKCardPresentation *cardPresentation; // @synthesize cardPresentation=_cardPresentation;
@property(retain, nonatomic) INInteraction *interaction; // @synthesize interaction=_interaction;
@property(retain, nonatomic) ATXAction *atxAction; // @synthesize atxAction=_atxAction;
@property(retain, nonatomic) APUIIntentHandlingViewController *intentHandlingViewController; // @synthesize intentHandlingViewController=_intentHandlingViewController;
@property(nonatomic) __weak id <APUIActionFeedbackDelegate> actionFeedbackDelegate; // @synthesize actionFeedbackDelegate=_actionFeedbackDelegate;
@property(nonatomic) __weak id <APUIShortLookViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long displayContext; // @synthesize displayContext=_displayContext;
@property(retain, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(readonly, nonatomic) PLClickPresentationInteractionManager *clickPresentationInteractionManager; // @synthesize clickPresentationInteractionManager=_clickPresentationInteractionManager;
- (void)intentHandlingViewController:(id)arg1 didComplete:(_Bool)arg2;	// IMP=0x0000000000009da4
- (void)intentHandlingViewControllerDidFailAuthorizationCheck:(id)arg1;	// IMP=0x0000000000009d28
- (void)intentHandlingViewController:(id)arg1 willContinueInAppForIntent:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009b20
- (void)intentHandlingViewController:(id)arg1 requiresConfirmationWithResponse:(id)arg2 confirmationActionTitle:(id)arg3;	// IMP=0x0000000000009a69
- (void)intentHandlingViewController:(id)arg1 wantsPreferredSize:(struct CGSize)arg2;	// IMP=0x0000000000009a4c
@property(readonly, nonatomic) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
- (void)cardViewControllerBoundsDidChange:(id)arg1;	// IMP=0x00000000000098cf
- (void)cardViewControllerDidLoad:(id)arg1;	// IMP=0x000000000000975b
- (_Bool)_isLongLookDebugUIEnabled;	// IMP=0x00000000000096fb
- (void)longLookPlatterDidTapUtilityButton:(id)arg1;	// IMP=0x0000000000008c79
- (_Bool)longLookPlatterShouldShowUtilityButton:(id)arg1;	// IMP=0x0000000000008bb5
- (void)handOverIntentHandlingToApp;	// IMP=0x000000000000893c
- (void)longLookPlatterDidReceiveTap:(id)arg1;	// IMP=0x0000000000008410
- (double)preferredContentHeightForLongLook:(id)arg1;	// IMP=0x0000000000008365
- (_Bool)fetchViewControllerForContentViewInLongLook:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006f77
- (id)titleForLongLookHeaderInLongLook:(id)arg1;	// IMP=0x0000000000006f27
- (id)_titleForLongLookViewController:(id)arg1;	// IMP=0x0000000000006e0e
- (id)bundleIdentifierForAppIconInLongLook:(id)arg1;	// IMP=0x0000000000006c76
- (id)appIconImageForLongLook:(id)arg1;	// IMP=0x0000000000006bb6
- (id)interfaceActionsForLongLook:(id)arg1;	// IMP=0x0000000000006b5e
- (void)clickPresentationInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;	// IMP=0x0000000000006925
- (void)clickPresentationInteractionManagerDidEndUserInteraction:(id)arg1;	// IMP=0x0000000000006711
- (void)clickPresentationInteractionManagerWillBeginUserInteraction:(id)arg1;	// IMP=0x00000000000065f6
- (_Bool)clickPresentationInteractionManagerShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;	// IMP=0x00000000000065dc
- (id)containerViewForclickPresentationInteractionManager:(id)arg1;	// IMP=0x0000000000006588
- (id)presentedViewControllerForClickPresentationInteractionManager:(id)arg1;	// IMP=0x000000000000651e
- (id)_debugStringForNSUA;	// IMP=0x00000000000061cb
- (_Bool)_isDoNotDisturbIntent;	// IMP=0x0000000000006156
- (_Bool)_shouldAcceptPlatterTaps;	// IMP=0x00000000000060c8
- (long long)_actionTypeForMetrics;	// IMP=0x0000000000005f99
- (void)_dismissLongLookWithReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005d3d
- (_Bool)_shouldTellDelegateToClearActionOnDismissal:(long long)arg1;	// IMP=0x0000000000005ca8
- (id)_intentConfirmationActions;	// IMP=0x0000000000005ae3
- (void)_handleActionButtonForIntent;	// IMP=0x0000000000005a12
- (id)_cardContentWithIntentResponse:(id)arg1;	// IMP=0x0000000000005928
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(retain, nonatomic) INIntent *intent; // @synthesize intent=_intent;
- (void)_resetRepresentedObjectState;	// IMP=0x0000000000005476
- (id)_defaults;	// IMP=0x000000000000541e
@property(readonly, nonatomic) UIView *viewForPreview;
- (_Bool)presentImmediately:(CDUnknownBlockType)arg1;	// IMP=0x000000000000526e
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000005224
- (void)setView:(id)arg1;	// IMP=0x00000000000051bc
- (void)viewDidLoad;	// IMP=0x000000000000517c
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000005174
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000050f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) struct CGRect finalDismissedFrameOfViewForPreview;
@property(readonly, nonatomic) struct CGRect finalPresentedFrameOfViewForPreview;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(readonly, nonatomic) struct CGRect initialPresentedFrameOfViewForPreview;
@property(readonly) Class superclass;

@end
