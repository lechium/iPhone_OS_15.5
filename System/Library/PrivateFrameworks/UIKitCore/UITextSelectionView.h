//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAKeyframeAnimation, NSArray, UITextInteractionAssistant, UITextRangeView, UITextSelection, UIView;

__attribute__((visibility("hidden")))
@interface UITextSelectionView
{
    UITextInteractionAssistant *m_interactionAssistant;	// 120 = 0x78
    UITextSelection *m_selection;	// 128 = 0x80
    UIView *m_caretView;	// 136 = 0x88
    UIView *m_floatingCaretView;	// 144 = 0x90
    UITextRangeView *m_rangeView;	// 152 = 0x98
    _Bool m_caretBlinks;	// 160 = 0xa0
    _Bool m_caretShowingNow;	// 161 = 0xa1
    _Bool m_caretAnimating;	// 162 = 0xa2
    _Bool m_ghostApperarance;	// 163 = 0xa3
    _Bool m_caretVisible;	// 164 = 0xa4
    _Bool m_visible;	// 165 = 0xa5
    _Bool m_activated;	// 166 = 0xa6
    _Bool m_wasShowingCommands;	// 167 = 0xa7
    _Bool m_delayShowingCommands;	// 168 = 0xa8
    _Bool m_dictationReplacementsMode;	// 169 = 0xa9
    _Bool m_shouldEmphasizeNextSelectionRects;	// 170 = 0xaa
    int m_showingCommandsCounter;	// 172 = 0xac
    NSArray *m_replacements;	// 176 = 0xb0
    _Bool m_deferSelectionCommands;	// 184 = 0xb8
    struct __CFRunLoopObserver *m_observer;	// 192 = 0xc0
    _Bool m_activeCaret;	// 200 = 0xc8
    _Bool m_isSuspended;	// 201 = 0xc9
    int m_showingCommandsCounterForRotate;	// 204 = 0xcc
    unsigned long long _activeGrabberSuppressionAssertions;	// 208 = 0xd0
    CAKeyframeAnimation *_caretBlinkAnimation;	// 216 = 0xd8
    id _floatingCaretBlinkAssertion;	// 224 = 0xe0
    unsigned long long _viewDidCommitNotification;	// 232 = 0xe8
    unsigned long long _viewDidStopNotification;	// 240 = 0xf0
    _Bool m_forceRangeView;	// 248 = 0xf8
    _Bool m_isInstalledInSelectionContainerView;	// 249 = 0xf9
    _Bool _isIndirectFloatingCaret;	// 250 = 0xfa
    struct CGRect _stashedCaretRect;	// 256 = 0x100
    struct CGRect _previousGhostCaretRect;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x000000000103d0e3
@property(nonatomic) struct CGRect previousGhostCaretRect; // @synthesize previousGhostCaretRect=_previousGhostCaretRect;
@property(nonatomic) _Bool isIndirectFloatingCaret; // @synthesize isIndirectFloatingCaret=_isIndirectFloatingCaret;
@property(nonatomic) struct CGRect stashedCaretRect; // @synthesize stashedCaretRect=_stashedCaretRect;
@property(readonly, nonatomic) _Bool isInstalledInSelectionContainerView; // @synthesize isInstalledInSelectionContainerView=m_isInstalledInSelectionContainerView;
@property(retain, nonatomic) NSArray *replacements; // @synthesize replacements=m_replacements;
@property(nonatomic) _Bool forceRangeView; // @synthesize forceRangeView=m_forceRangeView;
@property(readonly, nonatomic) __weak UITextInteractionAssistant *interactionAssistant; // @synthesize interactionAssistant=m_interactionAssistant;
@property(readonly, nonatomic) UIView *floatingCaretView; // @synthesize floatingCaretView=m_floatingCaretView;
- (struct CGRect)clippedTargetRect:(struct CGRect)arg1;	// IMP=0x000000000103c8e7
- (id)scrollView;	// IMP=0x000000000103c890
- (void)updateSelectionWithDocumentPoint:(struct CGPoint)arg1;	// IMP=0x000000000103c86c
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint)arg1;	// IMP=0x000000000103c848
- (void)didRotate:(id)arg1;	// IMP=0x000000000103c7ac
- (void)willRotate:(id)arg1;	// IMP=0x000000000103c6b8
- (void)scaleDidChange:(id)arg1;	// IMP=0x000000000103c643
- (void)scaleWillChange:(id)arg1;	// IMP=0x000000000103c5ce
- (void)doneMagnifying;	// IMP=0x000000000103c526
- (void)prepareForMagnification;	// IMP=0x000000000103c47e
- (void)layoutChangedByScrolling:(_Bool)arg1;	// IMP=0x000000000103c450
- (struct CGRect)selectionBoundingBoxForRects:(id)arg1;	// IMP=0x000000000103c021
- (struct CGRect)selectionBoundingBox;	// IMP=0x000000000103bf3b
@property(readonly, nonatomic) UITextSelection *selection;
@property(readonly, nonatomic) UITextRangeView *rangeView;
- (void)updateDocumentHasContent:(_Bool)arg1;	// IMP=0x000000000103bd5f
- (id)dynamicCaretList;	// IMP=0x000000000103bd18
- (id)dynamicCaret;	// IMP=0x000000000103bcce
- (void)releaseGrabberHandleSuppressionAssertion:(id)arg1;	// IMP=0x000000000103bb93
- (_Bool)shouldSuppressSelectionHandles;	// IMP=0x000000000103bb7e
- (id)obtainGrabberSuppressionAssertion;	// IMP=0x000000000103bb3d
- (void)endFloatingCursor;	// IMP=0x000000000103b8d9
- (void)endFloatingCaretView;	// IMP=0x000000000103b721
- (void)animateCaret:(id)arg1 toPosition:(struct CGPoint)arg2 withSize:(struct CGSize)arg3;	// IMP=0x000000000103b394
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;	// IMP=0x000000000103abff
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000103abe2
- (struct CGPoint)floatingCursorPositionForPoint:(struct CGPoint)arg1 lineSnapping:(_Bool)arg2;	// IMP=0x000000000103a7a8
- (struct CGPoint)floatingCursorPositionForPoint:(struct CGPoint)arg1;	// IMP=0x000000000103a791
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000103a45b
- (_Bool)_shouldUseIndirectFloatingCaret;	// IMP=0x000000000103a406
- (void)willBeginFloatingCursor:(_Bool)arg1;	// IMP=0x000000000103a33b
- (void)animatePulsingDirectCaret:(id)arg1;	// IMP=0x000000000103a084
- (void)animatePulsingIndirectCaret:(id)arg1;	// IMP=0x0000000001039e31
- (void)beginFloatingCaretView;	// IMP=0x0000000001039764
- (_Bool)point:(struct CGPoint)arg1 isNearCursorRect:(struct CGRect)arg2;	// IMP=0x0000000001039706
@property(readonly, nonatomic) UIView *caretView; // @synthesize caretView=m_caretView;
- (id)floatingCaretViewColor;	// IMP=0x0000000001039567
- (id)caretViewColor;	// IMP=0x0000000001039433
- (id)ghostCaretViewColor;	// IMP=0x00000000010393b9
- (void)_setCaretBlinkAnimationEnabled:(_Bool)arg1;	// IMP=0x00000000010391cf
- (void)_showCaret:(int)arg1;	// IMP=0x0000000001039017
- (void)showCaret:(int)arg1;	// IMP=0x0000000001038fc3
- (void)showInitialCaret;	// IMP=0x0000000001038ece
- (void)animateExpanderOn:(id)arg1;	// IMP=0x000000000103887b
- (void)animateBoxShrinkOn:(id)arg1;	// IMP=0x00000000010384ac
- (void)_hideCaret:(int)arg1;	// IMP=0x00000000010382ec
- (void)hideCaret:(int)arg1;	// IMP=0x00000000010382da
- (void)clearCaret;	// IMP=0x000000000103824f
- (_Bool)activeCaret;	// IMP=0x000000000103823f
- (void)configureForPencilDeletionPreviewMode;	// IMP=0x00000000010381fd
- (void)configureForPencilHighlightMode;	// IMP=0x00000000010381bb
- (void)configureForReplacementMode;	// IMP=0x0000000001038160
- (void)configureForHighlightMode;	// IMP=0x000000000103811e
- (void)configureForSelectionMode;	// IMP=0x00000000010380df
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000001037d2a
@property(readonly, nonatomic) _Bool selectionCommandsShowing;
- (void)hideSelectionCommands;	// IMP=0x0000000001037caa
- (void)hideSelectionCommandsAfterDelay:(double)arg1;	// IMP=0x0000000001037c61
- (void)showReplacementsWithGenerator:(id)arg1 forDictation:(_Bool)arg2 afterDelay:(double)arg3;	// IMP=0x00000000010379ab
- (void)calculateReplacementsWithGenerator:(id)arg1 andShowAfterDelay:(double)arg2;	// IMP=0x000000000103793b
- (void)_showSelectionCommandsForContextMenu:(_Bool)arg1;	// IMP=0x00000000010377f9
- (void)updateRangeViewForSelectionMode;	// IMP=0x00000000010377ba
- (void)showSelectionCommands;	// IMP=0x00000000010377a6
- (void)showSelectionCommandsAfterDelay:(double)arg1;	// IMP=0x00000000010376e4
- (void)showCalloutBarAfterDelay:(double)arg1;	// IMP=0x000000000103758d
- (void)cancelDelayedCommandRequests;	// IMP=0x000000000103755b
- (void)updateSelectionCommands;	// IMP=0x0000000001037396
- (void)_showCommandsWithReplacements:(id)arg1 isForContextMenu:(_Bool)arg2 forDictation:(_Bool)arg3 rectsToEvade:(id)arg4;	// IMP=0x0000000001036a42
- (void)_showCommandsWithReplacements:(id)arg1 forDictation:(_Bool)arg2 afterDelay:(double)arg3;	// IMP=0x0000000001036831
- (void)showCommandsWithReplacements:(id)arg1;	// IMP=0x000000000103681a
- (_Bool)updateCalloutBarRects:(id)arg1 effectsWindow:(id)arg2 rectsToEvade:(id)arg3;	// IMP=0x0000000001035f79
@property(nonatomic) _Bool ghostAppearance;
@property(nonatomic) _Bool caretVisible;
@property(nonatomic) _Bool caretBlinks; // @synthesize caretBlinks=m_caretBlinks;
@property(nonatomic) _Bool visible; // @synthesize visible=m_visible;
- (void)appearOrFadeIfNecessary;	// IMP=0x0000000001035b65
- (_Bool)shouldBeVisible;	// IMP=0x0000000001035b53
- (void)updateSelectionDots;	// IMP=0x0000000001035a99
- (void)updateSelectionRectsIfNeeded;	// IMP=0x0000000001035a1d
- (void)deferredUpdateSelectionCommands;	// IMP=0x0000000001035a00
- (void)setEmphasisOnNextSelectionRects;	// IMP=0x00000000010359ef
- (void)deferredUpdateSelectionRects;	// IMP=0x00000000010358d2
- (void)wilLResume:(id)arg1;	// IMP=0x00000000010358b5
- (void)didSuspend:(id)arg1;	// IMP=0x00000000010358a4
- (void)tintColorDidChange;	// IMP=0x0000000001035820
- (void)updateSelectionRects;	// IMP=0x00000000010346e0
- (void)selectionChanged;	// IMP=0x000000000103435b
- (id)_actingParentViewForGestureRecognizers;	// IMP=0x00000000010342d1
- (void)installIfNecessary;	// IMP=0x00000000010341cc
- (id)_customSelectionContainerView;	// IMP=0x00000000010340c0
- (_Bool)_viewUsesAsynchronousProtocol;	// IMP=0x000000000103407c
- (void)clearRangeAnimated:(_Bool)arg1;	// IMP=0x000000000103405f
- (void)removeFromSuperview;	// IMP=0x0000000001033e9d
- (void)textSelectionViewActivated:(id)arg1;	// IMP=0x0000000001033d23
- (void)selectionDidTranslateForReachability:(id)arg1;	// IMP=0x0000000001033d02
- (void)selectionWillTranslateForReachability:(id)arg1;	// IMP=0x0000000001033cae
- (void)inputViewDidAnimate;	// IMP=0x0000000001033bae
- (void)inputViewWillAnimate;	// IMP=0x0000000001033b06
- (void)inputViewDidMove;	// IMP=0x0000000001033ae5
- (void)inputViewWillMove:(id)arg1;	// IMP=0x0000000001033948
- (void)inputViewDidChange;	// IMP=0x00000000010338c9
- (void)inputViewWillChange;	// IMP=0x0000000001033822
- (_Bool)affectedByScrollerNotification:(id)arg1;	// IMP=0x00000000010336cc
- (void)selectionDidScroll:(id)arg1;	// IMP=0x000000000103352f
- (void)selectionWillScroll:(id)arg1;	// IMP=0x00000000010333e3
- (void)_unregisterForViewAnimationNotificationsIfNecessary;	// IMP=0x0000000001033352
- (void)_registerForViewAnimationNotificationsIfNecessary;	// IMP=0x0000000001033297
- (void)_updateViewAnimateNotificationObservationIfNecessary;	// IMP=0x000000000103321c
- (void)viewAnimate:(id)arg1;	// IMP=0x0000000001032ed4
- (void)inputModeDidChange:(id)arg1;	// IMP=0x0000000001032e9d
- (void)windowDidResignOrBecomeKey;	// IMP=0x0000000001032e7c
- (void)deactivateAndCollapseSelection:(_Bool)arg1;	// IMP=0x0000000001032dca
- (void)deactivate;	// IMP=0x0000000001032db6
- (void)activate;	// IMP=0x0000000001032c65
- (void)detach;	// IMP=0x0000000001032c53
- (void)dealloc;	// IMP=0x0000000001032c15
- (_Bool)isValid;	// IMP=0x0000000001032bd4
- (void)invalidate;	// IMP=0x0000000001032b0d
- (void)didMoveToSuperview;	// IMP=0x0000000001032afb
- (void)willMoveToSuperview;	// IMP=0x0000000001032ae9
- (void)validateWithInteractionAssistant:(id)arg1;	// IMP=0x0000000001032746
- (id)initWithInteractionAssistant:(id)arg1;	// IMP=0x000000000103240e

@end

