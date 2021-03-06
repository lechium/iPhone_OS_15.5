//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIActivityItemsConfigurationProviding-Protocol.h>
#import <UIKitCore/UIResponderStandardEditActions-Protocol.h>
#import <UIKitCore/UITextInputAdditions-Protocol.h>
#import <UIKitCore/UITextInput_Internal-Protocol.h>
#import <UIKitCore/UIUserActivityRestoring-Protocol.h>
#import <UIKitCore/_UIPressesEventRespondable-Protocol.h>
#import <UIKitCore/_UIStateRestorationContinuation-Protocol.h>
#import <UIKitCore/_UITouchesEventRespondable-Protocol.h>

@class NSArray, NSString, NSUndoManager, NSUserActivity, UIInputViewController, UITextInputAssistantItem, UITextInputMode, UIView;
@protocol UIActivityItemsConfigurationReading, UITextInput, UITextInputPrivate, _UICopyConfigurationReading;

@interface UIResponder : NSObject <UIActivityItemsConfigurationProviding, UITextInput_Internal, UITextInputAdditions, UIUserActivityRestoring, _UIStateRestorationContinuation, _UITouchesEventRespondable, _UIPressesEventRespondable, UIResponderStandardEditActions>
{
    struct {
        unsigned int hasOverrideClient:1;
        unsigned int hasOverrideHost:1;
        unsigned int hasInputAssistantItem:1;
        unsigned int suppressSoftwareKeyboard:1;
        unsigned int conformsToUIKeyInputIsSet:1;
        unsigned int conformsToUIKeyInput:1;
    } _responderFlags;	// 8 = 0x8
}

+ (_Bool)_callResignFirstResponder:(id)arg1 withIntent:(unsigned long long)arg2;	// IMP=0x0000000000d135d0
+ (_Bool)_callBecomeFirstResponder:(id)arg1 withIntent:(unsigned long long)arg2;	// IMP=0x0000000000d13502
+ (unsigned long long)_currentChangeIntent;	// IMP=0x0000000000d13474
+ (void)clearTextInputContextIdentifier:(id)arg1;	// IMP=0x0000000000d17a27
+ (void)_finishStateRestoration;	// IMP=0x0000000000da995d
+ (void)_cleanupAllStateRestorationTables;	// IMP=0x0000000000da9919
+ (void)_prepareForSecondPassStateRestoration;	// IMP=0x0000000000da9907
+ (void)_cleanupStateRestorationObjectIdentifierTrackingTables;	// IMP=0x0000000000da98d0
+ (void)_setRestoredIdentifierPathForObject:(id)arg1 identifierPath:(id)arg2;	// IMP=0x0000000000da97e5
+ (void)_updateStateRestorationIdentifierMap;	// IMP=0x0000000000da9737
+ (void)_stopDeferredTrackingObjectsWithIdentifiers;	// IMP=0x0000000000da972a
+ (void)_startDeferredTrackingObjectsWithIdentifiers;	// IMP=0x0000000000da971d
+ (id)objectWithRestorationIdentifierPath:(id)arg1;	// IMP=0x0000000000da9491
- (id)_textInteraction;	// IMP=0x0000000000d1742d
@property(readonly, nonatomic) long long editingInteractionConfiguration;
- (void)_setDataOwnerForPaste:(long long)arg1;	// IMP=0x0000000000d173d5
- (long long)_dataOwnerForPaste;	// IMP=0x0000000000d1731e
- (void)_setDataOwnerForCopy:(long long)arg1;	// IMP=0x0000000000d172d1
- (long long)_dataOwnerForCopy;	// IMP=0x0000000000d1721a
- (void)_setDropDataOwner:(long long)arg1;	// IMP=0x0000000000d171cd
- (long long)_dropDataOwner;	// IMP=0x0000000000d17116
- (void)_setDragDataOwner:(long long)arg1;	// IMP=0x0000000000d170c9
- (long long)_dragDataOwner;	// IMP=0x0000000000d17012
- (_Bool)canPasteItemProviders:(id)arg1;	// IMP=0x0000000000d16daa
- (void)pasteItemProviders:(id)arg1;	// IMP=0x0000000000d16ce2
- (void)setPasteConfiguration:(id)arg1;	// IMP=0x0000000000d16ca1
- (id)pasteConfiguration;	// IMP=0x0000000000d16c90
- (id)_effectivePasteConfiguration;	// IMP=0x0000000000d16c7f
- (void)_checkIsText:(_Bool *)arg1 isSecure:(_Bool *)arg2 isEditable:(_Bool *)arg3 isFormatted:(_Bool *)arg4;	// IMP=0x0000000000d16b3b
- (struct CGRect)_rectToScrollToVisibleInCellInWindow:(id)arg1;	// IMP=0x0000000000d16b1d
- (_Bool)_shouldRestorationInputViewsOnlyWhenKeepingFirstResponder;	// IMP=0x0000000000d16b15
- (_Bool)_supportsBecomeFirstResponderWhenPossible;	// IMP=0x0000000000d16b0d
- (_Bool)_canBecomeFirstResponderWhenPossible;	// IMP=0x0000000000d16afb
- (_Bool)_becomeFirstResponderWhenPossible;	// IMP=0x0000000000d16af3
- (id)_responderForBecomeFirstResponder;	// IMP=0x0000000000d16aea
- (id)_firstResponder;	// IMP=0x0000000000d16a9a
- (void)_setFirstResponder:(id)arg1;	// IMP=0x0000000000d16a08
- (void)_didChangeToFirstResponder:(id)arg1;	// IMP=0x0000000000d16a02
- (void)_willChangeToFirstResponder:(id)arg1;	// IMP=0x0000000000d169fc
- (_Bool)_canChangeFirstResponder:(id)arg1 toResponder:(id)arg2;	// IMP=0x0000000000d16966
- (id)_responderSelectionImage;	// IMP=0x0000000000d16769
- (id)_responderSelectionContainerViewForResponder:(id)arg1;	// IMP=0x0000000000d166e6
- (struct CGRect)_responderExternalTouchRectForWindow:(id)arg1;	// IMP=0x0000000000d166a5
- (struct CGRect)_responderSelectionRectForWindow:(id)arg1;	// IMP=0x0000000000d16687
- (id)_primaryContentResponder;	// IMP=0x0000000000d16637
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d1662d
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d16623
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d16619
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d1660f
- (void)_moveWithEvent:(id)arg1;	// IMP=0x0000000000d16605
- (id)_showServiceForText:(id)arg1 selectedTextRange:(struct _NSRange)arg2 type:(long long)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5;	// IMP=0x0000000000d1653d
- (id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;	// IMP=0x0000000000d16488
- (id)_showServiceForType:(long long)arg1 withContext:(id)arg2;	// IMP=0x0000000000d163ff
- (_Bool)_canShowTextServiceForType:(long long)arg1;	// IMP=0x0000000000d163d9
- (long long)_availableTextServices;	// IMP=0x0000000000d16395
- (_Bool)_isView;	// IMP=0x0000000000d1638d
- (_Bool)_isViewController;	// IMP=0x0000000000d16385
- (void)_completeForwardingTouches:(id)arg1 phase:(long long)arg2 event:(id)arg3;	// IMP=0x0000000000d16370
- (void)_completeForwardingTouches:(id)arg1 phase:(long long)arg2 event:(id)arg3 index:(unsigned long long)arg4;	// IMP=0x0000000000d15e94
- (_Bool)_isTransitioningFromView:(id)arg1;	// IMP=0x0000000000d15e41
- (void)_windowResignedKey;	// IMP=0x0000000000d15e3b
- (void)_windowBecameKey;	// IMP=0x0000000000d15d38
- (id)nextFirstResponder;	// IMP=0x0000000000d15c83
- (_Bool)_wantsPriorityOverFocusUpdates;	// IMP=0x0000000000d15c3f
- (void)_handleGameControllerEvent:(id)arg1;	// IMP=0x0000000000d15bcd
- (void)_handleKeyUIEvent:(id)arg1;	// IMP=0x0000000000d15b5b
- (void)_handleKeyEvent:(struct __GSEvent *)arg1;	// IMP=0x0000000000d15b0f
- (_Bool)_isPinningInputViews;	// IMP=0x0000000000d15a30
- (void)_endPinningInputViews;	// IMP=0x0000000000d159be
- (void)_beginPinningInputViews;	// IMP=0x0000000000d15903
- (_Bool)_nextResponderChainContainsResponder:(id)arg1;	// IMP=0x0000000000d157f8
- (id)_nextResponderThatCanBecomeFirstResponder;	// IMP=0x0000000000d15761
- (void)_becomeFirstResponderAndMakeVisible;	// IMP=0x0000000000d1574f
- (_Bool)_canBecomeFirstResponder;	// IMP=0x0000000000d1571b
- (void)_resignFirstResponder;	// IMP=0x0000000000d15707
- (void)_becomeFirstResponder;	// IMP=0x0000000000d156f2
- (void)_nonDestructivelyResignFirstResponder;	// IMP=0x0000000000d156e0
- (_Bool)_resignIfContainsFirstResponder;	// IMP=0x0000000000d15579
- (_Bool)_canResignIfContainsFirstResponder;	// IMP=0x0000000000d15571
- (id)_responderWindow;	// IMP=0x0000000000d15521
- (id)_keyboardResponder;	// IMP=0x0000000000d15518
- (_Bool)_requiresKeyboardResetOnReload;	// IMP=0x0000000000d15510
- (_Bool)_requiresKeyboardWindowWhenFirstResponder;	// IMP=0x0000000000d154fe
- (_Bool)_requiresKeyboardWhenFirstResponder;	// IMP=0x0000000000d15482
- (_Bool)_conformsToProtocolUIKeyInput;	// IMP=0x0000000000d1542b
- (_Bool)_enableAutomaticKeyboardPressDone;	// IMP=0x0000000000d153e7
- (_Bool)_disableAutomaticKeyboardUI;	// IMP=0x0000000000d153a3
- (_Bool)_disableAutomaticKeyboardBehavior;	// IMP=0x0000000000d1535f
- (void)_enumerateKeyCommandsInChainWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000d143ee
- (id)_keyCommandForEvent:(id)arg1 target:(out id *)arg2;	// IMP=0x0000000000d13faa
- (id)_keyCommandForEvent:(id)arg1;	// IMP=0x0000000000d13f96
- (id)_keyCommands;	// IMP=0x0000000000d13f84
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d13f7a
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d13f70
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d13eb2
- (id)_window;	// IMP=0x0000000000d13e62
- (id)recentsAccessoryView;	// IMP=0x0000000000d13e12
- (_Bool)_ownsInputAccessoryView;	// IMP=0x0000000000d13d83
- (void)_tagAsRestorableResponder;	// IMP=0x0000000000d13d66
- (void)_clearRestorableResponderStatus;	// IMP=0x0000000000d13ca4
- (id)_nextResponderOverride;	// IMP=0x0000000000d13c4b
- (void)_overrideNextResponderWithResponder:(id)arg1 forType:(long long)arg2;	// IMP=0x0000000000d13b93
- (void)_overrideInputAccessoryViewNextResponderWithResponder:(id)arg1;	// IMP=0x0000000000d13b7c
- (void)_overrideInputViewNextResponderWithResponder:(id)arg1;	// IMP=0x0000000000d13b65
- (void)_clearOverrideNextResponder;	// IMP=0x0000000000d13b04
- (void)_preserveResponderOverridesWhilePerforming:(CDUnknownBlockType)arg1;	// IMP=0x0000000000d139fc
- (void)_restoreOverrideState:(id)arg1;	// IMP=0x0000000000d138a4
- (id)_captureOverrideState;	// IMP=0x0000000000d137ac
- (void)_clearOverrideHost;	// IMP=0x0000000000d13769
- (id)_overrideHost;	// IMP=0x0000000000d136f4
- (id)_currentOverrideHost;	// IMP=0x0000000000d136c9
- (id)_currentOverrideClient;	// IMP=0x0000000000d1369e
- (void)_notifyFocusEngine;	// IMP=0x0000000000d133d7
- (_Bool)_restoreFirstResponder;	// IMP=0x0000000000d133c5
- (void)updateTextAttributesWithConversionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000d133bf
@property(readonly, nonatomic) NSUndoManager *undoManager;
- (void)doesNotRecognizeSelector:(SEL)arg1;	// IMP=0x0000000000d131cd
- (void)_addShortcut:(id)arg1;	// IMP=0x0000000000d13155
- (void)_share:(id)arg1;	// IMP=0x0000000000d130d5
- (void)_translate:(id)arg1;	// IMP=0x0000000000d1305d
- (void)_lookup:(id)arg1;	// IMP=0x0000000000d12fe5
- (void)_define:(id)arg1;	// IMP=0x0000000000d12f6d
- (void)validateCommand:(id)arg1;	// IMP=0x0000000000d12f67
- (void)buildMenuWithBuilder:(id)arg1;	// IMP=0x0000000000d12f61
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000d12f47
- (id)_targetCanPerformBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000d12e88
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000d12c67
- (id)_textServicesResponderProxy;	// IMP=0x0000000000d12bd3
- (void)_clearBecomeFirstResponderWhenCapable;	// IMP=0x0000000000d12bcd
- (id)firstResponder;	// IMP=0x0000000000d12b7d
@property(readonly, nonatomic) _Bool isFirstResponder;
@property(readonly, nonatomic) _Bool canResignFirstResponder;
- (_Bool)resignFirstResponder;	// IMP=0x0000000000d12951
- (_Bool)_finishResignFirstResponder;	// IMP=0x0000000000d126f9
@property(readonly, nonatomic) _Bool canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000d1228c
- (_Bool)_containsResponder:(id)arg1;	// IMP=0x0000000000d1220b
- (_Bool)_containedInAbsoluteResponderChain;	// IMP=0x0000000000d121c7
- (id)_responderForEditing;	// IMP=0x0000000000d12182
@property(readonly, nonatomic) UIResponder *_editingDelegate;
- (void)_gatherKeyResponders:(id)arg1 indexOfSelf:(unsigned long long *)arg2 visibilityTest:(CDUnknownBlockType)arg3 passingTest:(CDUnknownBlockType)arg4 subviewsTest:(CDUnknownBlockType)arg5;	// IMP=0x0000000000d12174
- (_Bool)_isRootForKeyResponderCycle;	// IMP=0x0000000000d1216c
- (id)_previousKeyResponder;	// IMP=0x0000000000d12164
- (id)_nextKeyResponder;	// IMP=0x0000000000d1215c
@property(readonly, nonatomic) UIResponder *nextResponder;
- (void)gestureChanged:(struct __GSEvent *)arg1;	// IMP=0x0000000000d1214a
- (void)gestureEnded:(struct __GSEvent *)arg1;	// IMP=0x0000000000d12140
- (void)gestureStarted:(struct __GSEvent *)arg1;	// IMP=0x0000000000d12136
- (void)scrollWheel:(struct __GSEvent *)arg1;	// IMP=0x0000000000d1212c
- (void)_wheelChangedWithEvent:(id)arg1;	// IMP=0x0000000000d12122
- (void)remoteControlReceivedWithEvent:(id)arg1;	// IMP=0x0000000000d12118
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d1210e
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d12104
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d12054
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;	// IMP=0x0000000000d11fac
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d11fa2
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d11f98
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d11f8e
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d11dec
- (void)dealloc;	// IMP=0x0000000000d11d50
- (_Bool)__isKindOfUIResponder;	// IMP=0x0000000000d11d48
- (_Bool)_shouldForwardMovementToFocusEngine:(long long)arg1;	// IMP=0x0000000000074bd9
- (_Bool)_shouldSkipKeyCommand:(id)arg1 forMovement:(long long)arg2;	// IMP=0x0000000000074b70
- (_Bool)_allowsChangingFirstResponderForFocusUpdateWithContext:(id)arg1;	// IMP=0x0000000000074b68
- (void)_didChangeDeepestUnambiguousResponder;	// IMP=0x00000000003bbad6
- (id)_deepestUnambiguousResponder;	// IMP=0x00000000003bbac4
- (void)_didChangeDeepestActionResponder;	// IMP=0x00000000003bbaa5
- (id)_deepestActionResponder;	// IMP=0x00000000003bba9c
- (id)_nextResponderUsingTraversalStrategy:(unsigned long long)arg1;	// IMP=0x00000000003bba8a
- (_Bool)_handleActivityItemsConfigurationShare:(id)arg1;	// IMP=0x000000000067bbd0
- (_Bool)_handleActivityItemsConfigurationDoesNotHandleSelector:(SEL)arg1;	// IMP=0x000000000067ba67
- (_Bool)_handleActivityItemsConfigurationCanPerformAction:(SEL)arg1 sender:(id)arg2;	// IMP=0x000000000067b92a
- (id)_firstNonnullActivityItemsConfigurationInResponderChainForLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2 skipPresentingViewControllers:(_Bool)arg3 sender:(id)arg4 target:(id *)arg5;	// IMP=0x000000000067b6c4
- (id)_firstNonnullActivityItemsConfigurationInResponderChainForView:(id)arg1 location:(struct CGPoint)arg2 sender:(id)arg3 responder:(id *)arg4;	// IMP=0x000000000067b6a4
@property(retain, nonatomic) id <UIActivityItemsConfigurationReading> activityItemsConfiguration;
- (id)_effectiveActivityItemsConfigurationAtLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2 sender:(id)arg3;	// IMP=0x000000000067b485
- (id)_effectiveActivityItemsConfigurationForView:(id)arg1 location:(struct CGPoint)arg2 sender:(id)arg3;	// IMP=0x000000000067b473
- (id)_effectiveActivityItemsConfiguration;	// IMP=0x000000000067b461
- (id)_effectiveActivityItemsConfigurationForSender:(id)arg1;	// IMP=0x000000000067b3e7
- (id)_selectableText;	// IMP=0x0000000000b69179
@property(readonly, nonatomic) UIView<UITextInputPrivate> *_textSelectingContainer;
- (struct CGRect)_lastRectForRange:(id)arg1;	// IMP=0x0000000000b69047
- (long long)selectionAffinity;	// IMP=0x0000000000b6903f
- (_Bool)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(_Bool)arg3;	// IMP=0x0000000000b68f90
- (void)_unmarkText;	// IMP=0x0000000000b68f2a
- (void)_setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000000b68d2a
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000000b68cbf
- (_Bool)_hasMarkedText;	// IMP=0x0000000000b68c64
- (_Bool)_usesAsynchronousProtocol;	// IMP=0x0000000000b68c32
- (void)_setGestureRecognizers;	// IMP=0x0000000000b6894d
- (long long)_selectionAffinity;	// IMP=0x0000000000b68854
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(_Bool)arg2;	// IMP=0x0000000000b687e4
- (id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(_Bool)arg4;	// IMP=0x0000000000b6879f
- (id)_moveRight:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b6866f
- (id)_moveLeft:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b6853f
- (id)_moveDown:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b68327
- (id)_moveUp:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b6810f
- (id)_moveToEndOfDocument:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b67fe5
- (id)_moveToStartOfDocument:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b67f02
- (id)_moveToEndOfParagraph:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b67d83
- (id)_moveToStartOfParagraph:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b67bf8
- (id)_moveToEndOfLine:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b67a2a
- (id)_moveToStartOfLine:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b67850
- (id)_moveToEndOfWord:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b67672
- (id)_moveToStartOfWord:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b6731b
- (id)_setHistory:(id)arg1 withExtending:(_Bool)arg2 withAnchor:(int)arg3 withAffinityDownstream:(_Bool)arg4;	// IMP=0x0000000000b6714a
- (id)_setSelectionRangeWithHistory:(id)arg1;	// IMP=0x0000000000b66eec
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(_Bool)arg2;	// IMP=0x0000000000b66eac
- (id)_fontForCaretSelection;	// IMP=0x0000000000b66dc2
- (id)_textColorForCaretSelection;	// IMP=0x0000000000b66cd8
- (id)_rangeFromCurrentRangeWithDelta:(struct _NSRange)arg1;	// IMP=0x0000000000b66bb3
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;	// IMP=0x0000000000b66b1d
- (id)_rangeOfSmartSelectionIncludingRange:(id)arg1;	// IMP=0x0000000000b66640
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;	// IMP=0x0000000000b664eb
- (_Bool)_range:(id)arg1 isEqualToRange:(id)arg2;	// IMP=0x0000000000b66437
- (id)_intersectionOfRange:(id)arg1 andRange:(id)arg2;	// IMP=0x0000000000b6635d
- (_Bool)_range:(id)arg1 intersectsRange:(id)arg2;	// IMP=0x0000000000b662fb
- (_Bool)_range:(id)arg1 containsRange:(id)arg2;	// IMP=0x0000000000b66278
- (id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2;	// IMP=0x0000000000b6610c
- (id)_fullRange;	// IMP=0x0000000000b660b2
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;	// IMP=0x0000000000b66098
- (id)_rangeOfSentenceEnclosingPosition:(id)arg1;	// IMP=0x0000000000b6607e
- (id)_rangeOfLineEnclosingPosition:(id)arg1;	// IMP=0x0000000000b66064
- (id)_rangeOfEnclosingWord:(id)arg1;	// IMP=0x0000000000b6604a
- (id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2;	// IMP=0x0000000000b65fa8
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;	// IMP=0x0000000000b65d24
- (id)_normalizedStringForRangeComparison:(id)arg1;	// IMP=0x0000000000b65cd0
- (void)_scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000b65c0b
- (void)_replaceDocumentWithText:(id)arg1;	// IMP=0x0000000000b65b7f
- (void)_replaceCurrentWordWithText:(id)arg1;	// IMP=0x0000000000b65b04
- (void)_transpose;	// IMP=0x0000000000b65917
- (void)_deleteForwardAndNotify:(_Bool)arg1;	// IMP=0x0000000000b657e7
- (void)_deleteBackwardAndNotify:(_Bool)arg1;	// IMP=0x0000000000b657bc
- (void)_deleteTextRange:(id)arg1;	// IMP=0x0000000000b656e0
- (void)_deleteToEndOfParagraph;	// IMP=0x0000000000b655ad
- (void)_deleteToEndOfLine;	// IMP=0x0000000000b6547a
- (void)_deleteToStartOfLine;	// IMP=0x0000000000b65344
- (void)_deleteForwardByWord;	// IMP=0x0000000000b65177
- (void)_deleteByWord;	// IMP=0x0000000000b65082
- (void)_setCaretSelectionAtEndOfSelection;	// IMP=0x0000000000b64fe9
- (id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;	// IMP=0x0000000000b64e58
- (id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x0000000000b64d31
- (long long)_opposingDirectionFromDirection:(long long)arg1;	// IMP=0x0000000000b64d17
- (id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;	// IMP=0x0000000000b64caf
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;	// IMP=0x0000000000b64bf2
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;	// IMP=0x0000000000b64bdb
- (void)_expandSelectionToBackwardDeletionCluster;	// IMP=0x0000000000b64a02
- (void)_moveCurrentSelection:(int)arg1;	// IMP=0x0000000000b6490e
- (void)_extendCurrentSelection:(int)arg1;	// IMP=0x0000000000b6481f
- (_Bool)_hasMarkedTextOrRangedSelection;	// IMP=0x0000000000b647ab
- (_Bool)_isEmptySelection;	// IMP=0x0000000000b6473d
- (struct CGRect)_selectionClipRect;	// IMP=0x0000000000b6471f
- (_Bool)_selectionAtDocumentEnd;	// IMP=0x0000000000b646aa
- (_Bool)_selectionAtDocumentStart;	// IMP=0x0000000000b64635
- (_Bool)_selectionAtWordStart;	// IMP=0x0000000000b64591
- (void)_setSelectionToPosition:(id)arg1;	// IMP=0x0000000000b6452b
- (id)_fullText;	// IMP=0x0000000000b644c1
- (id)_wordContainingCaretSelection;	// IMP=0x0000000000b6441f
- (unsigned int)_characterInRelationToPosition:(id)arg1 amount:(int)arg2;	// IMP=0x0000000000b642fc
- (unsigned int)_characterInRelationToRangedSelection:(int)arg1;	// IMP=0x0000000000b6411d
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;	// IMP=0x0000000000b64094
- (unsigned int)_characterBeforeCaretSelection;	// IMP=0x0000000000b6407d
- (unsigned int)_characterAfterCaretSelection;	// IMP=0x0000000000b64069
- (id)_textRangeFromNSRange:(struct _NSRange)arg1;	// IMP=0x0000000000b63fbb
- (struct _NSRange)_nsrangeForTextRange:(id)arg1;	// IMP=0x0000000000b63f2e
- (int)_indexForTextPosition:(id)arg1;	// IMP=0x0000000000b63ee1
- (void)_selectAll;	// IMP=0x0000000000b63ea3
- (struct _NSRange)_selectedRangeWithinMarkedText;	// IMP=0x0000000000b63db2
- (struct _NSRange)_selectedNSRange;	// IMP=0x0000000000b63d55
- (void)set_textInputSource:(long long)arg1;	// IMP=0x0000000000b63cba
- (long long)_textInputSource;	// IMP=0x0000000000b63c83
- (id)textInputSuggestionDelegate;	// IMP=0x0000000000b63c1a
- (id)_keyInput;	// IMP=0x0000000000b63c11
@property(readonly, nonatomic, getter=_proxyTextInput) UIResponder<UITextInput> *__content;
- (void)endSelectionChange;	// IMP=0x0000000000b73d28
- (void)beginSelectionChange;	// IMP=0x0000000000b73d22
@property(readonly, nonatomic, getter=_caretRect) struct CGRect caretRect;
- (id)_asTextSelection;	// IMP=0x0000000000b73c88
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
@property(readonly, nonatomic, getter=isEditable) _Bool editable;
- (id)__textInteractionFromAssistant;	// IMP=0x0000000000b73c18
- (void)__tearDownInteractionAssistantIfNecessary;	// IMP=0x0000000000b73bf7
- (void)__prepareInteractionAssistantIfNecessary;	// IMP=0x0000000000b73bac
- (void)__createInteractionAssistantIfNecessaryWithMode:(long long)arg1;	// IMP=0x0000000000b73aec
- (id)interactionAssistant;	// IMP=0x0000000000b73adb
- (id)textInputView;	// IMP=0x0000000000b73ab0
- (void)captureTextFromCamera:(id)arg1;	// IMP=0x0000000000d183e2
- (void)_setKeyboardCameraSession:(id)arg1;	// IMP=0x0000000000d183cc
- (void)_setSuppressSoftwareKeyboard:(_Bool)arg1;	// IMP=0x0000000000d18368
- (_Bool)_suppressSoftwareKeyboard;	// IMP=0x0000000000d1835a
@property(readonly, nonatomic) UITextInputAssistantItem *inputAssistantItem;
- (void)reloadInputViewsWithoutReset;	// IMP=0x0000000000d1811a
- (void)reloadInputViews;	// IMP=0x0000000000d1805f
- (_Bool)shouldReloadInputViews;	// IMP=0x0000000000d17b16
- (id)_additionalTextInputLocales;	// IMP=0x0000000000d17ac6
@property(readonly, nonatomic) NSString *textInputContextIdentifier;
@property(readonly, nonatomic) UITextInputMode *textInputMode;
@property(readonly, nonatomic) UIInputViewController *inputAccessoryViewController;
@property(readonly, nonatomic) UIInputViewController *inputViewController;
@property(readonly, nonatomic) UIView *inputAccessoryView;
@property(readonly, nonatomic) UIView *inputView;
@property(readonly, nonatomic) NSArray *keyCommands;
- (void)restoreUserActivityState:(id)arg1;	// IMP=0x0000000000d1862d
- (void)updateUserActivityState:(id)arg1;	// IMP=0x0000000000d18627
@property(retain, nonatomic) NSUserActivity *userActivity;
- (id)_userActivity;	// IMP=0x0000000000d18604
- (void)decodeRestorableStateWithCoder:(id)arg1;	// IMP=0x0000000000da9975
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x0000000000da996f
- (id)_restorationIdentifierPath;	// IMP=0x0000000000da96d4
@property(copy, nonatomic) NSString *restorationIdentifier;
- (void)_rebuildStateRestorationIdentifierPath;	// IMP=0x0000000000da91e6
@property(retain, nonatomic, setter=_setCopyConfiguration:) id <_UICopyConfigurationReading> _copyConfiguration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

