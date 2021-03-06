//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISearchTextField.h>

#import <SpotlightUIInternal/UIGestureRecognizerDelegate-Protocol.h>
#import <SpotlightUIInternal/UIScribbleInteractionDelegate-Protocol.h>

@class MTMaterialView, NSString, NSTimer, SPSearchEntity, SPUICompletionStringModel, SPUICompletionStringView, SPUIHeaderBlurView, UIGestureRecognizer, UIImage, UIResponder, UIScribbleInteraction, UIView;
@protocol SPUITextFieldDelegate, UITextCursorAssertion;

@interface SPUITextField : UISearchTextField <UIGestureRecognizerDelegate, UIScribbleInteractionDelegate>
{
    _Bool _useChunkyMetrics;	// 8 = 0x8
    _Bool _ignoreTokensUpdate;	// 9 = 0x9
    _Bool _lastUpdateWasDeletion;	// 10 = 0xa
    UIResponder *_responderForKeyboardInput;	// 16 = 0x10
    SPUICompletionStringModel *_searchFieldModel;	// 24 = 0x18
    long long _activeInterfaceOrientation;	// 32 = 0x20
    UIView *_tintView;	// 40 = 0x28
    SPUIHeaderBlurView *_blurView;	// 48 = 0x30
    MTMaterialView *_materialView;	// 56 = 0x38
    SPUICompletionStringView *_hintingView;	// 64 = 0x40
    UIGestureRecognizer *_completionTapGestureRecognizer;	// 72 = 0x48
    id <UITextCursorAssertion> _caretAssertion;	// 80 = 0x50
    UIScribbleInteraction *_scribbleInteraction;	// 88 = 0x58
    NSString *_restorationStringOnKBMovement;	// 96 = 0x60
    NSTimer *_switchBackToSuggestionsTimer;	// 104 = 0x68
    UIImage *_microphoneImage;	// 112 = 0x70
}

+ (void)updateBlueButton;	// IMP=0x0000000000012f5b
+ (id)removeDictationCharacterInString:(id)arg1;	// IMP=0x0000000000010e5b
+ (Class)_backgroundViewClass;	// IMP=0x0000000000010b21
+ (id)webEntityStringForEntity:(id)arg1;	// IMP=0x000000000000ebfb
- (void).cxx_destruct;	// IMP=0x0000000000013225
@property(retain) UIImage *microphoneImage; // @synthesize microphoneImage=_microphoneImage;
@property(retain) NSTimer *switchBackToSuggestionsTimer; // @synthesize switchBackToSuggestionsTimer=_switchBackToSuggestionsTimer;
@property(retain) NSString *restorationStringOnKBMovement; // @synthesize restorationStringOnKBMovement=_restorationStringOnKBMovement;
@property(retain) UIScribbleInteraction *scribbleInteraction; // @synthesize scribbleInteraction=_scribbleInteraction;
@property(retain) id <UITextCursorAssertion> caretAssertion; // @synthesize caretAssertion=_caretAssertion;
@property _Bool lastUpdateWasDeletion; // @synthesize lastUpdateWasDeletion=_lastUpdateWasDeletion;
@property(retain) UIGestureRecognizer *completionTapGestureRecognizer; // @synthesize completionTapGestureRecognizer=_completionTapGestureRecognizer;
@property _Bool ignoreTokensUpdate; // @synthesize ignoreTokensUpdate=_ignoreTokensUpdate;
@property(retain) SPUICompletionStringView *hintingView; // @synthesize hintingView=_hintingView;
@property(retain) MTMaterialView *materialView; // @synthesize materialView=_materialView;
@property(retain, nonatomic) SPUIHeaderBlurView *blurView; // @synthesize blurView=_blurView;
@property(retain) UIView *tintView; // @synthesize tintView=_tintView;
@property(nonatomic) long long activeInterfaceOrientation; // @synthesize activeInterfaceOrientation=_activeInterfaceOrientation;
@property(retain, nonatomic) SPUICompletionStringModel *searchFieldModel; // @synthesize searchFieldModel=_searchFieldModel;
@property(nonatomic) _Bool useChunkyMetrics; // @synthesize useChunkyMetrics=_useChunkyMetrics;
@property(nonatomic) __weak UIResponder *responderForKeyboardInput; // @synthesize responderForKeyboardInput=_responderForKeyboardInput;
@property(readonly) _Bool completionResultIsPotentiallyPunchout;
- (void)updateBorderVisualStyling;	// IMP=0x0000000000012e2e
- (void)updateCaretVisibility;	// IMP=0x0000000000012dd3
- (void)resetMicrophoneButtonWithScale:(long long)arg1;	// IMP=0x0000000000012c9e
- (void)updateFocusResult:(id)arg1 cardSection:(id)arg2 focusIsOnFirstResult:(_Bool)arg3;	// IMP=0x0000000000012a9a
- (void)scribbleInteractionWillBeginWriting:(id)arg1;	// IMP=0x0000000000012a81
- (void)layoutSubviews;	// IMP=0x0000000000012859
- (void)unmarkText;	// IMP=0x00000000000127e0
- (void)removeCaretAssertion;	// IMP=0x0000000000012786
- (void)_promoteCompletionAndMoveForward:(_Bool)arg1;	// IMP=0x000000000001260a
- (void)promoteCompletionIfPossibleAndMoveForward:(_Bool)arg1;	// IMP=0x0000000000012571
- (void)spotlight_rightArrowPressed;	// IMP=0x000000000001255a
- (void)spotlight_leftArrowPressed;	// IMP=0x0000000000012546
- (void)updateCaretVisibility:(_Bool)arg1;	// IMP=0x000000000001244c
- (void)escapeKeyCommand;	// IMP=0x00000000000122f4
- (void)commandCPressed;	// IMP=0x000000000001224c
- (void)commandBPressed;	// IMP=0x000000000001220f
- (void)enterKeyPressed;	// IMP=0x00000000000121b5
- (void)toggleBackToCommittedSearch;	// IMP=0x0000000000012178
- (void)commitToCommitedSearch;	// IMP=0x000000000001211e
- (void)toggleCommitedSearch;	// IMP=0x000000000001201a
- (id)keyCommands;	// IMP=0x0000000000011d2c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000011c8c
- (long long)_focusItemDeferralMode;	// IMP=0x0000000000011c81
- (_Bool)canBecomeFocused;	// IMP=0x0000000000011c79
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000011948
- (void)updateWithPrimaryColor:(id)arg1 secondaryColor:(id)arg2 isOnDarkBackground:(_Bool)arg3;	// IMP=0x000000000001125c
@property(readonly) SPSearchEntity *searchEntity;
- (_Bool)hasContent;	// IMP=0x000000000001102c
- (void)updateRightView;	// IMP=0x0000000000010fca
- (void)updateTextRange:(id)arg1;	// IMP=0x0000000000010f04
- (void)updateToken:(id)arg1;	// IMP=0x0000000000010e7e
- (void)clearAllTokens;	// IMP=0x0000000000010d92
@property(readonly, nonatomic) NSString *textIncludingTokens;
@property(readonly, nonatomic) _Bool needsLandscapeHeight;
- (double)widthOfPlaceholderLabel;	// IMP=0x0000000000010a9a
- (struct CGRect)rectForMagnifierForOriginalRect:(struct CGRect)arg1 bounds:(struct CGRect)arg2 isLeftSide:(_Bool)arg3;	// IMP=0x0000000000010880
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000001076c
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000010686
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000001046c
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000000103b8
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000001033f
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000000102c6
- (struct CGRect)_shiftedBoundsForText:(struct CGRect)arg1;	// IMP=0x000000000001018b
- (_Bool)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;	// IMP=0x0000000000010183
- (double)textFieldHeight;	// IMP=0x0000000000010082
- (id)preferredFocusEnvironments;	// IMP=0x000000000000ff40
- (void)resetClearButtonWithScale:(long long)arg1;	// IMP=0x000000000000feae
- (void)applyMetrics;	// IMP=0x000000000000fb70
- (void)resetPhoneClearButton;	// IMP=0x000000000000fb13
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000000fabd
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000000fa51
- (void)setTextColor:(id)arg1;	// IMP=0x000000000000f9bd
- (void)tintColorDidChange;	// IMP=0x000000000000f92a
- (_Bool)shouldPromoteCompletion;	// IMP=0x000000000000f8ae
- (void)selectAll:(id)arg1;	// IMP=0x000000000000f856
- (void)removeCompletionAndHighlight;	// IMP=0x000000000000f787
- (_Bool)becomeFirstResponder;	// IMP=0x000000000000f6c1
- (_Bool)resignFirstResponder;	// IMP=0x000000000000f62a
- (void)resetDeletion;	// IMP=0x000000000000f5f8
- (struct _NSRange)insertFilteredText:(id)arg1;	// IMP=0x000000000000f5a3
- (void)insertText:(id)arg1;	// IMP=0x000000000000f53f
- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;	// IMP=0x000000000000f4af
- (_Bool)keyboardInputShouldDelete:(id)arg1;	// IMP=0x000000000000f30f
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000000f219
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000000f0d1
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000000f07f
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000000ef92
- (id)nextResponder;	// IMP=0x000000000000eef0
- (id)currentQueryContext;	// IMP=0x000000000000eea0
@property(readonly, nonatomic) _Bool optOutOfGoButton;
- (void)setFont:(id)arg1;	// IMP=0x000000000000ed2c
- (void)keyboardInputChangedSelection:(id)arg1;	// IMP=0x000000000000eceb
- (id)focusGroupIdentifier;	// IMP=0x000000000000ebe2
- (void)removeCompletionsOrEntitiesAndGoToSuggestions:(_Bool)arg1;	// IMP=0x000000000000ea5d
- (void)textFieldWasTapped;	// IMP=0x000000000000e929
- (id)init;	// IMP=0x000000000000e131

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SPUITextFieldDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

