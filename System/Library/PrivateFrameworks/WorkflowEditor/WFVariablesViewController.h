//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <WorkflowEditor/UICollectionViewDataSource-Protocol.h>
#import <WorkflowEditor/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol WFVariableProvider, WFVariablesViewControllerDelegate;

@interface WFVariablesViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _showsUserDefinedVariables;	// 8 = 0x8
    _Bool _showsMagicVariableButton;	// 9 = 0x9
    id <WFVariablesViewControllerDelegate> _delegate;	// 16 = 0x10
    id <WFVariableProvider> _variableProvider;	// 24 = 0x18
    NSArray *_userDefinedVariableNames;	// 32 = 0x20
    NSArray *_specialVariables;	// 40 = 0x28
    NSArray *_suggestedVariables;	// 48 = 0x30
    long long _scrollDirection;	// 56 = 0x38
    UICollectionView *_collectionView;	// 64 = 0x40
    UICollectionViewFlowLayout *_collectionViewLayout;	// 72 = 0x48
    NSMutableDictionary *_cellWidthCache;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000002601e0
@property(readonly, nonatomic) NSMutableDictionary *cellWidthCache; // @synthesize cellWidthCache=_cellWidthCache;
@property(nonatomic) __weak UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(copy, nonatomic) NSArray *suggestedVariables; // @synthesize suggestedVariables=_suggestedVariables;
@property(copy, nonatomic) NSArray *specialVariables; // @synthesize specialVariables=_specialVariables;
@property(copy, nonatomic) NSArray *userDefinedVariableNames; // @synthesize userDefinedVariableNames=_userDefinedVariableNames;
@property(nonatomic) _Bool showsMagicVariableButton; // @synthesize showsMagicVariableButton=_showsMagicVariableButton;
@property(nonatomic) _Bool showsUserDefinedVariables; // @synthesize showsUserDefinedVariables=_showsUserDefinedVariables;
@property(nonatomic) __weak id <WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property(nonatomic) __weak id <WFVariablesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)variableAtIndexPath:(id)arg1;	// IMP=0x000000000025fd99
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000025fccb
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000000025fcb4
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000025fac7
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000025f88f
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000025f7bb
- (void)magicVariableButtonPressed:(id)arg1;	// IMP=0x000000000025f76f
- (id)availableUserDefinedVariableNames;	// IMP=0x000000000025f703
- (void)loadView;	// IMP=0x000000000025f337
- (void)reloadData;	// IMP=0x000000000025f283
- (id)initWithScrollDirection:(long long)arg1;	// IMP=0x000000000025f1f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

