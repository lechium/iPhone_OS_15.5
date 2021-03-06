//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <WorkflowEditor/UITextFieldDelegate-Protocol.h>

@class NSSet, NSString, WFTextTokenTextField;
@protocol WFVariableProvider, WFVariableUIDelegate;

@interface WFNumberField : UIView <UITextFieldDelegate>
{
    _Bool _allowsDecimalNumbers;	// 8 = 0x8
    _Bool _allowsNegatingNumbers;	// 9 = 0x9
    CDUnknownBlockType _doneBlock;	// 16 = 0x10
    CDUnknownBlockType _updateBlock;	// 24 = 0x18
    CDUnknownBlockType _variableBlock;	// 32 = 0x20
    WFTextTokenTextField *_textField;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000277eba
@property(nonatomic) __weak WFTextTokenTextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) CDUnknownBlockType variableBlock; // @synthesize variableBlock=_variableBlock;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
@property(nonatomic) _Bool allowsNegatingNumbers; // @synthesize allowsNegatingNumbers=_allowsNegatingNumbers;
@property(nonatomic) _Bool allowsDecimalNumbers; // @synthesize allowsDecimalNumbers=_allowsDecimalNumbers;
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0000000000277de0
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0000000000277d2b
- (void)textDidChange;	// IMP=0x0000000000277b6b
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000277b27
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate;
@property(nonatomic) __weak id <WFVariableProvider> variableProvider;
@property(copy, nonatomic) NSSet *allowedVariableTypes;
@property(nonatomic) long long textAlignment;
@property(copy, nonatomic) NSString *placeholder;
@property(nonatomic, getter=isEditable) _Bool editable;
@property(copy, nonatomic) NSString *text;
- (void)negateText;	// IMP=0x0000000000277321
- (void)dealloc;	// IMP=0x0000000000277272
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000027706d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

