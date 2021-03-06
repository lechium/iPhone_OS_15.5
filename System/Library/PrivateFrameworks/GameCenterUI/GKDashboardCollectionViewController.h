//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/NSPopoverDelegate-Protocol.h>
#import <GameCenterUI/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <GameCenterUI/UICollectionViewDataSource-Protocol.h>
#import <GameCenterUI/UICollectionViewDelegate-Protocol.h>

@class GKCollectionDataSource, GKNoContentView, NSLayoutConstraint, NSMutableIndexSet, NSString, UICollectionView, UIView;

@interface GKDashboardCollectionViewController <NSPopoverDelegate, UIAdaptivePresentationControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _autoWidthUsesTwoColumnsWhenSpace;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    GKCollectionDataSource *_dataSource;	// 24 = 0x18
    NSMutableIndexSet *_sectionsToReload;	// 32 = 0x20
    GKNoContentView *_noContentView;	// 40 = 0x28
    CDUnknownBlockType _dismissHandler;	// 48 = 0x30
    NSLayoutConstraint *_keyboardConstraint;	// 56 = 0x38
    double _keyboardConstraintDefaultConstant;	// 64 = 0x40
    UIView *_keyboardAdjustedView;	// 72 = 0x48
    UIView *_collectionContainerView;	// 80 = 0x50
    struct UIEdgeInsets _contentInsetsBeforeKeyboard;	// 88 = 0x58
    struct UIEdgeInsets _scrollInsetsBeforeKeyboard;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000099196
@property(nonatomic) __weak UIView *collectionContainerView; // @synthesize collectionContainerView=_collectionContainerView;
@property(nonatomic) __weak UIView *keyboardAdjustedView; // @synthesize keyboardAdjustedView=_keyboardAdjustedView;
@property(nonatomic) double keyboardConstraintDefaultConstant; // @synthesize keyboardConstraintDefaultConstant=_keyboardConstraintDefaultConstant;
@property(nonatomic) __weak NSLayoutConstraint *keyboardConstraint; // @synthesize keyboardConstraint=_keyboardConstraint;
@property(nonatomic) struct UIEdgeInsets scrollInsetsBeforeKeyboard; // @synthesize scrollInsetsBeforeKeyboard=_scrollInsetsBeforeKeyboard;
@property(nonatomic) struct UIEdgeInsets contentInsetsBeforeKeyboard; // @synthesize contentInsetsBeforeKeyboard=_contentInsetsBeforeKeyboard;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(retain, nonatomic) GKNoContentView *noContentView; // @synthesize noContentView=_noContentView;
@property(retain, nonatomic) NSMutableIndexSet *sectionsToReload; // @synthesize sectionsToReload=_sectionsToReload;
@property(nonatomic) _Bool autoWidthUsesTwoColumnsWhenSpace; // @synthesize autoWidthUsesTwoColumnsWhenSpace=_autoWidthUsesTwoColumnsWhenSpace;
@property(retain, nonatomic) GKCollectionDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000000098fa6
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000000098ed7
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000000098e09
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000000098de3
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000098d4b
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000098d2e
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000098d11
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000098c8a
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000098c03
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;	// IMP=0x0000000000098b1d
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000000098a37
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000098934
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000987e8
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000009869c
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000098676
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000009864d
- (void)keyboardWillHide:(id)arg1;	// IMP=0x0000000000098553
- (void)keyboardWillShow:(id)arg1;	// IMP=0x0000000000097e6e
- (void)windowDidEndSheet:(id)arg1;	// IMP=0x0000000000097db8
- (void)popoverDidClose:(id)arg1;	// IMP=0x0000000000097cb6
- (void)clearSelectionForCollectionView:(id)arg1;	// IMP=0x0000000000097b68
- (void)clearSelection;	// IMP=0x0000000000097b4b
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000097a61
- (void)hideNoContentPlaceholder;	// IMP=0x0000000000097a11
- (void)showNoContentPlaceholderForError:(id)arg1;	// IMP=0x00000000000977da
- (void)dataUpdated:(_Bool)arg1 withError:(id)arg2;	// IMP=0x0000000000097674
- (_Bool)hasData;	// IMP=0x0000000000097650
- (void)loadData;	// IMP=0x00000000000975bd
- (void)setNeedsRefresh;	// IMP=0x000000000009746a
- (void)didExitRefreshingState;	// IMP=0x0000000000097458
- (void)didEnterRefreshingState;	// IMP=0x0000000000097446
- (void)didEnterLoadingState;	// IMP=0x0000000000097405
@property(readonly, nonatomic) _Bool isLoading; // @dynamic isLoading;
- (void)setAutoWidthColumns:(long long)arg1;	// IMP=0x0000000000097322
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x0000000000097288
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000971e4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000097165
- (void)setupDataSource;	// IMP=0x00000000000970e4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000009702e
- (id)preferredFocusEnvironments;	// IMP=0x0000000000096f75
- (void)prepareForAutomaticTwoColumnLayout;	// IMP=0x0000000000096eb1
- (void)viewDidLoad;	// IMP=0x0000000000096d6c
- (void)createCollectionViewInsideView:(id)arg1;	// IMP=0x0000000000096be8
- (void)loadView;	// IMP=0x0000000000096a34
- (id)verticalCollectionViewLayout;	// IMP=0x0000000000096a1b
- (id)horizontalCollectionViewLayout;	// IMP=0x00000000000969e5
- (void)setToHorizontalLayout:(_Bool)arg1;	// IMP=0x0000000000096900
- (void)dealloc;	// IMP=0x0000000000096874
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000096745

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

