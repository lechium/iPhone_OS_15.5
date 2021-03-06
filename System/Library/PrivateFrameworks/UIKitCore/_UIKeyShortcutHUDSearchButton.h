//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIKeyShortcutHUDCollectionViewManagerClient-Protocol.h>

@class NSString, UICollectionView, UICollectionViewCellRegistration, UICollectionViewDiffableDataSource, _UIKeyShortcutHUDCollectionViewManager, _UIKeyShortcutHUDIndexPath, _UIKeyShortcutHUDToolbarViewController;
@protocol _UIKeyShortcutHUDSearchButtonDelegate;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDSearchButton <_UIKeyShortcutHUDCollectionViewManagerClient>
{
    _Bool _searching;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    _UIKeyShortcutHUDCollectionViewManager *_collectionViewManager;	// 24 = 0x18
    id <_UIKeyShortcutHUDSearchButtonDelegate> _delegate;	// 32 = 0x20
    _UIKeyShortcutHUDToolbarViewController *_toolbarVC;	// 40 = 0x28
    UICollectionViewCellRegistration *_searchCellRegistration;	// 48 = 0x30
    UICollectionViewDiffableDataSource *_dataSource;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000001064759
@property(retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionViewCellRegistration *searchCellRegistration; // @synthesize searchCellRegistration=_searchCellRegistration;
@property(nonatomic, getter=isSearching) _Bool searching; // @synthesize searching=_searching;
@property(nonatomic) __weak _UIKeyShortcutHUDToolbarViewController *toolbarVC; // @synthesize toolbarVC=_toolbarVC;
@property(nonatomic) __weak id <_UIKeyShortcutHUDSearchButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak _UIKeyShortcutHUDCollectionViewManager *collectionViewManager; // @synthesize collectionViewManager=_collectionViewManager;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)didCompleteSearchTransition;	// IMP=0x0000000001064661
- (void)prepareForSearchTransition:(_Bool)arg1;	// IMP=0x0000000001064564
@property(readonly, nonatomic) _UIKeyShortcutHUDIndexPath *searchButtonIndexPath;
- (id)indexPathsForSeparatorsUsedByCellAtIndexPath:(id)arg1;	// IMP=0x00000000010644d8
- (id)indexPathsForCellsUsingSeparatorAtIndexPath:(id)arg1;	// IMP=0x00000000010644bf
- (void)didScrollCollectionView;	// IMP=0x00000000010644b9
- (_Bool)shouldPersistSelectionForCellAtIndexPath:(id)arg1;	// IMP=0x00000000010644b1
- (_Bool)selectionFollowsFocusForItemAtIndexPath:(id)arg1;	// IMP=0x00000000010644a9
- (void)performActionForSelectingCellAtIndexPath:(id)arg1;	// IMP=0x000000000106445d
- (id)_collectionViewLayout;	// IMP=0x0000000001064212
- (void)_configureCollectionView;	// IMP=0x0000000001063e33
- (void)_setupSubviews;	// IMP=0x0000000001063d67
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001063cf5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

