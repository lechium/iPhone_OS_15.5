//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKitLegacy/DOMNode.h>

#import <UIKitCore/UIKeyInput-Protocol.h>
#import <UIKitCore/UIKeyboardInput-Protocol.h>
#import <UIKitCore/UITextInputPrivate-Protocol.h>
#import <UIKitCore/UITextInputTokenizer-Protocol.h>
#import <UIKitCore/UITextInput_Internal-Protocol.h>

@class NSDictionary, NSIndexSet, NSString, RTIInputSystemSourceSession, UIColor, UIImage, UIInputContextHistory, UIResponder, UITextInputPasswordRules, UITextInteractionAssistant, UITextPosition, UITextRange, UIView, _UISupplementalLexicon;
@protocol UITextInput, UITextInputDelegate, UITextInputPrivate, UITextInputSuggestionDelegate, UITextInputTokenizer;

@interface DOMNode (UIWebFormPeripheral) <UITextInput_Internal, UIKeyboardInput, UITextInputPrivate, UIKeyInput, UITextInputTokenizer>
- (id)createPeripheral;	// IMP=0x0000000000706034
- (id)itemTitle;	// IMP=0x000000000070c668
- (void)populateCell:(id)arg1;	// IMP=0x000000000070c662
- (id)createPickerCell;	// IMP=0x000000000070c65a
- (id)createSelectedItem;	// IMP=0x000000000070c652
- (id)_responderWindow;	// IMP=0x0000000000b6e63c
- (id)inputAssistantItem;	// IMP=0x0000000000b6e611
- (id)_textInteraction;	// IMP=0x0000000000b6e5e6
- (id)_selectableText;	// IMP=0x0000000000b6e5dd
- (_Bool)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(_Bool)arg3;	// IMP=0x0000000000b6e52e
- (void)_unmarkText;	// IMP=0x0000000000b6e4c8
- (void)_setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000000b6e2c8
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000000b6e25d
- (_Bool)_hasMarkedText;	// IMP=0x0000000000b6e202
- (_Bool)_usesAsynchronousProtocol;	// IMP=0x0000000000b6e1d0
- (void)_setGestureRecognizers;	// IMP=0x0000000000b6deeb
- (long long)_selectionAffinity;	// IMP=0x0000000000b6ddf2
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(_Bool)arg2;	// IMP=0x0000000000b6dd82
- (id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(_Bool)arg4;	// IMP=0x0000000000b6dd3d
- (id)_moveRight:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b6dc0d
- (id)_moveLeft:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b6dadd
- (id)_moveDown:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b6d8c5
- (id)_moveUp:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b6d6ad
- (id)_moveToEndOfDocument:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b6d583
- (id)_moveToStartOfDocument:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b6d4a0
- (id)_moveToEndOfParagraph:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b6d321
- (id)_moveToStartOfParagraph:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b6d196
- (id)_moveToEndOfLine:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b6cfc8
- (id)_moveToStartOfLine:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b6cdee
- (id)_moveToEndOfWord:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b6cc10
- (id)_moveToStartOfWord:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000b6c8b9
- (id)_setHistory:(id)arg1 withExtending:(_Bool)arg2 withAnchor:(int)arg3 withAffinityDownstream:(_Bool)arg4;	// IMP=0x0000000000b6c6e8
- (id)_setSelectionRangeWithHistory:(id)arg1;	// IMP=0x0000000000b6c48a
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(_Bool)arg2;	// IMP=0x0000000000b6c44a
- (id)_fontForCaretSelection;	// IMP=0x0000000000b6c360
- (id)_textColorForCaretSelection;	// IMP=0x0000000000b6c276
- (id)_rangeFromCurrentRangeWithDelta:(struct _NSRange)arg1;	// IMP=0x0000000000b6c151
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;	// IMP=0x0000000000b6c0bb
- (id)_rangeOfSmartSelectionIncludingRange:(id)arg1;	// IMP=0x0000000000b6bbde
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;	// IMP=0x0000000000b6ba89
- (_Bool)_range:(id)arg1 isEqualToRange:(id)arg2;	// IMP=0x0000000000b6b9d5
- (id)_intersectionOfRange:(id)arg1 andRange:(id)arg2;	// IMP=0x0000000000b6b8fb
- (_Bool)_range:(id)arg1 intersectsRange:(id)arg2;	// IMP=0x0000000000b6b899
- (_Bool)_range:(id)arg1 containsRange:(id)arg2;	// IMP=0x0000000000b6b816
- (id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2;	// IMP=0x0000000000b6b6aa
- (id)_fullRange;	// IMP=0x0000000000b6b650
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;	// IMP=0x0000000000b6b636
- (id)_rangeOfSentenceEnclosingPosition:(id)arg1;	// IMP=0x0000000000b6b61c
- (id)_rangeOfLineEnclosingPosition:(id)arg1;	// IMP=0x0000000000b6b602
- (id)_rangeOfEnclosingWord:(id)arg1;	// IMP=0x0000000000b6b5e8
- (id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2;	// IMP=0x0000000000b6b546
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;	// IMP=0x0000000000b6b2c2
- (id)_normalizedStringForRangeComparison:(id)arg1;	// IMP=0x0000000000b6b26e
- (void)_scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000b6b1a9
- (void)_replaceDocumentWithText:(id)arg1;	// IMP=0x0000000000b6b11d
- (void)_replaceCurrentWordWithText:(id)arg1;	// IMP=0x0000000000b6b0a2
- (void)_transpose;	// IMP=0x0000000000b6aeb5
- (void)_deleteForwardAndNotify:(_Bool)arg1;	// IMP=0x0000000000b6ad85
- (void)_deleteBackwardAndNotify:(_Bool)arg1;	// IMP=0x0000000000b6ad5a
- (void)_deleteTextRange:(id)arg1;	// IMP=0x0000000000b6ac7e
- (void)_deleteToEndOfParagraph;	// IMP=0x0000000000b6ab4b
- (void)_deleteToEndOfLine;	// IMP=0x0000000000b6aa18
- (void)_deleteToStartOfLine;	// IMP=0x0000000000b6a8e2
- (void)_deleteForwardByWord;	// IMP=0x0000000000b6a715
- (void)_deleteByWord;	// IMP=0x0000000000b6a620
- (void)_setCaretSelectionAtEndOfSelection;	// IMP=0x0000000000b6a587
- (id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;	// IMP=0x0000000000b6a3f6
- (id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x0000000000b6a2cf
- (long long)_opposingDirectionFromDirection:(long long)arg1;	// IMP=0x0000000000b6a2b5
- (id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;	// IMP=0x0000000000b6a24d
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;	// IMP=0x0000000000b6a190
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;	// IMP=0x0000000000b6a179
- (void)_expandSelectionToBackwardDeletionCluster;	// IMP=0x0000000000b69fa0
- (void)_moveCurrentSelection:(int)arg1;	// IMP=0x0000000000b69eac
- (void)_extendCurrentSelection:(int)arg1;	// IMP=0x0000000000b69dbd
- (_Bool)_hasMarkedTextOrRangedSelection;	// IMP=0x0000000000b69d49
- (_Bool)_isEmptySelection;	// IMP=0x0000000000b69cdb
- (struct CGRect)_selectionClipRect;	// IMP=0x0000000000b69cbd
- (_Bool)_selectionAtDocumentEnd;	// IMP=0x0000000000b69c48
- (_Bool)_selectionAtDocumentStart;	// IMP=0x0000000000b69bd3
- (_Bool)_selectionAtWordStart;	// IMP=0x0000000000b69b2f
- (void)_setSelectionToPosition:(id)arg1;	// IMP=0x0000000000b69ac9
- (id)_fullText;	// IMP=0x0000000000b69a5f
- (id)_wordContainingCaretSelection;	// IMP=0x0000000000b699bd
- (unsigned int)_characterInRelationToPosition:(id)arg1 amount:(int)arg2;	// IMP=0x0000000000b6989a
- (unsigned int)_characterInRelationToRangedSelection:(int)arg1;	// IMP=0x0000000000b696bb
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;	// IMP=0x0000000000b69632
- (unsigned int)_characterBeforeCaretSelection;	// IMP=0x0000000000b6961b
- (unsigned int)_characterAfterCaretSelection;	// IMP=0x0000000000b69607
- (id)_textRangeFromNSRange:(struct _NSRange)arg1;	// IMP=0x0000000000b69559
- (struct _NSRange)_nsrangeForTextRange:(id)arg1;	// IMP=0x0000000000b694cc
- (int)_indexForTextPosition:(id)arg1;	// IMP=0x0000000000b6947f
- (void)_selectAll;	// IMP=0x0000000000b69441
- (struct _NSRange)_selectedRangeWithinMarkedText;	// IMP=0x0000000000b69350
- (struct _NSRange)_selectedNSRange;	// IMP=0x0000000000b692f3
@property(nonatomic) long long _textInputSource;
@property(readonly, nonatomic) id <UITextInputSuggestionDelegate> textInputSuggestionDelegate;
- (id)_keyInput;	// IMP=0x0000000000b691af
@property(readonly, nonatomic, getter=_proxyTextInput) UIResponder<UITextInput> *__content;
@property(readonly, nonatomic) UIView *textInputView;
- (id)urlScheme;	// IMP=0x00000000012f26d3
- (id)tagName;	// IMP=0x00000000012f2685
- (id)_realNode;	// IMP=0x00000000012f459e
- (id)_textFormElement;	// IMP=0x00000000012f4717
- (id)_previousAssistedNode;	// IMP=0x00000000012f46ba
- (id)_nextAssistedNode;	// IMP=0x00000000012f465d
- (void)_accessoryClear;	// IMP=0x00000000012f4657
- (_Bool)_supportsAccessoryClear;	// IMP=0x00000000012f464f
- (_Bool)_supportsAutoFill;	// IMP=0x00000000012f4647
- (_Bool)_requiresInputView;	// IMP=0x00000000012f4635
- (_Bool)_requiresAccessoryView;	// IMP=0x00000000012f4623
- (void)_stopAssistingDocumentView:(id)arg1;	// IMP=0x00000000012f45ec
- (void)_startAssistingDocumentView:(id)arg1;	// IMP=0x00000000012f45b5
- (_Bool)nodeCanBecomeFirstResponder;	// IMP=0x0000000001303109
- (_Bool)isLikelyToBeginPageLoad;	// IMP=0x0000000001303101
- (id)absoluteQuadsAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000013030ef
- (_Bool)touchCalloutEnabled;	// IMP=0x00000000013030e7
- (id)tapHighlightColor;	// IMP=0x00000000013030b8
- (_Bool)alwaysAttemptToShowTapHighlight;	// IMP=0x00000000013030a6
- (_Bool)showsTapHighlight;	// IMP=0x000000000130309e
@property(nonatomic) long long keyboardType;
- (_Bool)isSecure;	// IMP=0x0000000001313b3d
- (_Bool)isTextControl;	// IMP=0x0000000001313b35
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;	// IMP=0x00000000013139e9
- (id)textDocument;	// IMP=0x0000000001316a14
@property(nonatomic) long long selectionAffinity;
- (_Bool)editing;	// IMP=0x00000000013169b7
- (_Bool)editable;	// IMP=0x00000000013169af
- (id)selectionRectsForRange:(id)arg1;	// IMP=0x0000000001316738
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;	// IMP=0x0000000001316732
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x000000000131672a
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x00000000013166a8
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;	// IMP=0x0000000001316631
- (id)characterRangeAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000131659c
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;	// IMP=0x0000000001316519
- (id)closestPositionToPoint:(struct CGPoint)arg1;	// IMP=0x00000000013164a0
@property(copy, nonatomic) NSDictionary *markedTextStyle;
- (struct CGRect)caretRectForPosition:(id)arg1;	// IMP=0x0000000001316314
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x000000000131619f
- (_Bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x0000000001316155
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x00000000013160e6
- (_Bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x000000000131609c
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;	// IMP=0x0000000001316033
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;	// IMP=0x0000000001315fb6
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000001315f6a
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000001315f1f
@property(readonly, nonatomic) _Bool hasText;
- (void)unmarkText;	// IMP=0x0000000001315e9a
@property(readonly, nonatomic) UITextRange *markedTextRange;
- (void)moveDown;	// IMP=0x0000000001315dba
- (void)moveUp;	// IMP=0x0000000001315d4d
- (void)moveLeft;	// IMP=0x0000000001315ce0
- (void)moveRight;	// IMP=0x0000000001315c73
- (struct CGRect)_lastRectForRange:(id)arg1;	// IMP=0x0000000001315b4d
- (struct CGRect)firstRectForRange:(id)arg1;	// IMP=0x0000000001315a32
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;	// IMP=0x0000000001315a1d
- (void)replaceRange:(id)arg1 withText:(id)arg2;	// IMP=0x0000000001315a05
- (void)replaceRange:(id)arg1 withText:(id)arg2 closeTyping:(_Bool)arg3;	// IMP=0x000000000131590d
- (id)rangeOfEnclosingWord:(id)arg1;	// IMP=0x00000000013158b9
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x000000000131581d
- (id)textInRange:(id)arg1;	// IMP=0x00000000013157a4
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(copy) UITextRange *selectedTextRange;
- (void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(_Bool)arg2;	// IMP=0x00000000013155ad
@property(readonly, nonatomic) UIView<UITextInputPrivate> *_textSelectingContainer;
- (void)setBecomesEditableWithGestures:(_Bool)arg1;	// IMP=0x00000000013154d7
- (_Bool)becomesEditableWithGestures;	// IMP=0x00000000013154cf
- (_Bool)isEditing;	// IMP=0x00000000013154c7
- (_Bool)isEditable;	// IMP=0x00000000013154bf
- (id)content;	// IMP=0x00000000013154b7
- (void)updateSelection;	// IMP=0x00000000013154b1
- (id)selectionView;	// IMP=0x0000000001315486
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (_Bool)isAutoFillMode;	// IMP=0x00000000013153e8
- (void)acceptedAutoFillWord:(id)arg1;	// IMP=0x0000000001315394
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;	// IMP=0x000000000131537a
- (void)updateAutoscroll:(id)arg1;	// IMP=0x0000000001314fa7
- (id)automaticallySelectedOverlay;	// IMP=0x0000000001314f64
- (void)setInitialSelectionBehavior:(int)arg1;	// IMP=0x0000000001314f5e
- (int)initialSelectionBehavior;	// IMP=0x0000000001314f56
@property(nonatomic) long long returnKeyType;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) _Bool contentsIsSingleValue;
@property(nonatomic) id textSuggestionDelegate;
- (_Bool)isShowingPlaceholder;	// IMP=0x0000000001314f16
- (struct CGRect)convertCaretRect:(struct CGRect)arg1;	// IMP=0x0000000001314e88
- (struct CGRect)caretRect;	// IMP=0x0000000001314d72
- (void)setSelectionWithPoint:(struct CGPoint)arg1;	// IMP=0x0000000001314d58
- (void)setSelectionWithPoint:(struct CGPoint)arg1 inset:(double)arg2;	// IMP=0x0000000001314cd5
- (id)text;	// IMP=0x0000000001314c7f
- (void)setText:(id)arg1;	// IMP=0x0000000001314be8
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1 withInset:(double)arg2;	// IMP=0x0000000001314a11
- (int)selectionState;	// IMP=0x00000000013149ce
- (void)selectAll;	// IMP=0x0000000001314971
- (_Bool)selectionAtWordStart;	// IMP=0x000000000131492e
- (_Bool)selectionAtDocumentStart;	// IMP=0x00000000013148eb
- (_Bool)hasSelection;	// IMP=0x00000000013148a8
- (void)extendCurrentSelection:(int)arg1;	// IMP=0x0000000001314821
- (id)rangeByExtendingCurrentSelection:(int)arg1;	// IMP=0x00000000013147cf
- (id)rangeByMovingCurrentSelection:(int)arg1;	// IMP=0x000000000131477d
- (struct _NSRange)selectionRange;	// IMP=0x000000000131473a
- (int)wordOffsetInRange:(id)arg1;	// IMP=0x00000000013146e8
- (id)textColorForCaretSelection;	// IMP=0x00000000013146cf
- (id)fontForCaretSelection;	// IMP=0x00000000013145c0
- (unsigned short)characterAfterCaretSelection;	// IMP=0x000000000131457d
- (void)replaceCurrentWordWithText:(id)arg1;	// IMP=0x00000000013144a6
- (void)clearMarkedText;	// IMP=0x0000000001314485
- (id)rectsForNSRange:(struct _NSRange)arg1;	// IMP=0x0000000001314409
- (void)confirmMarkedText:(id)arg1;	// IMP=0x000000000131431e
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000001314254
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;	// IMP=0x0000000001314202
- (void)removeTextPlaceholder:(id)arg1;	// IMP=0x00000000013141d1
- (id)insertTextPlaceholderWithSize:(struct CGSize)arg1;	// IMP=0x000000000131418f
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;	// IMP=0x000000000131411d
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;	// IMP=0x00000000013140dd
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
- (id)metadataDictionariesForDictationResults;	// IMP=0x0000000001314087
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;	// IMP=0x0000000001314047
- (void)endFloatingCursor;	// IMP=0x000000000131401c
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;	// IMP=0x0000000001313fc6
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000001313f84
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000001313f42
- (id)uiWebDocumentView;	// IMP=0x0000000001313eff
- (void)insertText:(id)arg1;	// IMP=0x0000000001313e7e
- (void)deleteBackward;	// IMP=0x0000000001313e00
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
- (void)endSelectionChange;	// IMP=0x0000000001313dc1
- (void)beginSelectionChange;	// IMP=0x0000000001313d90
- (void)handleKeyWebEvent:(id)arg1;	// IMP=0x0000000001313d3e
- (_Bool)requiresKeyEvents;	// IMP=0x0000000001313d36
- (id)delegate;	// IMP=0x0000000001313d2e
- (void)setSecure:(_Bool)arg1;	// IMP=0x0000000001313d28
- (id)textInputTraits;	// IMP=0x0000000001313bdc
- (void)setupPlaceholderTextIfNeeded;	// IMP=0x0000000001313bd6
@property(nonatomic) _Bool isSingleLineDocument;
- (_Bool)hasContent;	// IMP=0x0000000001313b7e
- (void)takeTraitsFrom:(id)arg1;	// IMP=0x0000000001313b4d

// Remaining properties
@property(copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property(readonly, nonatomic) RTIInputSystemSourceSession *_rtiSourceSession;
@property(nonatomic) _Bool acceptsDictationSearchResults;
@property(nonatomic) _Bool acceptsEmoji;
@property(nonatomic) _Bool acceptsFloatingKeyboard;
@property(nonatomic) _Bool acceptsInitialEmojiKeyboard;
@property(nonatomic) _Bool acceptsPayloads;
@property(nonatomic) _Bool acceptsSplitKeyboard;
@property(nonatomic) long long autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) long long autocorrectionType;
@property(readonly, nonatomic) long long cursorBehavior;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deferBecomingResponder;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isDevicePasscodeEntry) _Bool devicePasscodeEntry;
@property(nonatomic) _Bool disableHandwritingKeyboard;
@property(nonatomic) _Bool disableInputBars;
@property(nonatomic) _Bool disablePrediction;
@property(nonatomic) _Bool displaySecureEditsUsingPlainText;
@property(nonatomic) _Bool displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) struct UIEdgeInsets floatingKeyboardEdgeInsets;
@property(nonatomic) _Bool forceDefaultDictationInfo;
@property(nonatomic) long long forceDictationKeyboardType;
@property(nonatomic) _Bool forceDisableDictation;
@property(nonatomic) _Bool forceEnableDictation;
@property(nonatomic) _Bool forceFloatingKeyboard;
@property(nonatomic) _Bool hasDefaultContents;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hidePrediction;
@property(retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned long long insertionPointWidth;
@property(nonatomic) _Bool isCarPlayIdiom;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) _Bool learnsCorrections;
@property(nonatomic) _Bool loadKeyboardsForSiriLanguage;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) _Bool preferOnlineDictation;
@property(nonatomic) long long preferredKeyboardStyle;
@property(copy, nonatomic) NSString *recentInputIdentifier;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) _Bool returnKeyGoesToNextResponder;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIColor *selectionBorderColor;
@property(nonatomic) double selectionBorderWidth;
@property(nonatomic) double selectionCornerRadius;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(nonatomic) struct UIEdgeInsets selectionEdgeInsets;
@property(nonatomic) long long selectionGranularity;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) _Bool showDictationButton;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(retain, nonatomic) _UISupplementalLexicon *supplementalLexicon;
@property(retain, nonatomic) UIImage *supplementalLexiconAmbiguousItemIcon;
@property(readonly, nonatomic) _Bool supportsImagePaste;
@property(nonatomic) _Bool suppressReturnKeyStyling;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) UITextRange *textRangeForServicesInteraction;
@property(nonatomic) long long textScriptType;
@property(nonatomic) int textSelectionBehavior;
@property(retain, nonatomic) UIColor *underlineColorForSpelling;
@property(retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property(nonatomic) _Bool useAutomaticEndpointing;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization;
@property(nonatomic) struct _NSRange validTextRange;
@end

