//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextView.h>

#import <WorkflowEditor/WFTextAttachmentInteractionDelegate-Protocol.h>
#import <WorkflowEditor/WFTextTokenFieldImpl-Protocol.h>
#import <WorkflowEditor/WFVariableConfigurationResponderDelegate-Protocol.h>
#import <WorkflowEditor/WFVariableDelegate-Protocol.h>
#import <WorkflowEditor/WFVariableInsertionFieldDelegate-Protocol.h>
#import <WorkflowEditor/WFVariableTypingContext-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSSet, NSString, UIColor, UIFont, UITextInputPasswordRules, UITextPosition, UITextRange, UIView, WFTextAttachmentInteraction, WFVariableConfigurationResponder, WFVariableInputCoordinator, WFVariableString;
@protocol UITextInputDelegate, UITextInputTokenizer, WFVariableProvider, WFVariableUIDelegate;

@interface WFTextTokenTextView : UITextView <WFVariableDelegate, WFTextAttachmentInteractionDelegate, WFVariableConfigurationResponderDelegate, WFVariableTypingContext, WFTextTokenFieldImpl, WFVariableInsertionFieldDelegate>
{
    _Bool _variablesDisabled;	// 8 = 0x8
    _Bool _rejectBecomingFirstResponder;	// 9 = 0x9
    WFVariableString *_variableString;	// 16 = 0x10
    id <WFVariableProvider> _variableProvider;	// 24 = 0x18
    id <WFVariableUIDelegate> _variableUIDelegate;	// 32 = 0x20
    NSSet *_allowedVariableTypes;	// 40 = 0x28
    unsigned long long syntaxHighlightingType;	// 48 = 0x30
    unsigned long long _variableResultType;	// 56 = 0x38
    CDUnknownBlockType _textUpdatedBlock;	// 64 = 0x40
    CDUnknownBlockType _variableInsertionBlock;	// 72 = 0x48
    CDUnknownBlockType _revealBlock;	// 80 = 0x50
    WFVariableInputCoordinator *_variableCoordinator;	// 88 = 0x58
    WFVariableConfigurationResponder *_variableResponder;	// 96 = 0x60
    WFTextAttachmentInteraction *_attachmentInteraction;	// 104 = 0x68
}

+ (_Bool)doneButtonNeededForInputTraits:(id)arg1;	// IMP=0x00000000002ca6ff
- (void).cxx_destruct;	// IMP=0x00000000002c9df5
@property(nonatomic) _Bool rejectBecomingFirstResponder; // @synthesize rejectBecomingFirstResponder=_rejectBecomingFirstResponder;
@property(retain, nonatomic) WFTextAttachmentInteraction *attachmentInteraction; // @synthesize attachmentInteraction=_attachmentInteraction;
@property(retain, nonatomic) WFVariableConfigurationResponder *variableResponder; // @synthesize variableResponder=_variableResponder;
@property(retain, nonatomic) WFVariableInputCoordinator *variableCoordinator; // @synthesize variableCoordinator=_variableCoordinator;
@property(copy, nonatomic) CDUnknownBlockType revealBlock; // @synthesize revealBlock=_revealBlock;
@property(copy, nonatomic) CDUnknownBlockType variableInsertionBlock; // @synthesize variableInsertionBlock=_variableInsertionBlock;
@property(copy, nonatomic) CDUnknownBlockType textUpdatedBlock; // @synthesize textUpdatedBlock=_textUpdatedBlock;
@property(nonatomic) unsigned long long variableResultType; // @synthesize variableResultType=_variableResultType;
@property(nonatomic) unsigned long long syntaxHighlightingType; // @synthesize syntaxHighlightingType;
@property(copy, nonatomic) NSSet *allowedVariableTypes; // @synthesize allowedVariableTypes=_allowedVariableTypes;
@property(nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;
@property(nonatomic) __weak id <WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property(nonatomic) _Bool variablesDisabled; // @synthesize variablesDisabled=_variablesDisabled;
@property(copy, nonatomic) WFVariableString *variableString; // @synthesize variableString=_variableString;
- (void)paste:(id)arg1;	// IMP=0x00000000002c99fa
- (void)copy:(id)arg1;	// IMP=0x00000000002c98ee
- (void)cut:(id)arg1;	// IMP=0x00000000002c984d
- (void)variableResponder:(id)arg1 presentPromptWithTitle:(id)arg2 message:(id)arg3 fieldConfigurationHandler:(CDUnknownBlockType)arg4 commitHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002c94fb
- (void)variableResponderDidRevealAction:(id)arg1;	// IMP=0x00000000002c9216
- (_Bool)variableResponderHasText:(id)arg1;	// IMP=0x00000000002c9204
- (void)variableResponderDidReturnToKeyboard:(id)arg1;	// IMP=0x00000000002c90c3
- (void)variableResponderDidDelete:(id)arg1 withReplacementText:(id)arg2;	// IMP=0x00000000002c8e75
- (void)variableResponder:(id)arg1 didUpdateVariable:(id)arg2;	// IMP=0x00000000002c8b29
- (void)variableResponderDidEndEditing:(id)arg1;	// IMP=0x00000000002c8a6e
- (void)variableResponderWillEndEditing:(id)arg1;	// IMP=0x00000000002c8a57
- (void)variableResponderDidBeginEditing:(id)arg1;	// IMP=0x00000000002c89a7
- (void)textAttachmentInteraction:(id)arg1 didTapTextAttachment:(id)arg2 inCharacterRange:(struct _NSRange)arg3;	// IMP=0x00000000002c8863
- (void)enumerateVariablesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002c8765
- (void)variableDidChange:(id)arg1;	// IMP=0x00000000002c86e0
- (void)beginEditingWithContext:(id)arg1;	// IMP=0x00000000002c857f
- (void)beginConfiguringVariable:(id)arg1;	// IMP=0x00000000002c83e1
- (void)insertVariable:(id)arg1;	// IMP=0x00000000002c80d3
- (void)updateAppearanceOfAllVariableAttachments;	// IMP=0x00000000002c8087
- (void)configureAppearanceOfVariableAttachment:(id)arg1;	// IMP=0x00000000002c7f9d
@property(copy, nonatomic) NSAttributedString *attributedText;
- (void)_updateVariableString:(id)arg1;	// IMP=0x00000000002c7dbe
- (void)handleTextDidEndEditingNotification;	// IMP=0x00000000002c7d80
- (void)handleTextDidChangeNotification;	// IMP=0x00000000002c7d45
- (void)textUpdated;	// IMP=0x00000000002c7cc0
- (void)tintColorDidChange;	// IMP=0x00000000002c7c3a
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIFont *font;
- (void)setTextContainerInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000002c7a57
@property(readonly, nonatomic) NSArray *currentVariables;
- (void)updateDoneButtonPresence;	// IMP=0x00000000002c799f
- (void)updateVariableBlock;	// IMP=0x00000000002c7828
@property(nonatomic) long long returnKeyType;
@property(nonatomic) struct _NSRange selectedRange;
@property(copy) UITextRange *selectedTextRange;
@property(nonatomic) long long keyboardType;
- (void)updateAllowedVariableTypes;	// IMP=0x00000000002c74f8
@property(copy, nonatomic) NSString *placeholder;
- (_Bool)resignFirstResponder;	// IMP=0x00000000002c71fa
- (_Bool)becomeFirstResponder;	// IMP=0x00000000002c708d
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000002c7078
- (void)dealloc;	// IMP=0x00000000002c6f6d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002c6b9e

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(copy, nonatomic) UIColor *backgroundColor; // @dynamic backgroundColor;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isEditable) _Bool editable;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) _Bool hasText;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
@property(nonatomic) long long keyboardAppearance;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long selectionAffinity;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIColor *textColor;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) UIView *textInputView;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;

@end
