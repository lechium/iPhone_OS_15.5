//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/TSDAutoscrollDelegate-Protocol.h>
#import <TSReading/TSDGestureTarget-Protocol.h>
#import <TSReading/TSDTextInput-Protocol.h>
#import <TSReading/TSDTrackerManipulator-Protocol.h>
#import <TSReading/TSKChangeSourceObserver-Protocol.h>
#import <TSReading/TSKPopoverBasedViewControllerDelegate-Protocol.h>
#import <TSReading/TSWPReferenceLibraryViewControllerDelegate-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSMutableDictionary, NSSet, NSString, TSDAutoscroll, TSDInteractiveCanvasController, TSDMultiPaneController, TSKFidgetResolver, TSKPopoverBasedViewController, TSKSelection, TSWPCharacterStyle, TSWPInteractiveCanvasController, TSWPReferenceLibraryViewController, TSWPSelection, TSWPStorage, TSWPTextKnobTracker, UIPopoverController, UIView;
@protocol TSDAnnotationHosting, TSDEditor, TSDTextSelection, TSWPDismissBlockPopover;

@interface TSWPEditingController : NSObject <TSDAutoscrollDelegate, TSDGestureTarget, TSKPopoverBasedViewControllerDelegate, TSWPReferenceLibraryViewControllerDelegate, TSDTextInput, TSDTrackerManipulator, TSKChangeSourceObserver>
{
    TSWPStorage *_storage;	// 8 = 0x8
    unsigned long long _initialStorageChangeCount;	// 16 = 0x10
    TSWPInteractiveCanvasController *_interactiveCanvasController;	// 24 = 0x18
    TSWPReferenceLibraryViewController *_definitionViewController;	// 32 = 0x20
    UIPopoverController *_definitionPopoverController;	// 40 = 0x28
    TSKPopoverBasedViewController<TSWPDismissBlockPopover> *_rubyTextViewController;	// 48 = 0x30
    _Bool _cancelRubyText;	// 56 = 0x38
    TSWPSelection *_selection;	// 64 = 0x40
    struct _NSRange _markedRange;	// 72 = 0x48
    NSAttributedString *_markedText;	// 88 = 0x58
    TSWPCharacterStyle *_insertionStyle;	// 96 = 0x60
    unsigned long long _selectionAnchor;	// 104 = 0x68
    _Bool _coalescingText;	// 112 = 0x70
    _Bool _canCoalesce;	// 113 = 0x71
    _Bool _selectionLastModifiedWithKnob;	// 114 = 0x72
    _Bool _selectionLastModifiedWithKeyboard;	// 115 = 0x73
    _Bool _knobTracking;	// 116 = 0x74
    _Bool _tapAndLongPressIsPossible;	// 117 = 0x75
    _Bool _ignoreFutureImmediatePresses;	// 118 = 0x76
    unsigned long long _knobTag;	// 120 = 0x78
    struct CGPoint _knobTrackingDragPoint;	// 128 = 0x80
    unsigned int _knobTrackingTapCount;	// 144 = 0x90
    _Bool _isBecomingActive;	// 148 = 0x94
    struct _NSRange _originalSelectionRange;	// 152 = 0x98
    TSDAutoscroll *_autoscroll;	// 168 = 0xa8
    struct CGPoint _autoscrollPoint;	// 176 = 0xb0
    _Bool _magnifying;	// 192 = 0xc0
    NSArray *_suggestions;	// 200 = 0xc8
    id <TSDEditor> _hostEditor;	// 208 = 0xd0
    _Bool _suppressBreaks;	// 216 = 0xd8
    _Bool _suppressTabs;	// 217 = 0xd9
    _Bool _suppressPhonetics;	// 218 = 0xda
    _Bool _disableInspector;	// 219 = 0xdb
    _Bool _supportsDataDetectors;	// 220 = 0xdc
    _Bool _isEditingPlainText;	// 221 = 0xdd
    _Bool _suppressEditMenu;	// 222 = 0xde
    unsigned long long _initialPressTextSelectionGranularity;	// 224 = 0xe0
    _Bool _shouldShowEditMenuForInsertionPoint;	// 232 = 0xe8
    _Bool _showNextEditMenu;	// 233 = 0xe9
    struct CGPoint _knobToTouchOffset;	// 240 = 0xf0
    TSWPTextKnobTracker *_knobTracker;	// 256 = 0x100
    _Bool _readyToEnd;	// 264 = 0x108
    _Bool _shouldDisplayKeyboard;	// 265 = 0x109
    TSKFidgetResolver *_fidgetResolver;	// 272 = 0x110
    _Bool _editMenuIsVisible;	// 280 = 0x118
    NSString *_mostRecentGestureKind;	// 288 = 0x120
    _Bool _gestureBeganWhenEditingBegan;	// 296 = 0x128
    _Bool _annotationWasShowingAtStartOfGesture;	// 297 = 0x129
    unsigned long long _currentSelectionFlags;	// 304 = 0x130
    NSDictionary *_tapInfo;	// 312 = 0x138
    TSDMultiPaneController *_insertBreakPopoverController;	// 320 = 0x140
    NSMutableDictionary *_dictationInterpretations;	// 328 = 0x148
    NSMutableDictionary *_autocorrectedEntries;	// 336 = 0x150
    id <TSDAnnotationHosting> _previousSelectedAnnotation;	// 344 = 0x158
    UIView *_inputViewForHidingKeyboard;	// 352 = 0x160
    _Bool _suppressDataDetectorsOnResignTextInput;	// 360 = 0x168
    _Bool _canCoalesceBreakingCharacters;	// 361 = 0x169
}

+ (id)_targetedDragPreviewForSelection:(id)arg1 interactiveCanvasController:(id)arg2 reps:(id)arg3 applyScale:(_Bool)arg4 imageFrameUnion:(struct CGRect *)arg5;	// IMP=0x00000000002cba01
+ (id)dropProposalForSession:(id)arg1;	// IMP=0x00000000002cb893
+ (id)retargetedDragItem:(id)arg1 withDefault:(id)arg2 canvasView:(id)arg3 icc:(id)arg4;	// IMP=0x00000000002cb671
+ (id)previewForDragItem:(id)arg1;	// IMP=0x00000000002cb5c3
+ (id)dragItemForHitRepWithDragInteraction:(id)arg1 session:(id)arg2 canvasView:(id)arg3 icc:(id)arg4 withTouchPoint:(struct CGPoint)arg5;	// IMP=0x00000000002cb086
@property(nonatomic) _Bool canCoalesceBreakingCharacters; // @synthesize canCoalesceBreakingCharacters=_canCoalesceBreakingCharacters;
@property(nonatomic) _Bool coalescingText; // @synthesize coalescingText=_coalescingText;
@property(nonatomic) _Bool disableInspector; // @synthesize disableInspector=_disableInspector;
@property(nonatomic) _Bool suppressTabs; // @synthesize suppressTabs=_suppressTabs;
@property(nonatomic) _Bool suppressPhonetics; // @synthesize suppressPhonetics=_suppressPhonetics;
@property(nonatomic) _Bool suppressBreaks; // @synthesize suppressBreaks=_suppressBreaks;
@property(nonatomic) id <TSDEditor> hostEditor; // @synthesize hostEditor=_hostEditor;
@property(nonatomic) struct CGPoint autoscrollPoint; // @synthesize autoscrollPoint=_autoscrollPoint;
@property(retain, nonatomic) TSDAutoscroll *autoscroll; // @synthesize autoscroll=_autoscroll;
@property(readonly, nonatomic) _Bool suppressDataDetectorsOnResignTextInput; // @synthesize suppressDataDetectorsOnResignTextInput=_suppressDataDetectorsOnResignTextInput;
@property(readonly, nonatomic) _Bool selectionLastModifiedWithKeyboard; // @synthesize selectionLastModifiedWithKeyboard=_selectionLastModifiedWithKeyboard;
@property(readonly, nonatomic) _Bool selectionLastModifiedWithKnob; // @synthesize selectionLastModifiedWithKnob=_selectionLastModifiedWithKnob;
@property(readonly, nonatomic) unsigned long long currentSelectionFlags; // @synthesize currentSelectionFlags=_currentSelectionFlags;
@property(nonatomic) _Bool shouldDisplayKeyboard; // @synthesize shouldDisplayKeyboard=_shouldDisplayKeyboard;
@property(nonatomic) _Bool isEditingPlainText; // @synthesize isEditingPlainText=_isEditingPlainText;
@property(nonatomic) _Bool supportsDataDetectors; // @synthesize supportsDataDetectors=_supportsDataDetectors;
@property(nonatomic) _Bool isBecomingActive; // @synthesize isBecomingActive=_isBecomingActive;
@property(nonatomic) _Bool canCoalesce; // @synthesize canCoalesce=_canCoalesce;
@property(readonly, nonatomic) TSWPCharacterStyle *insertionStyle; // @synthesize insertionStyle=_insertionStyle;
@property(nonatomic) unsigned int knobTrackingTapCount; // @synthesize knobTrackingTapCount=_knobTrackingTapCount;
@property(nonatomic) struct CGPoint knobTrackingDragPoint; // @synthesize knobTrackingDragPoint=_knobTrackingDragPoint;
@property(nonatomic) unsigned long long knobTag; // @synthesize knobTag=_knobTag;
@property(nonatomic) _Bool knobTracking; // @synthesize knobTracking=_knobTracking;
@property(readonly, nonatomic) NSAttributedString *markedText; // @synthesize markedText=_markedText;
@property(readonly, retain, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) TSWPInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=_interactiveCanvasController;
- (_Bool)shouldShowSelectedTextAsFocused;	// IMP=0x00000000002a2478
@property(readonly, nonatomic) _Bool suppressesTextInspector;
- (void)addAllDictationInterpretationRangesInRange:(struct _NSRange)arg1 toRanges:(void *)arg2;	// IMP=0x00000000002a236d
- (id)dictationInterpretationsAtCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;	// IMP=0x00000000002a22f9
- (void)p_removeAutocorrectionAtCharIndex:(unsigned long long)arg1;	// IMP=0x00000000002a22b4
- (int)valueForWritingDirectionPropertyForInspector:(id)arg1;	// IMP=0x00000000002a214f
- (id)p_previousAutocorrectionForWordAtCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;	// IMP=0x00000000002a20b3
- (_Bool)textEditingSupportsFormatBar;	// IMP=0x00000000002a209a
@property(readonly, retain) UIView *inputAccessoryView;
@property(readonly, retain) UIView *inputView;
- (void)p_adjustSelection:(id)arg1 withOtherSelection:(id)arg2 textSelectionGranularity:(unsigned long long)arg3;	// IMP=0x00000000002a1c93
- (_Bool)p_canEditTextString;	// IMP=0x00000000002a1c14
- (void)p_inputLanguageDidChangeNotification:(id)arg1;	// IMP=0x00000000002a1ac5
- (void)p_adjustSelection:(id)arg1 withUnscaledCanvasPoint:(struct CGPoint)arg2 textSelectionGranularity:(unsigned long long)arg3 isTapHold:(_Bool)arg4 allowPastBreak:(_Bool)arg5;	// IMP=0x00000000002a19c5
- (id)selectionFromUnscaledCanvasPoint:(struct CGPoint)arg1 textSelectionGranularity:(unsigned long long)arg2 isTapHold:(_Bool)arg3 allowPastBreak:(_Bool)arg4 selectsEntireLink:(_Bool)arg5;	// IMP=0x00000000002a18de
- (void)p_setSelectionFromPoint:(struct CGPoint)arg1 textSelectionGranularity:(unsigned long long)arg2 includeListLabels:(_Bool)arg3;	// IMP=0x00000000002a169b
- (void)willBeginMagnification;	// IMP=0x00000000002a1695
- (id)p_extendSelectionToIncludeSmartFields:(id)arg1;	// IMP=0x00000000002a1632
- (id)editingSearchReference;	// IMP=0x00000000002a1452
- (void)setSelectionWithRange:(struct _NSRange)arg1 leadingEdge:(_Bool)arg2 endOfLine:(_Bool)arg3;	// IMP=0x00000000002a1372
- (void)setSelectionWithRange:(struct _NSRange)arg1 endOfLine:(_Bool)arg2;	// IMP=0x00000000002a12b4
- (id)selectionWithRange:(struct _NSRange)arg1;	// IMP=0x00000000002a1258
- (id)textFontAtCharIndex:(unsigned long long)arg1;	// IMP=0x00000000002a10df
- (id)p_columnForCharIndex:(unsigned long long)arg1;	// IMP=0x00000000002a0f39
- (id)textColorAtCharIndex:(unsigned long long)arg1;	// IMP=0x00000000002a0e72
- (id)selectionRectsForRange:(struct _NSRange)arg1;	// IMP=0x00000000002a0ad4
- (id)_addSelectionRectsForLayout:(id)arg1 selection:(id)arg2;	// IMP=0x000000000029ffce
- (id)_repsForStorage:(id)arg1 selection:(id)arg2;	// IMP=0x000000000029fdf3
- (struct CGRect)p_firstRectForRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;	// IMP=0x000000000029f87a
- (void)replaceRange:(struct _NSRange)arg1 withText:(id)arg2;	// IMP=0x000000000029f874
- (void)extendSelectionRight;	// IMP=0x000000000029f6d3
- (void)extendSelectionLeft;	// IMP=0x000000000029f5c2
- (void)deleteForward;	// IMP=0x000000000029f5bc
- (void)deleteBackward;	// IMP=0x000000000029f5b6
- (id)characterStyleForDeletedRange:(struct _NSRange)arg1;	// IMP=0x000000000029f4db
- (void)p_setInsertionStyle:(id)arg1;	// IMP=0x000000000029f474
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x000000000029f46e
- (struct CGRect)firstRectForRange:(struct _NSRange)arg1;	// IMP=0x000000000029f381
- (void)insertText:(id)arg1;	// IMP=0x000000000029f37b
- (id)textInRange:(struct _NSRange)arg1;	// IMP=0x000000000029ef13
- (id)unfilteredText;	// IMP=0x000000000029eefd
- (unsigned long long)textLength;	// IMP=0x000000000029eee7
- (long long)returnKeyType;	// IMP=0x000000000029eed6
- (_Bool)textIsVerticalAtCharIndex:(unsigned long long)arg1;	// IMP=0x000000000029ee34
- (void)endEditingAndSelectParent:(id)arg1;	// IMP=0x000000000029ed14
- (void)endEditing;	// IMP=0x000000000029ec37
- (void)abandonMarkedText;	// IMP=0x000000000029ec08
- (_Bool)p_keyboardShouldShowOnscreen;	// IMP=0x000000000029ea9d
- (_Bool)wantsKeyboard;	// IMP=0x000000000029ea95
- (_Bool)wantsCaret;	// IMP=0x000000000029ea21
- (_Bool)p_isIgnoringKeyboardInput;	// IMP=0x000000000029e9b8
- (void)cancelPhoneticsHUDAnimated:(_Bool)arg1;	// IMP=0x000000000029e99e
- (void)dismissPhoneticsHUDAnimated:(_Bool)arg1;	// IMP=0x000000000029e988
- (_Bool)isDisplayingPhoneticsHUD;	// IMP=0x000000000029e969
- (struct _NSRange)rangeOfWordEnclosingCharIndex:(unsigned long long)arg1 backward:(_Bool)arg2;	// IMP=0x000000000029e8e3
- (_Bool)p_isCharIndex:(unsigned long long)arg1 withinTextUnit:(int)arg2 inDirection:(long long)arg3;	// IMP=0x000000000029e7ee
- (_Bool)isCharIndex:(unsigned long long)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x000000000029e7dc
- (unsigned long long)p_charIndexByMovingCharIndex:(unsigned long long)arg1 withEolAffinity:(_Bool *)arg2 toBoundary:(int)arg3 inDirection:(long long)arg4 preferPosition:(double *)arg5 isLeadingEdge:(_Bool *)arg6;	// IMP=0x000000000029d98c
- (unsigned long long)charIndexByMovingPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 preferPosition:(double *)arg4;	// IMP=0x000000000029d83f
- (const void *)p_nearestLineFragmentWithSameVerticalPositionAs:(unsigned long long)arg1 xPos:(double)arg2 inColumn:(id)arg3;	// IMP=0x000000000029d656
- (const void *)p_lastVisibleLineFragmentForCharIndex:(unsigned long long)arg1 eol:(_Bool)arg2;	// IMP=0x000000000029d4f9
- (const void *)p_lineFragmentForCharIndex:(unsigned long long)arg1 column:(id *)arg2 eol:(_Bool)arg3;	// IMP=0x000000000029d3ff
- (id)logicalToVisualSelection:(id)arg1;	// IMP=0x000000000029ceab
- (id)calculateVisualRunsFromSelection:(id)arg1 updateControllerSelection:(_Bool)arg2;	// IMP=0x000000000029c4fe
- (void)invalidateSelectionVisualRuns;	// IMP=0x000000000029c42a
- (unsigned long long)p_lineIndexForCharIndex:(unsigned long long)arg1 column:(id *)arg2 eol:(_Bool)arg3;	// IMP=0x000000000029c23e
- (unsigned long long)p_MoveByLineRange:(struct _NSRange)arg1 up:(_Bool)arg2;	// IMP=0x000000000029c12e
- (id)p_layoutTargetForCharIndex:(unsigned long long)arg1 eolAffinity:(_Bool)arg2;	// IMP=0x000000000029bfac
- (_Bool)p_isCharIndex:(unsigned long long)arg1 withEolAffinity:(_Bool)arg2 atBoundary:(int)arg3 inDirection:(long long)arg4;	// IMP=0x000000000029b920
- (_Bool)isCharIndex:(unsigned long long)arg1 withEolAffinity:(_Bool)arg2 atBoundary:(long long)arg3 inDirection:(long long)arg4;	// IMP=0x000000000029b90e
- (unsigned long long)p_charIndexAtPoint:(struct CGPoint)arg1 isAtEndOfLine:(_Bool *)arg2;	// IMP=0x000000000029b85b
- (unsigned long long)closestCharIndexToPoint:(struct CGPoint)arg1 isAtEndOfLine:(_Bool *)arg2;	// IMP=0x000000000029b7a8
- (_Bool)allowAutomaticTextEditingToBeginWithDifferentEditor;	// IMP=0x000000000029b76a
- (void)beginAutomaticTextEditingIfNeededForPoint:(struct CGPoint)arg1;	// IMP=0x000000000029b689
- (id)p_highlightSelectionForSelection:(id)arg1;	// IMP=0x000000000029b618
- (_Bool)canAcceptOrRejectChange;	// IMP=0x000000000029b610
- (_Bool)canAddOrShowComment;	// IMP=0x000000000029b5bb
- (_Bool)canRemoveHighlightForCurrentSelection;	// IMP=0x000000000029b526
- (_Bool)canShowCommentForCurrentSelectionGetHighlight:(id *)arg1 range:(struct _NSRange *)arg2;	// IMP=0x000000000029b430
- (_Bool)canHighlightCurrentSelection;	// IMP=0x000000000029b37a
- (id)currentFontColor;	// IMP=0x000000000029b2a1
- (_Bool)p_isTextInputEditor;	// IMP=0x000000000029b26a
- (void)customSelectAll:(id)arg1;	// IMP=0x000000000029b258
- (void)selectAll:(id)arg1;	// IMP=0x000000000029b194
- (void)noReplacementsFound:(id)arg1;	// IMP=0x000000000029b18e
- (void)p_switchToReplaceSelection;	// IMP=0x000000000029b033
- (void)styleAction:(id)arg1;	// IMP=0x000000000029af69
- (void)definitionAction:(id)arg1;	// IMP=0x000000000029ad5d
- (void)replaceAction:(id)arg1;	// IMP=0x000000000029ad3f
- (id)extraMenuItems;	// IMP=0x000000000029ac77
- (void)p_addCommonEditItemsIntoMenu:(id)arg1;	// IMP=0x000000000029aa6d
- (void)p_addInsertItemsIntoMenu:(id)arg1;	// IMP=0x000000000029a79f
- (void)customSelect:(id)arg1;	// IMP=0x000000000029a78d
- (void)select:(id)arg1;	// IMP=0x000000000029a69c
- (void)popoverControllerDidDismissPopoverBasedViewController:(id)arg1;	// IMP=0x000000000029a67e
- (void)referenceLibrarayViewControllerWasDismissed:(id)arg1;	// IMP=0x000000000029a620
- (_Bool)editorKeyboardLanguageIsRTL;	// IMP=0x000000000029a5e9
- (id)editorKeyboardLanguage;	// IMP=0x000000000029a5df
- (long long)writingDirectionForCharIndex:(unsigned long long)arg1;	// IMP=0x000000000029a47d
- (_Bool)canSetWritingDirection:(int)arg1;	// IMP=0x000000000029a2b6
- (_Bool)selectionIsOnEmptyParagraph;	// IMP=0x000000000029a216
- (void)copyObject:(id)arg1;	// IMP=0x000000000029a204
- (void)copyToPasteboard:(id)arg1;	// IMP=0x000000000029a1fe
- (void)copy:(id)arg1;	// IMP=0x000000000029a06e
- (id)stringFromSelection;	// IMP=0x000000000029a00b
- (id)currentLayoutParent;	// IMP=0x000000000029a003
- (id)styleProvider;	// IMP=0x0000000000299f95
- (int)p_canPerformOptInEditorAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000299f64
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000299c35
- (_Bool)p_canInsertBreak;	// IMP=0x0000000000299bec
- (_Bool)p_canSelectAllWithSender:(id)arg1;	// IMP=0x0000000000299b1e
- (_Bool)p_selectionIsSimpleInsertionPoint;	// IMP=0x0000000000299aa2
- (_Bool)textStorage:(id)arg1 hasWhitespaceBoundedWordAtSelection:(id)arg2;	// IMP=0x00000000002995e4
- (struct CGRect)targetRectForSelection:(id)arg1;	// IMP=0x00000000002995b1
- (struct CGRect)overrideCaretRectForSelection:(id)arg1;	// IMP=0x0000000000299593
- (struct _NSRange)smartDeletionSelection:(id)arg1 isVisual:(_Bool *)arg2;	// IMP=0x0000000000298fde
- (_Bool)pStorageCanAcceptDrawableAttachments;	// IMP=0x0000000000298fc3
- (id)pasteboardController;	// IMP=0x0000000000298f94
- (void)autoscrollWillNotStart;	// IMP=0x0000000000298f48
- (void)updateAfterAutoscroll:(id)arg1;	// IMP=0x0000000000298e00
@property(readonly, nonatomic) TSDInteractiveCanvasController *icc;
- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;	// IMP=0x00000000002989fb
- (id)p_selectionForRep:(id)arg1 point:(struct CGPoint)arg2 textSelectionGranularity:(unsigned long long)arg3 isTapHold:(_Bool)arg4 precise:(_Bool)arg5 includeListLabels:(_Bool)arg6 allowPastBreak:(_Bool)arg7 selectsEntireLink:(_Bool)arg8;	// IMP=0x00000000002979f8
- (id)p_selectionFromUnscaledCanvasPoint:(struct CGPoint)arg1 textSelectionGranularity:(unsigned long long)arg2 isTapHold:(_Bool)arg3 allowPastBreak:(_Bool)arg4 selectsEntireLink:(_Bool)arg5;	// IMP=0x0000000000297911
- (_Bool)p_hitListLabelAtCharIndex:(unsigned long long)arg1 atNaturalPoint:(struct CGPoint)arg2 inRep:(id)arg3;	// IMP=0x000000000029784d
- (void)p_setTappedSelection:(id)arg1;	// IMP=0x00000000002977fa
- (void)p_sendHandleTapNotification;	// IMP=0x000000000029775d
- (void)tappedOnKnob:(id)arg1;	// IMP=0x00000000002976c9
- (id)selectionForRep:(id)arg1 point:(struct CGPoint)arg2 textSelectionGranularity:(unsigned long long)arg3;	// IMP=0x000000000029769f
- (void)tappedInRep:(id)arg1 point:(struct CGPoint)arg2 tapCount:(unsigned long long)arg3 isTapHold:(_Bool)arg4 precise:(_Bool)arg5;	// IMP=0x0000000000297585
- (unsigned long long)textSelectionGranularityForTapCount:(unsigned long long)arg1;	// IMP=0x0000000000297563
- (unsigned long long)charIndexInRep:(id)arg1 fromPoint:(struct CGPoint)arg2 allowPastBreak:(_Bool)arg3 allowNotFound:(_Bool)arg4 pastCenterGoesToNextChar:(_Bool)arg5 isAtEndOfLine:(_Bool *)arg6;	// IMP=0x000000000029752e
- (unsigned long long)charIndexInRep:(id)arg1 fromPoint:(struct CGPoint)arg2 allowPastBreak:(_Bool)arg3 allowNotFound:(_Bool)arg4 isAtEndOfLine:(_Bool *)arg5;	// IMP=0x000000000029750b
- (unsigned long long)charIndexInRep:(id)arg1 fromPoint:(struct CGPoint)arg2 allowPastBreak:(_Bool)arg3 isAtEndOfLine:(_Bool *)arg4 leadingEdge:(_Bool *)arg5;	// IMP=0x00000000002974ef
- (id)p_hitRepWithPoint:(struct CGPoint)arg1 keyboardAdjustmentDelta:(double)arg2;	// IMP=0x00000000002972c8
- (unsigned long long)countOfHyperlinksInUserSelection;	// IMP=0x00000000002971a6
- (void)clearMarkedRange;	// IMP=0x00000000002970d0
@property(readonly, nonatomic) struct _NSRange markedRange;
- (_Bool)trackingKnobInParagraphMode;	// IMP=0x0000000000297089
- (_Bool)isParagraphModeWithSelection:(id)arg1 onStorage:(id)arg2;	// IMP=0x0000000000296e29
- (_Bool)isInParagraphMode;	// IMP=0x0000000000296e0f
- (id)p_columnForCharIndex:(unsigned long long)arg1 withStorage:(id)arg2;	// IMP=0x0000000000296b74
- (id)extendSelectionToParagraphs:(id)arg1;	// IMP=0x0000000000296ac6
- (void)selectionChangedWithFlags:(unsigned long long)arg1 wpFlags:(unsigned long long)arg2;	// IMP=0x0000000000296911
- (void)p_postSelectionContentsChangedNotification;	// IMP=0x0000000000296871
- (void)p_postWillStyleTextNotification;	// IMP=0x00000000002967d4
- (void)protectedStopMagnification;	// IMP=0x00000000002967ce
- (void)p_beginMagnification:(id)arg1 forRep:(id)arg2 atPoint:(struct CGPoint)arg3;	// IMP=0x0000000000296707
- (void)revertLastSelectionChangeIfElapsedTimeIsUnderPinFidgetThreshold;	// IMP=0x00000000002966a8
- (void)p_setSelection:(id)arg1 withFlags:(unsigned long long)arg2 force:(_Bool)arg3;	// IMP=0x0000000000295e7f
- (void)setSelection:(id)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x0000000000295e6a
- (void)p_setRevertibleSelection:(id)arg1;	// IMP=0x0000000000295aa5
@property(retain, nonatomic) TSWPSelection *selection; // @synthesize selection=_selection;
- (void)setInsertionPoint:(unsigned long long)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x0000000000295a31
@property(nonatomic) unsigned long long insertionPoint;
- (void)p_handleKnobDragGestureRecognizer:(id)arg1;	// IMP=0x00000000002957b3
- (void)p_endAutoscroll;	// IMP=0x0000000000295776
- (void)p_beginOperationAndTakeControl;	// IMP=0x000000000029559f
- (void)operationDidEnd;	// IMP=0x0000000000295599
- (_Bool)readyToEndOperation;	// IMP=0x000000000029558d
- (id)tracker;	// IMP=0x0000000000295580
- (_Bool)allowTrackerManipulatorToTakeControl:(id)arg1;	// IMP=0x0000000000295574
- (void)gestureSequenceDidEnd;	// IMP=0x0000000000295412
- (void)gestureSequenceWillBegin;	// IMP=0x00000000002953c0
- (_Bool)handleGesture:(id)arg1;	// IMP=0x00000000002950de
- (void)p_handleTapGestures:(id)arg1;	// IMP=0x0000000000294d65
- (void)p_createKnobTracker:(id)arg1 forRep:(id)arg2 tapCount:(unsigned long long)arg3;	// IMP=0x0000000000294c46
- (void)p_beginKnobTrackingSelection:(id)arg1 forRep:(id)arg2 atPoint:(struct CGPoint)arg3;	// IMP=0x0000000000294a6a
- (void)p_dismissDefinitionPopover;	// IMP=0x00000000002949eb
- (void)p_cancelTapAndLongPressPreviousSelector;	// IMP=0x0000000000294994
- (void)p_beginTapAndLongPress:(id)arg1;	// IMP=0x00000000002947cb
- (void)p_handleTapAndTouchGesture:(id)arg1;	// IMP=0x0000000000293e7c
- (struct CGPoint)p_clampPointToLine:(struct CGPoint)arg1 trackingRep:(id)arg2;	// IMP=0x0000000000293d93
- (void)p_handleLongPressGesture:(id)arg1;	// IMP=0x0000000000293838
- (void)p_handleSwipeMoveCaretWithTextGranularity:(long long)arg1 textDirection:(long long)arg2 layoutDirection:(long long)arg3;	// IMP=0x0000000000293515
- (_Bool)canHandleGesture:(id)arg1;	// IMP=0x00000000002931af
- (_Bool)swipeableParagraphIsSelected;	// IMP=0x0000000000293078
- (_Bool)canHandleSwipeGestureForGestureRecognizer:(id)arg1 outDelta:(long long *)arg2 outTextDirection:(long long *)arg3 outLayoutDirection:(long long *)arg4;	// IMP=0x0000000000292f2c
- (id)p_repForSwipeAtUnscaledLocation:(struct CGPoint)arg1;	// IMP=0x0000000000292bda
- (_Bool)p_respondsToRubyGestures;	// IMP=0x0000000000292b80
- (_Bool)p_respondsToHyperlinkGestures;	// IMP=0x0000000000292b26
- (_Bool)p_respondsToListGestures;	// IMP=0x0000000000292acc
- (_Bool)isUnscaledPointInTextSelection:(struct CGPoint)arg1;	// IMP=0x00000000002929fc
- (id)p_documentViewController;	// IMP=0x0000000000292943
- (struct CGRect)p_adjustedPopoverTargetRectForRange:(struct _NSRange)arg1;	// IMP=0x000000000029272d
- (id)p_viewControllerForPresenting;	// IMP=0x00000000002926d3
- (id)p_wordRangesForRange:(struct _NSRange)arg1;	// IMP=0x00000000002925d5
- (void)p_clearSecondaryHighlight;	// IMP=0x00000000002924c6
- (void)p_highlightRubyTextWithRange:(struct _NSRange)arg1;	// IMP=0x000000000029230d
- (double)targetPointSizeForSelectionWithViewScale:(double)arg1;	// IMP=0x00000000002922e8
- (double)viewScaleForSelectionWithTargetPointSize:(double)arg1;	// IMP=0x00000000002922ae
- (double)p_effectiveFontSizeForCurrentSelection;	// IMP=0x0000000000292197
- (struct _NSRange)editRange;	// IMP=0x000000000029206b
- (id)topLevelInspectorAutosaveName;	// IMP=0x000000000029205e
- (void)updateHUDState;	// IMP=0x0000000000291fd8
- (void)p_cancelDelayedSelectors;	// IMP=0x0000000000291fa3
- (_Bool)canCenterHUD;	// IMP=0x0000000000291f9b
- (void)p_updateHUDState;	// IMP=0x0000000000291c0e
- (void)p_rescheduleDelayedUpdateHUDState;	// IMP=0x0000000000291bb3
- (_Bool)isSelectionSingleAnchoredDrawableAttachment;	// IMP=0x0000000000291af2
- (void)p_clearEditMenuFlags;	// IMP=0x0000000000291ae3
- (void)dismissActivePopovers;	// IMP=0x0000000000291a91
- (_Bool)wantsDoneButtonWhenEditing;	// IMP=0x0000000000291a89
- (_Bool)editorCanHideEditMenu;	// IMP=0x0000000000291a7c
- (_Bool)shouldShowEditMenu;	// IMP=0x0000000000291766
- (struct CGRect)p_targetRectForSelection:(id)arg1;	// IMP=0x0000000000291143
- (void)p_suppressSelectionHighlight:(_Bool)arg1;	// IMP=0x0000000000290fc0
- (id)p_editingRepForCharIndex:(unsigned long long)arg1;	// IMP=0x0000000000290df8
- (id)editingReps;	// IMP=0x0000000000290d67
- (void)cancelKnobTrackingAndMagnifying;	// IMP=0x0000000000290cdd
- (void)didEnterBackground;	// IMP=0x0000000000290ba6
- (void)willEnterForeground;	// IMP=0x0000000000290a7f
- (void)willResignTextInputEditor;	// IMP=0x0000000000290a68
- (void)willResignTextInputEditorAndDeselect:(_Bool)arg1;	// IMP=0x00000000002907c2
- (id)p_containingShapeRep;	// IMP=0x0000000000290715
- (void)didBecomeTextInputEditor;	// IMP=0x00000000002906d1
- (void)willResignCurrentEditor;	// IMP=0x0000000000290673
- (void)didBecomeCurrentEditor;	// IMP=0x00000000002905f8
- (id)documentRoot;	// IMP=0x00000000002905e2
- (id)model;	// IMP=0x00000000002905d8
- (void)teardown;	// IMP=0x0000000000290325
- (void)dealloc;	// IMP=0x0000000000290056
- (id)initWithStorage:(id)arg1 interactiveCanvasController:(id)arg2;	// IMP=0x000000000028ff42
@property(readonly, retain, nonatomic) TSKSelection<TSDTextSelection> *textInputSelection;
- (struct _NSRange)tsax_rangeOfLineFragmentAtCharIndex:(unsigned long long)arg1;	// IMP=0x00000000002b7b03
- (id)tsax_listItemLabelForCharIndex:(unsigned long long)arg1 textIsLiteral:(_Bool *)arg2;	// IMP=0x00000000002b7a43
- (id)dragItemForCurrentSelectionWithDragInteraction:(id)arg1 session:(id)arg2 withTouchPoint:(struct CGPoint)arg3;	// IMP=0x00000000002cade0
- (unsigned long long)p_getVisualInsertionPointIndexForString:(id)arg1 selection:(id)arg2;	// IMP=0x0000000000309a81
- (unsigned long long)p_getVisualDeletionIndexForSelection:(id)arg1 backward:(_Bool *)arg2;	// IMP=0x0000000000309791
- (const void *)p_lineFragmentWithCaretInfo:(CDStruct_7549c2a6 *)arg1 forSelection:(id)arg2;	// IMP=0x00000000003093d8
- (int)p_writingDirectionForCharAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003092e3
- (void)p_selection:(id)arg1 toGlyphRange:(CDStruct_bccfccf2 *)arg2;	// IMP=0x0000000000309014
- (unsigned long long)p_leftEdgeForSelection:(id)arg1 withLeadingEdge:(_Bool *)arg2;	// IMP=0x0000000000308dd3
- (unsigned long long)p_rightEdgeForSelection:(id)arg1 withLeadingEdge:(_Bool *)arg2;	// IMP=0x0000000000308b56
- (unsigned long long)p_LeftCharForInsertion:(const CDStruct_bccfccf2 *)arg1;	// IMP=0x0000000000308a97
- (struct _NSRange)p_adjustVisualSelection:(id)arg1 withOtherSelection:(id)arg2;	// IMP=0x00000000003084d8
- (unsigned long long)charIndexMovingByWordFromCharIndex:(unsigned long long)arg1 inDirection:(long long)arg2;	// IMP=0x000000000030819c
- (int)p_moveFromCharIndex:(unsigned long long *)arg1 tokenizerRef:(struct __CFStringTokenizer **)arg2 tokenizerRange:(struct _NSRange *)arg3 direction:(long long)arg4 currentWordRange:(struct _NSRange)arg5 newWordRange:(struct _NSRange *)arg6 reasonToStop:(unsigned int)arg7;	// IMP=0x0000000000307dc2
- (struct __CFStringTokenizer *)p_createTokenizerForCharIndex:(unsigned long long)arg1 outTokenizerRange:(struct _NSRange *)arg2;	// IMP=0x0000000000307d40
- (unsigned long long)p_adjustedCharIndexForWordTestingFromCharIndex:(unsigned long long)arg1 forDirection:(long long)arg2;	// IMP=0x000000000030799c
- (_Bool)p_isLayoutLeftToRightAtCharIndex:(unsigned long long)arg1;	// IMP=0x000000000030792b
- (unsigned long long)charIndexMovingByCharacterFromCharIndex:(unsigned long long)arg1 leadingEdge:(_Bool *)arg2 inDirection:(long long)arg3;	// IMP=0x0000000000307167
- (struct _NSRange)p_expandParagraphRangeForEnumerator:(struct TSWPParagraphEnumerator *)arg1;	// IMP=0x00000000003070cd
- (unsigned long long)charIndexMovingByCharacterFromCharIndex:(unsigned long long)arg1 inDirection:(long long)arg2;	// IMP=0x00000000003070b6
- (unsigned long long)p_layoutOrderCharIndexForCaretCharIndex:(unsigned long long)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000306f62
- (unsigned long long)p_caretCharIndexForLayoutOrderCharIndex:(unsigned long long)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000306e0e
- (_Bool)pIsSelectionPlaceHolderTextWithSelection:(id)arg1;	// IMP=0x0000000000306d30
- (_Bool)pIsSelectionPlaceHolderText;	// IMP=0x0000000000306d10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingEndpoints;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingFill;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingOpacity;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingReflection;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingResize;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShadow;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingStroke;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingTextInset;
@property(retain, nonatomic) TSKSelection<TSDTextSelection> *selectionForArrowKeys;
@property(readonly) Class superclass;
@property(readonly) _Bool wantsRawArrowKeyEvents;

@end

