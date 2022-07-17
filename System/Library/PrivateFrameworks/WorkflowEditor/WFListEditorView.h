//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <WorkflowEditor/UITableViewDataSource-Protocol.h>
#import <WorkflowEditor/UITableViewDelegatePrivate-Protocol.h>
#import <WorkflowEditor/WFListEditorViewCellDelegate-Protocol.h>

@class NSArray, NSSet, NSString, UITableView;
@protocol WFComponentNavigationContext, WFListEditorViewDelegate, WFVariableProvider, WFVariableUIDelegate;

@interface WFListEditorView : UIView <UITableViewDataSource, UITableViewDelegatePrivate, WFListEditorViewCellDelegate>
{
    _Bool _variablesDisabled;	// 8 = 0x8
    _Bool _standaloneVariablesAsContentItems;	// 9 = 0x9
    NSString *_localizedNewItemTypeName;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    id <WFListEditorViewDelegate> _delegate;	// 32 = 0x20
    NSArray *_items;	// 40 = 0x28
    NSSet *_allowedValueTypes;	// 48 = 0x30
    id <WFVariableProvider> _variableProvider;	// 56 = 0x38
    id <WFVariableUIDelegate> _variableUIDelegate;	// 64 = 0x40
    NSSet *_allowedVariableTypes;	// 72 = 0x48
    id <WFComponentNavigationContext> _navigationContext;	// 80 = 0x50
    CDUnknownBlockType _updateBlock;	// 88 = 0x58
}

+ (Class)cellClass;	// IMP=0x00000000002c1b83
- (void).cxx_destruct;	// IMP=0x00000000002c18ee
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(nonatomic) __weak id <WFComponentNavigationContext> navigationContext; // @synthesize navigationContext=_navigationContext;
@property(nonatomic) _Bool standaloneVariablesAsContentItems; // @synthesize standaloneVariablesAsContentItems=_standaloneVariablesAsContentItems;
@property(nonatomic) _Bool variablesDisabled; // @synthesize variablesDisabled=_variablesDisabled;
@property(copy, nonatomic) NSSet *allowedVariableTypes; // @synthesize allowedVariableTypes=_allowedVariableTypes;
@property(nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;
@property(nonatomic) __weak id <WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property(copy, nonatomic) NSSet *allowedValueTypes; // @synthesize allowedValueTypes=_allowedValueTypes;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <WFListEditorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)accessibilityElements;	// IMP=0x00000000002c1765
- (_Bool)isAccessibilityElement;	// IMP=0x00000000002c175d
- (void)keyboardWillChangeFrame:(id)arg1;	// IMP=0x00000000002c1415
- (void)listEditorCell:(id)arg1 didUpdateToValue:(id)arg2;	// IMP=0x00000000002c12f2
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;	// IMP=0x00000000002c103c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000002c0f8d
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x00000000002c0eba
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x00000000002c0e48
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000002c0db6
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002c0d2f
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x00000000002c0cca
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002c0990
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000002c0905
- (void)layoutSubviews;	// IMP=0x00000000002c086f
- (id)addNewItemIndexPath;	// IMP=0x00000000002c07fd
- (void)configureCell:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000002c059c
- (void)configureCell:(id)arg1 withItem:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000002c0521
- (void)insertNewItemOfType:(long long)arg1;	// IMP=0x00000000002c051b
- (void)updateCells;	// IMP=0x00000000002c03f3
- (void)beginEditingWithContext:(id)arg1;	// IMP=0x00000000002c028d
- (void)appendNewItem;	// IMP=0x00000000002bfdad
- (void)deleteItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002bfb10
- (void)movedItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x00000000002bf9a0
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000002bf7cc
- (void)updatedItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000002bf6bd
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
@property(copy, nonatomic) NSString *localizedNewItemTypeName; // @synthesize localizedNewItemTypeName=_localizedNewItemTypeName;
@property(nonatomic, getter=isEditable) _Bool editable;
- (void)_setItems:(id)arg1;	// IMP=0x00000000002bf25c
- (void)dealloc;	// IMP=0x00000000002bf12f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002bee9e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
