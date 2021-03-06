//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSArray, NSString, SRCompactEditableUtterancePresenter, SRCompactKeyboardState, SRCompactResultViewController, SRCompactTextRequestViewController, SRCompactView, SRFullScreenEffects, SRSiriViewStackContainerController, SRUIFSpeechRecognitionHypothesis, SiriUIBackgroundBlurViewController, SiriUINavigationController, SiriUIPanDismissalGestureRecognizer;
@protocol SRCompactNavigationStackLayoutControlling, SRCompactViewControllerDelegate;

@interface SRCompactViewController : UIViewController
{
    double _presentationTime;	// 8 = 0x8
    _Bool _siriViewControllerIsEditing;	// 16 = 0x10
    SRFullScreenEffects *_fullScreenEffects;	// 24 = 0x18
    _Bool _snippetViewControllerRequestsStatusViewHidden;	// 32 = 0x20
    SRCompactTextRequestViewController *_textRequestViewController;	// 40 = 0x28
    id <SRCompactViewControllerDelegate> _delegate;	// 48 = 0x30
    NSArray *_activeTranscriptItems;	// 56 = 0x38
    NSArray *_activeConversationTranscriptItems;	// 64 = 0x40
    NSArray *_serverUtterances;	// 72 = 0x48
    SRUIFSpeechRecognitionHypothesis *_speechRecognitionHypothesis;	// 80 = 0x50
    SiriUINavigationController *_navigationController;	// 88 = 0x58
    id <SRCompactNavigationStackLayoutControlling> _navigationStackLayoutController;	// 96 = 0x60
    SRCompactResultViewController *_resultViewController;	// 104 = 0x68
    SRSiriViewStackContainerController *_viewStackContainerController;	// 112 = 0x70
    UIViewController *_queuedNavigationContentViewController;	// 120 = 0x78
    SiriUIPanDismissalGestureRecognizer *_dismissalPanGestureRecognizer;	// 128 = 0x80
    SRCompactEditableUtterancePresenter *_editableUtterancePresenter;	// 136 = 0x88
    long long _inputType;	// 144 = 0x90
    SRCompactKeyboardState *_keyboardState;	// 152 = 0x98
    SiriUIBackgroundBlurViewController *_backgroundBlurViewController;	// 160 = 0xa0
    CDStruct_fb636c91 _bottomContentInsetComponents;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x002000000001f935
@property(retain, nonatomic) SiriUIBackgroundBlurViewController *backgroundBlurViewController; // @synthesize backgroundBlurViewController=_backgroundBlurViewController;
@property(nonatomic, getter=_bottomContentInsetComponents, setter=_setBottomContentInsetComponents:) CDStruct_fb636c91 bottomContentInsetComponents; // @synthesize bottomContentInsetComponents=_bottomContentInsetComponents;
@property(copy, nonatomic, getter=_keyboardState, setter=_setKeyboardState:) SRCompactKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
@property(nonatomic, getter=_inputType, setter=_setInputType:) long long inputType; // @synthesize inputType=_inputType;
@property(retain, nonatomic, getter=_editableUtterancePresenter) SRCompactEditableUtterancePresenter *editableUtterancePresenter; // @synthesize editableUtterancePresenter=_editableUtterancePresenter;
@property(nonatomic, getter=_snippetViewControllerRequestsStatusViewHidden, setter=_setSnippetViewControllerRequestsStatusViewHidden:) _Bool snippetViewControllerRequestsStatusViewHidden; // @synthesize snippetViewControllerRequestsStatusViewHidden=_snippetViewControllerRequestsStatusViewHidden;
@property(retain, nonatomic, getter=_dismissalPanGestureRecognizer, setter=_setDismissalPanGestureRecognizer:) SiriUIPanDismissalGestureRecognizer *dismissalPanGestureRecognizer; // @synthesize dismissalPanGestureRecognizer=_dismissalPanGestureRecognizer;
@property(retain, nonatomic, getter=_queuedNavigationContentViewController, setter=_setQueuedNavigationContentViewController:) UIViewController *queuedNavigationContentViewController; // @synthesize queuedNavigationContentViewController=_queuedNavigationContentViewController;
@property(readonly, nonatomic, getter=_viewStackContainerController) SRSiriViewStackContainerController *viewStackContainerController; // @synthesize viewStackContainerController=_viewStackContainerController;
@property(readonly, nonatomic, getter=_resultViewController) SRCompactResultViewController *resultViewController; // @synthesize resultViewController=_resultViewController;
@property(retain, nonatomic, getter=_navigationStackLayoutController, setter=_setNavigationStackLayoutController:) id <SRCompactNavigationStackLayoutControlling> navigationStackLayoutController; // @synthesize navigationStackLayoutController=_navigationStackLayoutController;
@property(readonly, nonatomic, getter=_navigationController) SiriUINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(copy, nonatomic, getter=_speechRecognitionHypothesis, setter=_setSpeechRecognitionHypothesis:) SRUIFSpeechRecognitionHypothesis *speechRecognitionHypothesis; // @synthesize speechRecognitionHypothesis=_speechRecognitionHypothesis;
@property(copy, nonatomic, getter=_serverUtterances, setter=_setServerUtterances:) NSArray *serverUtterances; // @synthesize serverUtterances=_serverUtterances;
@property(copy, nonatomic, getter=_activeConversationTranscriptItems, setter=_setActiveConversationTranscriptItems:) NSArray *activeConversationTranscriptItems; // @synthesize activeConversationTranscriptItems=_activeConversationTranscriptItems;
@property(copy, nonatomic, getter=_activeTranscriptItems, setter=_setActiveTranscriptItems:) NSArray *activeTranscriptItems; // @synthesize activeTranscriptItems=_activeTranscriptItems;
@property(nonatomic) __weak id <SRCompactViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=_textRequestViewController) SRCompactTextRequestViewController *textRequestViewController; // @synthesize textRequestViewController=_textRequestViewController;
- (_Bool)contentDiffersBetweenItems:(id)arg1 andItems:(id)arg2;	// IMP=0x001000000001f1da
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x001000000001f0b9
- (_Bool)_usesDefaultNavigationBar;	// IMP=0x001000000001f0ac
- (void)_requestKeyboardWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001f037
- (_Bool)_keyboardHasContentAtPoint:(struct CGPoint)arg1;	// IMP=0x001000000001efde
- (_Bool)_navigationBarHasContentAtPoint:(struct CGPoint)arg1;	// IMP=0x001000000001ee94
- (void)blurFromRootNavigationTransitionController:(id)arg1 requestHostBlurVisible:(_Bool)arg2 requestPresentationBlurVisible:(_Bool)arg3;	// IMP=0x001000000001ed60
- (void)blurFromRootNavigationTransitionController:(id)arg1 requestBackgroundBlurViewVisible:(_Bool)arg2;	// IMP=0x001000000001ed47
- (void)_requestPresentationBackgoundBlurVisible:(_Bool)arg1 forReason:(long long)arg2;	// IMP=0x001000000001ec8b
- (_Bool)_alwaysObscureBackgroundContentWhenActive;	// IMP=0x001000000001ec40
- (void)textRequestController:(id)arg1 siriRequestCommittedWithText:(id)arg2;	// IMP=0x001000000001eba3
- (void)textRequestControllerDidEndEditing:(id)arg1;	// IMP=0x001000000001eb91
- (void)textRequestControllerWillBeginEditing:(id)arg1;	// IMP=0x001000000001eb7d
- (void)textRequestController:(id)arg1 requestsKeyboardWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001eb68
- (_Bool)_hidesTextRequestViewForInputType:(long long)arg1;	// IMP=0x001000000001eb0f
- (_Bool)_hidesStatusViewForInputType:(long long)arg1;	// IMP=0x001000000001eb02
@property(readonly, nonatomic, getter=_keyboardFrame) struct CGRect keyboardFrame;
- (struct CGRect)_convertRectFromKeyboard:(struct CGRect)arg1;	// IMP=0x001000000001e949
- (void)_updateKeyboardStateFromNotification:(id)arg1;	// IMP=0x001000000001e88a
- (void)willDismissEditableUtterancePresenter:(id)arg1 transitionCoordinator:(id)arg2;	// IMP=0x001000000001e516
- (void)editableUtterancePresenter:(id)arg1 openURL:(id)arg2;	// IMP=0x001000000001e49e
- (void)editableUtterancePresenter:(id)arg1 didFinishEditingWithText:(id)arg2 selectionResults:(id)arg3 shouldStartNewRequest:(_Bool)arg4;	// IMP=0x001000000001e1c5
- (void)didResignFirstResponderFromUtterancePresenter:(id)arg1;	// IMP=0x001000000001e1b3
- (void)willBeginEditingFromUtterancePresenter:(id)arg1;	// IMP=0x001000000001e19c
- (void)editableUtterancePresenter:(id)arg1 requestsKeyboardWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001e187
- (void)compactView:(id)arg1 didChangeEffectiveBottomContentInsetAnimatedWithDuration:(double)arg2 animationOptions:(unsigned long long)arg3;	// IMP=0x001000000001de55
- (void)compactView:(id)arg1 viewDidChangeWindow:(id)arg2;	// IMP=0x001000000001de43
- (void)compactView:(id)arg1 viewDidDisappearForAceObject:(id)arg2;	// IMP=0x001000000001dde0
- (void)compactView:(id)arg1 viewDidAppearForAceObject:(id)arg2;	// IMP=0x001000000001dd7d
- (_Bool)_shouldMoveViewStackForTapToEdit;	// IMP=0x001000000001dcdb
- (void)tapToEditRequestedFromView:(id)arg1;	// IMP=0x001000000001dad7
- (void)_didEndEditing;	// IMP=0x001000000001da8b
- (void)_willBeginEditingOfType:(long long)arg1;	// IMP=0x001000000001da3a
- (void)_updateTextRequestViewVisibility;	// IMP=0x001000000001d9cd
- (void)_updateStatusViewVisibility;	// IMP=0x001000000001d970
- (void)_setStatusViewHidden:(_Bool)arg1;	// IMP=0x001000000001d903
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000001d8f9
- (void)siriViewControllerViewDidDisappear:(id)arg1 isTopLevelViewController:(_Bool)arg2;	// IMP=0x001000000001d861
- (void)siriViewControllerViewDidAppear:(id)arg1 isTopLevelViewController:(_Bool)arg2;	// IMP=0x001000000001d7c9
- (void)siriViewControllerDidEndEditing:(id)arg1;	// IMP=0x001000000001d740
- (void)siriViewControllerWillBeginEditing:(id)arg1;	// IMP=0x001000000001d67e
- (void)siriViewControllerRequestTearDownEditingViewController:(id)arg1;	// IMP=0x001000000001d678
- (void)siriViewController:(id)arg1 startCorrectedSpeechRequestWithText:(id)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(id)arg4;	// IMP=0x001000000001d672
- (void)siriSnippetViewController:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x001000000001d5fd
- (void)siriSnippetViewController:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x001000000001d588
- (void)siriSnippetViewController:(id)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;	// IMP=0x001000000001d582
- (void)siriSnippetViewController:(id)arg1 didPresentViewController:(id)arg2;	// IMP=0x001000000001d57c
- (void)siriSnippetViewController:(id)arg1 didDismissViewController:(id)arg2;	// IMP=0x001000000001d576
- (void)removeSiriViewController:(id)arg1;	// IMP=0x001000000001d570
- (id)localeForSiriViewController:(id)arg1;	// IMP=0x001000000001d511
- (_Bool)siriViewControllerShouldPreventUserInteraction:(id)arg1;	// IMP=0x001000000001d4bb
- (void)siriViewController:(id)arg1 speakText:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d42f
- (void)cancelSpeakingForSiriViewController:(id)arg1;	// IMP=0x001000000001d3e3
- (void)siriSnippetViewController:(id)arg1 handleStartLocalRequest:(id)arg2 turnIdentifier:(id)arg3;	// IMP=0x001000000001d35a
- (void)userTouchedSnippet;	// IMP=0x001000000001d31d
- (void)siriSnippetViewControllerWillBecomeFirstResponder:(id)arg1;	// IMP=0x001000000001d317
- (void)siriSnippetViewControllerViewDidLoad:(id)arg1;	// IMP=0x001000000001d0e6
- (_Bool)siriSnippetViewControllerIsVisible:(id)arg1;	// IMP=0x001000000001d0de
- (void)siriSnippetViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d0d8
- (void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000001d0d2
- (void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x001000000001d0cc
- (void)siriSnippetViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x001000000001d0b8
- (void)siriSnippetViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d0b2
- (void)_updateAdditionalSafeAreaInsetsForNavigationContentViewController:(id)arg1;	// IMP=0x001000000001cfb1
- (void)siriSnippetViewController:(id)arg1 pushSirilandSnippets:(id)arg2;	// IMP=0x001000000001c7ff
- (void)siriSnippetViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x001000000001c7f9
- (double)statusBarHeightForSiriViewController:(id)arg1;	// IMP=0x001000000001c7f0
- (struct CGSize)siriViewControllerVisibleContentArea:(id)arg1;	// IMP=0x001000000001c7da
- (void)siriViewControllerHeightDidChange:(id)arg1 pinTopOfSnippet:(_Bool)arg2;	// IMP=0x001000000001c79d
- (void)siriViewControllerHeightDidChange:(id)arg1;	// IMP=0x001000000001c52e
- (double)siriViewControllerExpectedWidth:(id)arg1;	// IMP=0x001000000001c4de
- (id)siriViewControllerEffectiveBundleForCoreLocation:(id)arg1;	// IMP=0x001000000001c43b
- (struct UIEdgeInsets)siriViewControllerBackgroundInsets:(id)arg1;	// IMP=0x001000000001c41d
- (void)siriViewController:(id)arg1 setDomainObject:(id)arg2 forIdentifier:(id)arg3;	// IMP=0x001000000001c417
- (void)siriViewController:(id)arg1 setContentOffset:(double)arg2;	// IMP=0x001000000001c411
- (id)siriViewController:(id)arg1 listItemToPickInAutodisambiguationForListItems:(id)arg2;	// IMP=0x001000000001c38a
- (id)siriViewController:(id)arg1 filteredDisambiguationListItems:(id)arg2;	// IMP=0x001000000001c303
- (id)siriViewController:(id)arg1 domainObjectForIdentifier:(id)arg2;	// IMP=0x001000000001c2fb
- (id)siriViewController:(id)arg1 disambiguationItemForListItem:(id)arg2 disambiguationKey:(id)arg3;	// IMP=0x001000000001c260
- (void)siriViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x001000000001c25a
- (void)siriViewController:(id)arg1 addSelectionResponse:(id)arg2;	// IMP=0x001000000001c254
- (double)boundingWidthForSnippetViewController:(id)arg1;	// IMP=0x001000000001c204
- (id)persistentDataStoreForSiriViewController:(id)arg1;	// IMP=0x001000000001c1fc
- (void)cancelRequestForSiriSnippetViewController:(id)arg1;	// IMP=0x001000000001c1f6
- (id)additionalSpeechInterpretationsForSiriViewController:(id)arg1;	// IMP=0x001000000001c1ee
- (MISSING_TYPE *)siriViewController:performAceCommands:completion: /* Error: Ran out of types for this method. */;	// IMP=0x001000000001c165
- (void)siriSnippetViewController:(id)arg1 performAceCommands:(id)arg2 sashItem:(id)arg3;	// IMP=0x001000000001c0d5
- (void)siriViewController:(id)arg1 performAceCommands:(id)arg2;	// IMP=0x001000000001c0c0
- (void)siriViewController:(id)arg1 openURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001bfd1
- (_Bool)shouldBeginDismissalGestureRecognizer:(id)arg1 withTouch:(id)arg2;	// IMP=0x001000000001be5f
- (void)dismissalGestureRecognizerDidFinish:(id)arg1 shouldDismiss:(_Bool)arg2;	// IMP=0x001000000001bdff
- (void)_pushQueuedNavigationContentViewController;	// IMP=0x001000000001bd77
- (void)_recursivelyNotifyVisibleViewControllers:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001bbd0
- (void)siriWillStartRequest;	// IMP=0x001000000001bb18
- (void)siriDidTapOutsideContent;	// IMP=0x001000000001ba60
- (void)siriDidUpdateASRWithRecognition:(id)arg1;	// IMP=0x001000000001b937
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;	// IMP=0x001000000001b802
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x001000000001b6d9
- (void)didReceiveUpdateVisualResponseCommand:(id)arg1;	// IMP=0x001000000001b3c0
- (void)showFullScreenEffect:(id)arg1;	// IMP=0x001000000001b307
- (void)_createPunchOutEvent:(id)arg1 aceCommand:(id)arg2 URL:(id)arg3 appID:(id)arg4 sashItem:(id)arg5;	// IMP=0x001000000001b0f1
- (void)_createPunchOutEventIfNecessary:(id)arg1 commands:(id)arg2 sashItem:(id)arg3;	// IMP=0x001000000001adb8
- (void)_logCardSectionInteractionIfApplicableForSiriViewController:(id)arg1;	// IMP=0x001000000001ac75
- (void)_logDrillInForSnippetViewController:(id)arg1 snippet:(id)arg2;	// IMP=0x001000000001abc6
- (id)_instrumentationManager;	// IMP=0x001000000001abad
- (double)lastPresentationTime;	// IMP=0x001000000001ab9b
- (int)viewRegionForPresentedAceObject:(id)arg1;	// IMP=0x001000000001a642
- (void)siriDidDeactivate;	// IMP=0x001000000001a5b4
- (void)siriDidActivate;	// IMP=0x001000000001a526
- (void)_updateBottomContentInsetKeyboardComponent;	// IMP=0x001000000001a344
- (void)setBottomContentInset:(double)arg1;	// IMP=0x001000000001a304
- (void)_setBottomContentInsetComponents:(CDStruct_fb636c91)arg1 animatedWithDuration:(double)arg2 animationOptions:(unsigned long long)arg3;	// IMP=0x001000000001a274
- (_Bool)hasContentAtPoint:(struct CGPoint)arg1;	// IMP=0x0010000000019ed0
- (_Bool)_updateActiveTranscriptItems:(id)arg1;	// IMP=0x00100000000195a8
- (void)compactViewModelDidChange:(id)arg1 withDiff:(unsigned long long)arg2;	// IMP=0x0010000000018eaa
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000018d87
- (void)_updateCompactViewSize;	// IMP=0x0010000000018ba5
- (void)viewWillLayoutSubviews;	// IMP=0x0010000000018b64
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000018809
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000001877c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000001867f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000018461
- (void)viewDidLoad;	// IMP=0x001000000001814f
- (void)loadView;	// IMP=0x0010000000017e42
@property(readonly, nonatomic, getter=_compactView) SRCompactView *compactView;
- (id)initWithTextRequestsEnabled:(_Bool)arg1;	// IMP=0x0010000000017b69

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

