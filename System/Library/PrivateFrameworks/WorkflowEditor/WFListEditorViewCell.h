//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <WorkflowEditor/WFListEditorViewDelegate-Protocol.h>
#import <WorkflowEditor/WFTextTokenEditorViewDelegate-Protocol.h>
#import <WorkflowEditor/WFVariableUIDelegate-Protocol.h>

@class NSSet, NSString, UIButton, UIViewController, WFPropertyListParameterValue, WFTextTokenChooser, WFTextTokenEditorView, WFVariableConfigurationButton;
@protocol NSObject, WFComponentNavigationContext, WFListEditorViewCellDelegate, WFVariableProvider, WFVariableUIDelegate;

@interface WFListEditorViewCell : UITableViewCell <WFTextTokenEditorViewDelegate, WFListEditorViewDelegate, WFVariableUIDelegate>
{
    _Bool _standaloneVariablesAsContentItems;	// 8 = 0x8
    _Bool _variablesDisabled;	// 9 = 0x9
    id <WFListEditorViewCellDelegate> _delegate;	// 16 = 0x10
    id <WFComponentNavigationContext> _navigationContext;	// 24 = 0x18
    id <WFVariableProvider> _variableProvider;	// 32 = 0x20
    id <WFVariableUIDelegate> _variableUIDelegate;	// 40 = 0x28
    NSSet *_allowedVariableTypes;	// 48 = 0x30
    id <NSObject> _value;	// 56 = 0x38
    CDUnknownBlockType _updateBlock;	// 64 = 0x40
    WFTextTokenEditorView *_valueEditor;	// 72 = 0x48
    WFVariableConfigurationButton *_variableValueButton;	// 80 = 0x50
    UIButton *_valueButton;	// 88 = 0x58
    UIViewController *_presentedViewController;	// 96 = 0x60
    CDUnknownBlockType _updateStateBlock;	// 104 = 0x68
    WFTextTokenChooser *_textTokenChooser;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000223fe2
@property(retain, nonatomic) WFTextTokenChooser *textTokenChooser; // @synthesize textTokenChooser=_textTokenChooser;
@property(copy, nonatomic) CDUnknownBlockType updateStateBlock; // @synthesize updateStateBlock=_updateStateBlock;
@property(nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(readonly, nonatomic) UIButton *valueButton; // @synthesize valueButton=_valueButton;
@property(readonly, nonatomic) WFVariableConfigurationButton *variableValueButton; // @synthesize variableValueButton=_variableValueButton;
@property(readonly, nonatomic) WFTextTokenEditorView *valueEditor; // @synthesize valueEditor=_valueEditor;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(copy, nonatomic) id <NSObject> value; // @synthesize value=_value;
@property(nonatomic) _Bool variablesDisabled; // @synthesize variablesDisabled=_variablesDisabled;
@property(nonatomic) _Bool standaloneVariablesAsContentItems; // @synthesize standaloneVariablesAsContentItems=_standaloneVariablesAsContentItems;
@property(copy, nonatomic) NSSet *allowedVariableTypes; // @synthesize allowedVariableTypes=_allowedVariableTypes;
@property(nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;
@property(nonatomic) __weak id <WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property(nonatomic) __weak id <WFComponentNavigationContext> navigationContext; // @synthesize navigationContext=_navigationContext;
@property(nonatomic) __weak id <WFListEditorViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)variableValueCleared:(id)arg1;	// IMP=0x0000000000223d13
- (void)variableValueChanged:(id)arg1;	// IMP=0x0000000000223ba2
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(CDUnknownBlockType)arg3 goBackHandler:(CDUnknownBlockType)arg4 scrolledAwayHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000223a5a
- (void)showActionOutputPickerFromSourceResponder:(id)arg1 allowShortcutInput:(_Bool)arg2 variableProvider:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000022394c
- (void)updateValueEditorResultType;	// IMP=0x000000000022380f
- (void)listEditorView:(id)arg1 didUpdateWithItem:(id)arg2;	// IMP=0x0000000000223516
- (void)textTokenEditorTextDidEndEditing:(id)arg1;	// IMP=0x0000000000223504
- (void)textTokenEditorTextDidChange:(id)arg1;	// IMP=0x00000000002234f2
- (void)notifyDelegateTextUpdatedThrottled;	// IMP=0x0000000000223497
- (void)notifyDelegateTextUpdated;	// IMP=0x00000000002232f3
- (void)configureEditorViewController:(id)arg1;	// IMP=0x00000000002232ed
- (void)updateEditorBlocks;	// IMP=0x00000000002232e7
- (void)beginEditingWithContext:(id)arg1;	// IMP=0x0000000000223257
- (void)valueButtonTapped:(id)arg1;	// IMP=0x00000000002225ca
- (id)valueTitle;	// IMP=0x000000000022255a
- (void)updateWithValueState:(id)arg1;	// IMP=0x0000000000222554
@property(readonly, nonatomic) WFPropertyListParameterValue *valueEditorValue;
- (void)updateValueEditorWithValue:(id)arg1;	// IMP=0x0000000000222163
- (void)collectionValueUpdatedWithCount:(unsigned long long)arg1;	// IMP=0x00000000002220d6
- (void)setValueButtonTitle:(id)arg1;	// IMP=0x0000000000221f59
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000221dc9
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000221d38
- (void)layoutSubviews;	// IMP=0x0000000000221a4e
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000221760

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

