//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextInput-Protocol.h>

@class NSDictionary, NSString, UIResponder, UITextInputPasswordRules, UITextPosition, UITextRange, UIView;
@protocol UITextInput, UITextInputDelegate, UITextInputTokenizer;

__attribute__((visibility("hidden")))
@interface UITextInteractionSelectableInputDelegate <UITextInput>
{
    UIResponder<UITextInput> *_textInput;	// 8 = 0x8
}

+ (id)selectableInputDelegateWithTextInput:(id)arg1;	// IMP=0x0000000000bb9ea5
- (void).cxx_destruct;	// IMP=0x0000000000bbb118
- (id)_moveToEndOfDocument:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bbb021
- (id)_moveToEndOfLine:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bbaf2a
- (id)_moveToEndOfParagraph:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bbae33
- (id)_moveToEndOfWord:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bbad3c
- (id)_moveToStartOfDocument:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bbac45
- (id)_moveToStartOfLine:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bbab4e
- (id)_moveToStartOfParagraph:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bbaa57
- (id)_moveToStartOfWord:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bba960
- (id)_moveRight:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bba869
- (id)_moveLeft:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bba772
- (id)_moveDown:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bba67b
- (id)_moveUp:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000bba584
- (void)_unmarkText;	// IMP=0x0000000000bba54b
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000000bba512
- (void)_moveCurrentSelection:(int)arg1;	// IMP=0x0000000000bba4d9
- (void)_deleteForwardAndNotify:(_Bool)arg1;	// IMP=0x0000000000bba4a0
- (void)_deleteBackwardAndNotify:(_Bool)arg1;	// IMP=0x0000000000bba467
- (id)characterRangeAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000bba44a
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;	// IMP=0x0000000000bba42d
- (id)closestPositionToPoint:(struct CGPoint)arg1;	// IMP=0x0000000000bba410
- (id)selectionRectsForRange:(id)arg1;	// IMP=0x0000000000bba3f3
- (struct CGRect)caretRectForPosition:(id)arg1;	// IMP=0x0000000000bba3b5
- (struct CGRect)firstRectForRange:(id)arg1;	// IMP=0x0000000000bba377
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;	// IMP=0x0000000000bba33e
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000bba321
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000bba304
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;	// IMP=0x0000000000bba2e7
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000bba273
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000bba256
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;	// IMP=0x0000000000bba239
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;	// IMP=0x0000000000bba21c
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000bba1ff
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;	// IMP=0x0000000000bba18c
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000000bba153
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
- (void)replaceRange:(id)arg1 withText:(id)arg2;	// IMP=0x0000000000bba06d
- (id)textInRange:(id)arg1;	// IMP=0x0000000000bba050
- (void)deleteBackward;	// IMP=0x0000000000bba017
- (void)insertText:(id)arg1;	// IMP=0x0000000000bb9fde
@property(readonly, nonatomic) _Bool hasText;
- (id)nextResponder;	// IMP=0x0000000000bb9fac
- (void)updateSelectionRects;	// IMP=0x0000000000bb9efc
@property(readonly, nonatomic) UIResponder<UITextInput> *textInput;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long selectionAffinity;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) UIView *textInputView;

@end

