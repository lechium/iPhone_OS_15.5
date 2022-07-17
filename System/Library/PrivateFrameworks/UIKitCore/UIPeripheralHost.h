//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIScrollViewIntersectionDelegate-Protocol.h>

@class CADisplayLink, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIInputViewPostPinningReloadState, UIInputViewSet, UIKBRenderConfig, UIKeyboardAutomatic, UIKeyboardRotationState, UIPanGestureRecognizer, UIPeripheralHostState, UIPeripheralHostView, UIResponder, UITextInputMode, UIView;

@interface UIPeripheralHost : NSObject <UIScrollViewIntersectionDelegate, UIGestureRecognizerDelegate>
{
    UIPeripheralHostView *_hostView;	// 8 = 0x8
    UIKeyboardAutomatic *_automaticKeyboard;	// 16 = 0x10
    _Bool _automaticAppearanceEnabled;	// 24 = 0x18
    _Bool _automaticAppearanceEnabledInternal;	// 25 = 0x19
    _Bool _automaticKeyboardAnimatingIn;	// 26 = 0x1a
    _Bool _automaticKeyboardAnimatingOut;	// 27 = 0x1b
    int _ignoringReloadInputViews;	// 28 = 0x1c
    int _ignoredReloads;	// 32 = 0x20
    _Bool _suppresingNotifications;	// 36 = 0x24
    _Bool _useHideNotificationsWhenNotVisible;	// 37 = 0x25
    _Bool _reloadInputViewsForcedIsAllowed;	// 38 = 0x26
    int _nextAutomaticOrderInDirection;	// 40 = 0x28
    long long _targetRotatedOrientation;	// 48 = 0x30
    _Bool _isTranslating;	// 56 = 0x38
    _Bool _isSplitting;	// 57 = 0x39
    _Bool _isUndocked;	// 58 = 0x3a
    _Bool _splitLockState;	// 59 = 0x3b
    UIPanGestureRecognizer *_translateRecognizer;	// 64 = 0x40
    CADisplayLink *_displayLink;	// 72 = 0x48
    double _lastBounceTime;	// 80 = 0x50
    double _lastTranslationNotificationTime;	// 88 = 0x58
    struct CGAffineTransform _targetTransform;	// 96 = 0x60
    struct CGAffineTransform _initialTransform;	// 144 = 0x90
    struct CGPoint _velocity;	// 192 = 0xc0
    NSDate *__transitionStartTime;	// 208 = 0xd0
    int _shadowStyle;	// 216 = 0xd8
    _Bool _wasBackgroundSplit;	// 220 = 0xdc
    struct CGRect _previousShadowFrameLeft;	// 224 = 0xe0
    struct CGRect _previousShadowFrameRight;	// 256 = 0x100
    CDUnknownBlockType _bounceCompletionBlock;	// 288 = 0x120
    double m_keyboardAttachedViewHeight;	// 296 = 0x128
    struct CGRect _lastKnownIVFrame;	// 304 = 0x130
    struct CGRect _lastKnownIAVFrame;	// 336 = 0x150
    NSMutableArray *_animationStyleStack;	// 368 = 0x170
    _Bool _hasCustomAnimationProperties;	// 376 = 0x178
    double _nextAutomaticOrderInDuration;	// 384 = 0x180
    double _lastAutomaticKeyboardDuration;	// 392 = 0x188
    long long _disableAnimationsCount;	// 400 = 0x190
    NSMutableArray *_targetStateStack;	// 408 = 0x198
    UIInputViewSet *_inputViewSet;	// 416 = 0x1a0
    UIResponder *_responder;	// 424 = 0x1a8
    NSMutableSet *_pinningResponders;	// 432 = 0x1b0
    _Bool _ignoresPinning;	// 440 = 0x1b8
    UIInputViewPostPinningReloadState *_postPinningReloadState;	// 448 = 0x1c0
    _Bool _animationFencingEnabled;	// 456 = 0x1c8
    _Bool _interfaceAutorotationDisabled;	// 457 = 0x1c9
    UIResponder *_selfHostingTrigger;	// 464 = 0x1d0
    NSMutableDictionary *_preservedViewSets;	// 472 = 0x1d8
    NSMutableDictionary *_persistentInputAccessoryResponders;	// 480 = 0x1e0
    NSMutableArray *_persistentInputAccessoryResponderOrder;	// 488 = 0x1e8
    _Bool _didFadeInputViews;	// 496 = 0x1f0
    _Bool _blockedReloadInputViewsForDictation;	// 497 = 0x1f1
    _Bool _allowNilResponderReload;	// 498 = 0x1f2
    _Bool _animateCornerRefresh;	// 499 = 0x1f3
    _Bool _showCorners;	// 500 = 0x1f4
    NSMutableArray *_extraViews;	// 504 = 0x1f8
    double _ambiguousControlCenterActivationMargin;	// 512 = 0x200
    UIResponder *_responderWithoutAutomaticAppearanceEnabled;	// 520 = 0x208
    int _hostedAnimationToggleCount;	// 528 = 0x210
    NSMutableDictionary *_deferredTransitionTasks;	// 536 = 0x218
    double _lastKeyplaneResize;	// 544 = 0x220
    _Bool _preservingInputViews;	// 552 = 0x228
    int _currentState;	// 556 = 0x22c
    UIKeyboardRotationState *_rotationState;	// 560 = 0x230
    UIInputViewSet *_transientInputViewSet;	// 568 = 0x238
    UITextInputMode *_documentInputMode;	// 576 = 0x240
    UIKBRenderConfig *_restorableRenderConfig;	// 584 = 0x248
}

+ (void)setKeyboardOnScreenNotifyKey:(_Bool)arg1;	// IMP=0x0000000000acbf99
+ (void)_releaseSharedInstance;	// IMP=0x0000000000acbf16
+ (id)activeInstance;	// IMP=0x0000000000acbf09
+ (id)sharedInstance;	// IMP=0x0000000000acbee4
+ (struct CGRect)screenBoundsInAppOrientation;	// IMP=0x0000000000acb45c
+ (id)endPlacementForInputViewSet:(id)arg1 windowScene:(id)arg2;	// IMP=0x0000000000ad5563
+ (id)passthroughViews;	// IMP=0x0000000000ad5355
+ (double)gridViewRubberBandValueForValue:(double)arg1 target:(double)arg2 timeInterval:(double)arg3 velocity:(double *)arg4;	// IMP=0x0000000000ad5306
+ (void)setFloating:(_Bool)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ad2376
+ (struct CGPoint)defaultUndockedOffset;	// IMP=0x0000000000ad233e
+ (void)adjustFloatingPersistentOffsetForKeyboardSize:(struct CGSize)arg1;	// IMP=0x0000000000ad2147
+ (struct UIEdgeInsets)floatingChromeBuffer;	// IMP=0x0000000000ad201d
+ (_Bool)pointIsWithinKeyboardContent:(struct CGPoint)arg1;	// IMP=0x0000000000ad1a43
+ (id)allVisiblePeripheralFrames;	// IMP=0x0000000000ad1686
+ (struct CGRect)visiblePeripheralFrame;	// IMP=0x0000000000ad15f5
+ (struct CGRect)visibleInputViewFrame;	// IMP=0x0000000000ad1564
+ (_Bool)inputViewSetContainsView:(id)arg1;	// IMP=0x0000000000ad1521
+ (Class)hostViewClass;	// IMP=0x0000000000ad10ec
@property(nonatomic) _Bool preservingInputViews; // @synthesize preservingInputViews=_preservingInputViews;
@property(retain, nonatomic) UIKBRenderConfig *restorableRenderConfig; // @synthesize restorableRenderConfig=_restorableRenderConfig;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) UITextInputMode *documentInputMode; // @synthesize documentInputMode=_documentInputMode;
@property(retain, nonatomic) UIInputViewPostPinningReloadState *postPinningReloadState; // @synthesize postPinningReloadState=_postPinningReloadState;
@property(retain, nonatomic) UIResponder *selfHostingTrigger; // @synthesize selfHostingTrigger=_selfHostingTrigger;
@property(retain, nonatomic) UIInputViewSet *_transientInputViews; // @synthesize _transientInputViews=_transientInputViewSet;
@property(retain, nonatomic) UIInputViewSet *_inputViews; // @synthesize _inputViews=_inputViewSet;
@property(nonatomic) double lastKeyplaneResize; // @synthesize lastKeyplaneResize=_lastKeyplaneResize;
@property(nonatomic) _Bool animationFencingEnabled; // @synthesize animationFencingEnabled=_animationFencingEnabled;
@property(retain, nonatomic) UIResponder *responder; // @synthesize responder=_responder;
@property(retain, nonatomic) UIKeyboardRotationState *rotationState; // @synthesize rotationState=_rotationState;
@property(nonatomic) _Bool automaticAppearanceEnabled; // @synthesize automaticAppearanceEnabled=_automaticAppearanceEnabled;
- (void)setAccessoryViewVisible:(_Bool)arg1 delay:(double)arg2;	// IMP=0x0000000000ace40f
- (id)nextAnimationStyle:(_Bool)arg1;	// IMP=0x0000000000ace37a
- (id)nextAnimationStyle;	// IMP=0x0000000000ace363
- (void)orderOutWithAnimation:(_Bool)arg1 toDirection:(int)arg2 duration:(double)arg3;	// IMP=0x0000000000ace30b
- (void)orderOutWithAnimationStyle:(id)arg1;	// IMP=0x0000000000ace2ac
- (void)orderOutAutomaticExceptAccessoryView;	// IMP=0x0000000000ace181
- (void)orderInWithAnimationStyle:(id)arg1;	// IMP=0x0000000000acdfed
- (void)orderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2;	// IMP=0x0000000000acdf58
- (void)orderOutAutomaticSkippingAnimation;	// IMP=0x0000000000acdecc
- (void)orderOutAutomatic;	// IMP=0x0000000000acde54
- (void)orderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2;	// IMP=0x0000000000acddbf
- (void)orderInAutomaticSkippingAnimation;	// IMP=0x0000000000acdd33
- (void)orderInAutomatic;	// IMP=0x0000000000acdcbb
- (void)forceOrderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2;	// IMP=0x0000000000acdc73
- (void)forceOrderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2;	// IMP=0x0000000000acdc2b
- (void)forceOrderOutAutomaticAnimated:(_Bool)arg1;	// IMP=0x0000000000acdbf5
- (void)forceOrderInAutomaticAnimated:(_Bool)arg1;	// IMP=0x0000000000acdbbf
- (void)forceOrderOutAutomatic;	// IMP=0x0000000000acdb88
- (void)forceOrderInAutomatic;	// IMP=0x0000000000acdb51
- (void)layoutIfNeeded;	// IMP=0x0000000000acdb1a
- (void)layoutInputViews;	// IMP=0x0000000000acd45b
@property(readonly, nonatomic) UIKeyboardAutomatic *automaticKeyboard;
- (void)createAutomaticKeyboardIfNeeded;	// IMP=0x0000000000acd380
@property(readonly, nonatomic) _Bool animationsEnabled;
- (id)_sceneForFirstResponder:(id)arg1;	// IMP=0x0000000000acd2ab
- (void)finishRotationOfKeyboard:(id)arg1;	// IMP=0x0000000000acd1bb
- (void)rotateKeyboard:(id)arg1 toOrientation:(long long)arg2;	// IMP=0x0000000000acd0b9
- (void)prepareForRotationOfKeyboard:(id)arg1 toOrientation:(long long)arg2;	// IMP=0x0000000000accee7
- (void)finishRotation;	// IMP=0x0000000000accea9
- (void)rotateToOrientation:(long long)arg1;	// IMP=0x0000000000acce5c
- (void)prepareForRotationToOrientation:(long long)arg1;	// IMP=0x0000000000acce0f
- (void)updateBackdrop;	// IMP=0x0000000000accc5e
- (void)disableInterfaceAutorotation:(_Bool)arg1;	// IMP=0x0000000000accbed
- (void)showInputViewsIfNeeded;	// IMP=0x0000000000accb9a
- (void)fadeInputViewsIfNeeded;	// IMP=0x0000000000accb2f
- (void)fadeInInputViews:(_Bool)arg1;	// IMP=0x0000000000acc927
- (_Bool)isUndocked;	// IMP=0x0000000000acc8ba
- (void)postKeyboardFrameChangeNotification:(id)arg1 withInfo:(id)arg2;	// IMP=0x0000000000acc796
- (id)undockedInfoFromDefaultInfo:(id)arg1 forNotification:(id)arg2;	// IMP=0x0000000000acc78d
- (void)postDidHideNotification;	// IMP=0x0000000000acc685
- (void)postDidShowNotification;	// IMP=0x0000000000acc558
@property(retain, nonatomic) UIPeripheralHostState *targetState;
- (void)manualKeyboardWasOrderedOut:(id)arg1;	// IMP=0x0000000000acc43d
- (void)manualKeyboardWillBeOrderedOut:(id)arg1;	// IMP=0x0000000000acc3c2
- (void)manualKeyboardWasOrderedIn:(id)arg1;	// IMP=0x0000000000acc347
- (void)manualKeyboardWillBeOrderedIn:(id)arg1;	// IMP=0x0000000000acc2cc
- (_Bool)isOffScreen;	// IMP=0x0000000000acc2b3
- (_Bool)isOnScreen;	// IMP=0x0000000000acc29a
- (void)setKeyboardFencingEnabled:(_Bool)arg1;	// IMP=0x0000000000acc264
- (void)_onScreenStateDidChange;	// IMP=0x0000000000acc20c
- (void)setKeyboardOnScreenNotifyKey:(_Bool)arg1;	// IMP=0x0000000000acc0ff
- (id)retain;	// IMP=0x0000000000acbf6a
- (void)updateRenderConfigForResponder:(id)arg1;	// IMP=0x0000000000acbd37
- (void)updateRenderConfigForCurrentResponder;	// IMP=0x0000000000acbd06
- (void)inputModeChangedForRenderConfig:(id)arg1;	// IMP=0x0000000000acbc54
- (id)_renderConfigForResponder:(id)arg1;	// IMP=0x0000000000acbba6
- (id)_renderConfigForCurrentResponder;	// IMP=0x0000000000acbb75
- (struct CGSize)sizeOfInputViewForInputViewSet:(id)arg1 withInterfaceOrientation:(long long)arg2;	// IMP=0x0000000000acbb0f
- (void)textEffectsWindowDidRotate:(id)arg1;	// IMP=0x0000000000acba11
- (void)peripheralHostWillResume:(id)arg1;	// IMP=0x0000000000acb821
- (_Bool)hasDictationKeyboard;	// IMP=0x0000000000acb7d5
- (void)dealloc;	// IMP=0x0000000000acb6a8
- (id)init;	// IMP=0x0000000000acb4f1
@property(readonly, nonatomic) _Bool automaticAppearanceReallyEnabled;
- (void)setInputViewsHidden:(_Bool)arg1;	// IMP=0x0000000000acf541
- (void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(_Bool)arg2;	// IMP=0x0000000000acf501
- (struct CGRect)transitioningFrame;	// IMP=0x0000000000acf4b8
- (id)contentView;	// IMP=0x0000000000acf4a6
- (id)transitioningView;	// IMP=0x0000000000acf47b
- (id)viewForTransitionScreenSnapshot;	// IMP=0x0000000000acf469
- (void)postDidHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1;	// IMP=0x0000000000acf38f
- (void)postWillHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1 duration:(double)arg2;	// IMP=0x0000000000acf24a
- (id)userInfoFromGeometry:(struct UIPeripheralAnimationGeometry)arg1 duration:(double)arg2 forWill:(_Bool)arg3 forShow:(_Bool)arg4;	// IMP=0x0000000000aceb84
- (struct CGRect)screenRectFromBounds:(struct CGRect)arg1 atCenter:(struct CGPoint)arg2 applyingSourceHeightDelta:(double)arg3;	// IMP=0x0000000000acea6a
- (_Bool)userInfoContainsActualGeometryChange:(id)arg1;	// IMP=0x0000000000ace98d
- (void)logGeometryDescriptionFromUserInfo:(id)arg1;	// IMP=0x0000000000ace987
- (struct CGSize)totalPeripheralSizeForOrientation:(long long)arg1;	// IMP=0x0000000000ace82f
- (_Bool)isHostingActiveImpl;	// IMP=0x0000000000ace79a
- (_Bool)hasCustomInputView;	// IMP=0x0000000000ace73c
- (void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2;	// IMP=0x0000000000ad54fd
- (void)scrollView:(id)arg1 didPanWithGesture:(id)arg2;	// IMP=0x0000000000ad5497
- (_Bool)_shouldDelayRotationForWindow:(id)arg1;	// IMP=0x0000000000ad5448
- (_Bool)_isAccessoryViewChangedOnly;	// IMP=0x0000000000ad5440
- (_Bool)_isTransitioning;	// IMP=0x0000000000ad5415
- (id)_inheritedRenderConfig;	// IMP=0x0000000000ad540d
- (void)updateInputAccessoryViewVisibility:(_Bool)arg1 withDuration:(double)arg2;	// IMP=0x0000000000ad52c5
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;	// IMP=0x0000000000ad5283
- (_Bool)isSplitting;	// IMP=0x0000000000ad527a
- (_Bool)isTranslating;	// IMP=0x0000000000ad524f
- (_Bool)isRotating;	// IMP=0x0000000000ad5224
- (void)_endDisablingAnimations;	// IMP=0x0000000000ad51eb
- (void)_beginDisablingAnimations;	// IMP=0x0000000000ad51b0
- (void)_resignFirstResponderIfHostingOnBehalfOfResponder:(id)arg1;	// IMP=0x0000000000ad5097
- (_Bool)_hostFirstResponder:(id)arg1 onBehalfOfResponder:(id)arg2;	// IMP=0x0000000000ad5054
- (_Bool)_isSelfHosting;	// IMP=0x0000000000ad504c
- (void)performWithAllowingNilResponderReload:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ad5028
- (void)_endPersistingInputAccessoryViewWithId:(id)arg1;	// IMP=0x0000000000ad4f48
- (void)_beginPersistingInputAccessoryViewForResponder:(id)arg1 withId:(id)arg2;	// IMP=0x0000000000ad4e1c
- (void)removePreservedInputViewSetForInputView:(id)arg1;	// IMP=0x0000000000ad4de4
- (void)_clearPreservedInputViewsWithRestorableResponder:(id)arg1;	// IMP=0x0000000000ad4dac
- (void)_clearPreservedInputViewsWithId:(id)arg1 clearKeyboard:(_Bool)arg2;	// IMP=0x0000000000ad4d65
- (_Bool)_restoreInputViewsWithId:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000ad4d1e
- (void)_restoreInputAccessoryViewOverrideWithId:(id)arg1;	// IMP=0x0000000000ad4ce6
- (void)_preserveInputViewsWithId:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000ad4cce
- (void)_preserveInputViewsWithId:(id)arg1;	// IMP=0x0000000000ad4cb7
- (void)_preserveInputViewsWithId:(id)arg1 animated:(_Bool)arg2 reset:(_Bool)arg3;	// IMP=0x0000000000ad4c51
- (void)_clearMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2;	// IMP=0x0000000000ad4bcc
- (_Bool)_restoreMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2;	// IMP=0x0000000000ad4a40
- (_Bool)_preserveMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 reset:(_Bool)arg3;	// IMP=0x0000000000ad49ad
@property(readonly, nonatomic) _Bool keyClicksEnabled;
- (_Bool)_isSuppressedByManualKeyboard;	// IMP=0x0000000000ad4803
- (id)_inputViewsForResponder:(id)arg1 withAutomaticKeyboard:(_Bool)arg2;	// IMP=0x0000000000ad4337
- (id)_inputViewsForResponder:(id)arg1;	// IMP=0x0000000000ad42f7
- (id)_currentInputView;	// IMP=0x0000000000ad42cc
@property(retain, nonatomic) UIInputViewSet *inputViews;
- (void)setInputViews:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000ad424a
- (void)setInputViews:(id)arg1 animationStyle:(id)arg2;	// IMP=0x0000000000ad3b13
- (_Bool)shouldApplySettingsForBackdropView:(id)arg1;	// IMP=0x0000000000ad3afe
- (void)enableKeyboardTyping;	// IMP=0x0000000000ad3ac2
@property(readonly, nonatomic) UIInputViewSet *loadAwareInputViews;
- (void)implBoundsHeightChangeDoneForGeometry:(struct UIPeripheralAnimationGeometry)arg1;	// IMP=0x0000000000ad3a33
- (void)peripheralViewMinMaximized:(_Bool)arg1 state:(id)arg2;	// IMP=0x0000000000ad38d8
- (_Bool)maximizeWithAnimation:(_Bool)arg1;	// IMP=0x0000000000ad38a1
- (_Bool)maximize;	// IMP=0x0000000000ad388a
- (_Bool)minimize;	// IMP=0x0000000000ad3858
- (void)prepareToMoveKeyboardForInputViewSet:(id)arg1 animationStyle:(id)arg2;	// IMP=0x0000000000ad36a4
- (void)performMultipleOperations:(CDUnknownBlockType)arg1 withAnimationStyle:(id)arg2;	// IMP=0x0000000000ad3382
- (void)postDidShowNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1;	// IMP=0x0000000000ad31c0
- (void)postWillShowNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1 duration:(double)arg2;	// IMP=0x0000000000ad2f79
- (_Bool)shouldUseHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1;	// IMP=0x0000000000ad2ecd
- (void)resetNextAutomaticOrderInDirectionAndDuration;	// IMP=0x0000000000ad2eae
- (void)setNextAutomaticOrderInDirection:(int)arg1 duration:(double)arg2;	// IMP=0x0000000000ad2e8c
- (void)prepareForAlongsideTransitionWithContext:(id)arg1;	// IMP=0x0000000000ad2dc8
- (void)popAnimationStyle;	// IMP=0x0000000000ad2d85
- (void)pushAnimationStyle:(id)arg1;	// IMP=0x0000000000ad2d65
- (id)topAnimationStyle;	// IMP=0x0000000000ad2d4e
- (void)setkeyboardAttachedViewHeight:(double)arg1;	// IMP=0x0000000000ad2d40
- (double)keyboardAttachedViewHeight;	// IMP=0x0000000000ad2ccd
- (double)getLastAutomaticDuration;	// IMP=0x0000000000ad2cbf
- (void)resetCurrentOrderOutAnimationDuration:(double)arg1;	// IMP=0x0000000000ad2cb9
- (double)getVerticalOverlapForView:(id)arg1 usingKeyboardInfo:(id)arg2;	// IMP=0x0000000000ad2a27
- (struct CGPoint)offHostPointForPoint:(struct CGPoint)arg1;	// IMP=0x0000000000ad27c8
- (_Bool)_isCoordinatingWithSystemGestures;	// IMP=0x0000000000ad2701
@property(nonatomic) double ambiguousControlCenterActivationMargin;
- (struct CGRect)_inputViewRectToAvoid;	// IMP=0x0000000000ad2568
- (unsigned long long)_clipCornersOfView:(id)arg1;	// IMP=0x0000000000ad24a6
- (void)moveToPersistentOffset;	// IMP=0x0000000000ad2404
- (void)setUndockedWithOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000ad1c96
- (struct CGPoint)adjustedPersistentOffset;	// IMP=0x0000000000ad1c16
- (double)minimumOffsetForBuffer:(double)arg1;	// IMP=0x0000000000ad1b38
- (struct CGRect)visiblePeripheralFrame:(_Bool)arg1;	// IMP=0x0000000000ad1188
@property(readonly, nonatomic, getter=_isIgnoringReloadInputViews) _Bool ignoringReloadInputViews;
- (int)_endIgnoringReloadInputViews;	// IMP=0x0000000000ad116b
- (void)_beginIgnoringReloadInputViews;	// IMP=0x0000000000ad1152
@property(nonatomic) _Bool automaticAppearanceInternalEnabled;
@property(retain, nonatomic) NSDate *_transitionStartTime;
@property(readonly, nonatomic) UIView *view;
- (id)lastUsedInputModeForCurrentContext;	// IMP=0x0000000000ad105c
- (_Bool)_isTrackingResponder:(id)arg1;	// IMP=0x0000000000ad0fe5
@property(nonatomic) _Bool ignoresPinning;
- (void)_setIgnoresPinning:(_Bool)arg1 allowImmediateReload:(_Bool)arg2;	// IMP=0x0000000000ad0f4f
- (_Bool)_hasPostPinningReloadState;	// IMP=0x0000000000ad0f14
- (_Bool)_isPinningInputViewsOnBehalfOfResponder:(id)arg1;	// IMP=0x0000000000ad0efb
- (void)_pinInputViewsOnBehalfOfResponder:(id)arg1 duringBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ad0ea2
- (void)_stopPinningInputViewsOnBehalfOfResponder:(id)arg1;	// IMP=0x0000000000ad0dd4
- (void)_beginPinningInputViewsOnBehalfOfResponder:(id)arg1;	// IMP=0x0000000000ad0dbb
- (void)_clearPinningResponders;	// IMP=0x0000000000ad0d84
- (void)_setHosted:(_Bool)arg1;	// IMP=0x0000000000ad0d66
- (void)performWithoutDeactivation:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ad0c7e
- (int)_isKeyboardDeactivated;	// IMP=0x0000000000ad0c4c
- (void)setDeactivatedKeyboard:(_Bool)arg1 forScene:(id)arg2;	// IMP=0x0000000000ad08f4
- (void)forceReloadInputViews;	// IMP=0x0000000000ad08af
- (void)_reloadInputViewsForResponder:(id)arg1;	// IMP=0x0000000000acfcf3
- (void)setTextEffectsWindowLevelForInputView:(id)arg1 responder:(id)arg2;	// IMP=0x0000000000acfb77
- (void)_updateContainerWindowLevel;	// IMP=0x0000000000acfb2a
- (void)_setReloadInputViewsForcedIsAllowed:(_Bool)arg1;	// IMP=0x0000000000acfb21
- (void)prepareForPinning;	// IMP=0x0000000000acfacd
- (_Bool)pinningPreventsInputViews:(id)arg1;	// IMP=0x0000000000acfa53
- (id)containerTextEffectsWindowAboveStatusBar;	// IMP=0x0000000000acfa28
- (id)containerTextEffectsWindow;	// IMP=0x0000000000acf9f0
- (_Bool)hasDelayedTasksForKey:(id)arg1;	// IMP=0x0000000000acf9d0
- (void)flushDelayedTasksForKey:(id)arg1;	// IMP=0x0000000000acf969
- (void)flushDelayedTasks;	// IMP=0x0000000000acf92e
- (void)queueDelayedTask:(CDUnknownBlockType)arg1 forKey:(id)arg2;	// IMP=0x0000000000acf6f4
- (void)queueDelayedTask:(CDUnknownBlockType)arg1;	// IMP=0x0000000000acf6aa
- (id)transformedContainerView;	// IMP=0x0000000000acf664
- (id)existingContainerRootController;	// IMP=0x0000000000acf632
- (id)containerRootController;	// IMP=0x0000000000acf600
- (id)containerWindow;	// IMP=0x0000000000acf5ce
- (id)_screenForFirstResponder:(id)arg1;	// IMP=0x0000000000acf570

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
