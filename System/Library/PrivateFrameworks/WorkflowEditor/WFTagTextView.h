//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextView.h>

#import <WorkflowEditor/WFTextField-Protocol.h>

@class NSAttributedString, NSSet, NSString, UIColor, UIFont, WFVariableInputCoordinator;
@protocol WFVariableProvider, WFVariableUIDelegate;

@interface WFTagTextView : UITextView <WFTextField>
{
    _Bool _variablesDisabled;	// 8 = 0x8
    id <WFVariableProvider> _variableProvider;	// 16 = 0x10
    id <WFVariableUIDelegate> _variableUIDelegate;	// 24 = 0x18
    NSSet *_allowedVariableTypes;	// 32 = 0x20
    unsigned long long _syntaxHighlightingType;	// 40 = 0x28
    CDUnknownBlockType _variableBlock;	// 48 = 0x30
    WFVariableInputCoordinator *_variableCoordinator;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000022d253
@property(retain, nonatomic) WFVariableInputCoordinator *variableCoordinator; // @synthesize variableCoordinator=_variableCoordinator;
@property(copy, nonatomic) CDUnknownBlockType variableBlock; // @synthesize variableBlock=_variableBlock;
@property(nonatomic) unsigned long long syntaxHighlightingType; // @synthesize syntaxHighlightingType=_syntaxHighlightingType;
@property(copy, nonatomic) NSSet *allowedVariableTypes; // @synthesize allowedVariableTypes=_allowedVariableTypes;
@property(nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;
@property(nonatomic) __weak id <WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property(nonatomic) _Bool variablesDisabled; // @synthesize variablesDisabled=_variablesDisabled;
- (void)updateDoneButtonPresence;	// IMP=0x000000000022d0df
- (void)setReturnKeyType:(long long)arg1;	// IMP=0x000000000022d09e
- (void)updateAllowedVariableTypes;	// IMP=0x000000000022ce8f
- (void)paste:(id)arg1;	// IMP=0x000000000022c9d4
- (void)copy:(id)arg1;	// IMP=0x000000000022c7db
- (void)cut:(id)arg1;	// IMP=0x000000000022c621
- (void)updateTextAttachments;	// IMP=0x000000000022c556
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (void)textDidChange:(id)arg1;	// IMP=0x000000000022c4c2
- (void)updateTextContainerInsets;	// IMP=0x000000000022c396
- (void)tintColorDidChange;	// IMP=0x000000000022c31d
@property(copy, nonatomic) NSString *placeholder;
@property(retain, nonatomic) UIFont *font;
@property(nonatomic) long long textAlignment;
- (_Bool)resignFirstResponder;	// IMP=0x000000000022bf47
- (_Bool)becomeFirstResponder;	// IMP=0x000000000022bdca
- (void)dealloc;	// IMP=0x000000000022bd48
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;	// IMP=0x000000000022bc4b

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(copy, nonatomic) UIColor *backgroundColor; // @dynamic backgroundColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isEditable) _Bool editable;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartQuotesType;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIColor *textColor;
@property(copy, nonatomic) NSString *textContentType;

@end

