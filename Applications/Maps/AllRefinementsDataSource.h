//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AllRefinementsMultiSelectCellLogicController, AllRefinementsSizeController, AllRefinementsTogglesCellLogicController, AllRefinementsViewModel, NSNumber, NSString, UICollectionView, UICollectionViewDiffableDataSource;
@protocol UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface AllRefinementsDataSource : NSObject
{
    NSNumber *_selectionSequenceNumber;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    AllRefinementsViewModel *_viewModel;	// 24 = 0x18
    UICollectionViewDiffableDataSource *_collectionViewDiffableDataSource;	// 32 = 0x20
    AllRefinementsSizeController *_sizeController;	// 40 = 0x28
    id <UIScrollViewDelegate> _scrollViewDelegate;	// 48 = 0x30
    AllRefinementsTogglesCellLogicController *_togglesLogicController;	// 56 = 0x38
    AllRefinementsMultiSelectCellLogicController *_multiSelectLogicController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000a3664e
@property(retain, nonatomic) AllRefinementsMultiSelectCellLogicController *multiSelectLogicController; // @synthesize multiSelectLogicController=_multiSelectLogicController;
@property(retain, nonatomic) AllRefinementsTogglesCellLogicController *togglesLogicController; // @synthesize togglesLogicController=_togglesLogicController;
@property(retain, nonatomic) id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(retain, nonatomic) AllRefinementsSizeController *sizeController; // @synthesize sizeController=_sizeController;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewDiffableDataSource; // @synthesize collectionViewDiffableDataSource=_collectionViewDiffableDataSource;
@property(retain, nonatomic) AllRefinementsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSNumber *selectionSequenceNumber; // @synthesize selectionSequenceNumber=_selectionSequenceNumber;
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0010000000a36504
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0010000000a36475
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0010000000a36403
- (id)layoutSectionForSectionIndex:(long long)arg1 layoutEnvironment:(id)arg2;	// IMP=0x0010000000a355ec
- (void)displayRefinements;	// IMP=0x0010000000a35297
- (void)setupDataSource;	// IMP=0x0010000000a34415
- (id)initWithCollectionView:(id)arg1 viewModel:(id)arg2 scrollViewDelegate:(id)arg3 selectionSequenceNumber:(id)arg4;	// IMP=0x0010000000a342b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
