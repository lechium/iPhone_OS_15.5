//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <FitnessUI/UICollectionViewDataSource-Protocol.h>
#import <FitnessUI/UICollectionViewDataSourcePrefetching-Protocol.h>
#import <FitnessUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSCache, NSString, UICollectionView, UICollectionViewFlowLayout, UIPageControl;
@protocol FIUIPageViewControllerDataSource, FIUIPageViewControllerDelegate;

@interface FIUIPageViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout>
{
    _Bool _showsPagingIndicator;	// 8 = 0x8
    _Bool _userDidTapPageControl;	// 9 = 0x9
    _Bool _shouldNotifyDelegateWhenScrollViewSettles;	// 10 = 0xa
    id <FIUIPageViewControllerDataSource> _dataSource;	// 16 = 0x10
    id <FIUIPageViewControllerDelegate> _delegate;	// 24 = 0x18
    long long _scrollDirection;	// 32 = 0x20
    long long _currentlyDisplayedIndex;	// 40 = 0x28
    UICollectionViewFlowLayout *_collectionViewLayout;	// 48 = 0x30
    UICollectionView *_collectionView;	// 56 = 0x38
    UIPageControl *_pageControl;	// 64 = 0x40
    NSCache *_viewControllerForIndexPath;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000004bb7f
@property(nonatomic) _Bool shouldNotifyDelegateWhenScrollViewSettles; // @synthesize shouldNotifyDelegateWhenScrollViewSettles=_shouldNotifyDelegateWhenScrollViewSettles;
@property(retain, nonatomic) NSCache *viewControllerForIndexPath; // @synthesize viewControllerForIndexPath=_viewControllerForIndexPath;
@property(nonatomic) _Bool userDidTapPageControl; // @synthesize userDidTapPageControl=_userDidTapPageControl;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(nonatomic) _Bool showsPagingIndicator; // @synthesize showsPagingIndicator=_showsPagingIndicator;
@property(nonatomic) long long currentlyDisplayedIndex; // @synthesize currentlyDisplayedIndex=_currentlyDisplayedIndex;
@property(nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) __weak id <FIUIPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FIUIPageViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000004ba1c
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000004b8e7
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x000000000004b61b
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000004b591
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000004b53e
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000004b533
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000004b521
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000000004b509
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000004b3d4
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x000000000004b34a
- (void)_scrollViewDidStop;	// IMP=0x000000000004b21c
- (void)_addViewController:(id)arg1 toCell:(id)arg2;	// IMP=0x000000000004b13e
- (void)_pageSelectedWithControl:(id)arg1;	// IMP=0x000000000004b073
- (void)reloadData;	// IMP=0x000000000004af39
@property(readonly, nonatomic) UIViewController *currentlyDisplayedViewController;
- (void)setCurrentlyDisplayedIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000004a962
- (void)viewWillLayoutSubviews;	// IMP=0x000000000004a7b8
- (void)loadView;	// IMP=0x000000000004a16d
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000004a0cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

