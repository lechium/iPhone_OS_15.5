//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class HUGridLayoutOptions, NSString;
@protocol HUServiceGridViewControllerDelegate;

@interface HUServiceGridViewController <UICollectionViewDelegateFlowLayout>
{
    _Bool _shouldShowLoadingState;	// 8 = 0x8
    unsigned long long _contentMargins;	// 16 = 0x10
    long long _scrollDirection;	// 24 = 0x18
    id <HUServiceGridViewControllerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001b7fc0
@property(nonatomic) __weak id <HUServiceGridViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldShowLoadingState; // @synthesize shouldShowLoadingState=_shouldShowLoadingState;
@property(nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) unsigned long long contentMargins; // @synthesize contentMargins=_contentMargins;
- (void)layoutOptionsDidChange;	// IMP=0x00000000001b7ce7
- (id)layoutOptionsForSection:(long long)arg1;	// IMP=0x00000000001b7cd5
@property(retain, nonatomic) HUGridLayoutOptions *layoutOptions;
- (id)_defaultLayoutOptionsForViewSize:(struct CGSize)arg1;	// IMP=0x00000000001b797b
- (double)headerViewHeightForSectionIndex:(unsigned long long)arg1;	// IMP=0x00000000001b7892
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000001b7550
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x00000000001b74fd
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000000001b7445
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000000001b721a
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000001b705d
- (void)configureCell:(id)arg1 forItem:(id)arg2;	// IMP=0x00000000001b6d6b
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000001b6d2a
- (id)_performTapActionForItem:(id)arg1;	// IMP=0x00000000001b6b37
- (unsigned long long)itemTypeForItem:(id)arg1;	// IMP=0x00000000001b6af2
- (struct CGSize)preferredContentSizeForCollectionViewContentSize:(struct CGSize)arg1;	// IMP=0x00000000001b69db
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000001b66e0
- (void)viewWillLayoutSubviews;	// IMP=0x00000000001b653b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001b6396
- (void)viewDidLoad;	// IMP=0x00000000001b624c
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;	// IMP=0x00000000001b6197
- (id)initWithItemManager:(id)arg1;	// IMP=0x00000000001b60b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

