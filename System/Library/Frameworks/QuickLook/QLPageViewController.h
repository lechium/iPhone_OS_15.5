//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPageViewController.h>

#import <QuickLook/UIPageViewControllerDataSource-Protocol.h>
#import <QuickLook/UIPageViewControllerDelegate-Protocol.h>
#import <QuickLook/UIScrollViewDelegate-Protocol.h>

@class NSMapTable, NSString, QLDelegateProxy, UIScrollView, UIViewController;
@protocol QLPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface QLPageViewController : UIPageViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate>
{
    NSMapTable *_pages;	// 8 = 0x8
    unsigned long long _nextPageIndex;	// 16 = 0x10
    struct CGPoint _scrollingStartOffset;	// 24 = 0x18
    id <UIPageViewControllerDelegate> _definedDelegate;	// 40 = 0x28
    UIScrollView *_scrollView;	// 48 = 0x30
    QLDelegateProxy *_scrollViewDelegateProxy;	// 56 = 0x38
    QLDelegateProxy *_pageViewControllerDelegateProxy;	// 64 = 0x40
    double _interPageSpacing;	// 72 = 0x48
    long long _currentPageIndexForAppliedParallaxEffect;	// 80 = 0x50
    _Bool _pageClipsToBounds[3];	// 88 = 0x58
    _Bool _isTransitioning;	// 91 = 0x5b
    unsigned long long _currentPageIndex;	// 96 = 0x60
    id <QLPageViewControllerDataSource> _indexedDataSource;	// 104 = 0x68
    id <UIScrollViewDelegate> _scrollViewDelegate;	// 112 = 0x70
    double _parallaxIntensity;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000004e179
@property(nonatomic) double parallaxIntensity; // @synthesize parallaxIntensity=_parallaxIntensity;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(nonatomic) __weak id <QLPageViewControllerDataSource> indexedDataSource; // @synthesize indexedDataSource=_indexedDataSource;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
- (void)setDataSource:(id)arg1;	// IMP=0x000000000004e0db
- (void)setViewControllers:(id)arg1 direction:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000004e071
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004e042
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;	// IMP=0x000000000004deeb
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;	// IMP=0x000000000004db26
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;	// IMP=0x000000000004dacb
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;	// IMP=0x000000000004da44
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000004d75e
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000004d6e2
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000004d492
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000004d41a
- (void)_unsetParallaxEffect;	// IMP=0x000000000004d24b
- (void)_applyParallaxEffectWithTransitionProgress:(double)arg1;	// IMP=0x000000000004ce5d
- (void)_setViewControllers:(id)arg1 direction:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000004cd68
- (void)_setCurrentPageIndex:(unsigned long long)arg1 direction:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000004ca40
- (id)_retrieveAndStoreViewControllerAtIndex:(unsigned long long)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000004c982
- (id)_viewControllerAtIndex:(unsigned long long)arg1 offset:(long long)arg2;	// IMP=0x000000000004c844
- (id)_cachedViewControllerAtIndex:(unsigned long long)arg1 offset:(long long)arg2;	// IMP=0x000000000004c7bc
- (unsigned long long)_indexOfViewController:(id)arg1;	// IMP=0x000000000004c5f3
- (void)_rearrangeCachedViewControllersWithNewCurrentPageIndex:(long long)arg1;	// IMP=0x000000000004c348
- (void)_loadAndCacheViewControllersBeforeAndAfterIndex:(long long)arg1;	// IMP=0x000000000004c2d5
- (void)_setUp;	// IMP=0x000000000004c137
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000004c0f6
- (id)delegate;	// IMP=0x000000000004c0c0
- (void)setDelegate:(id)arg1;	// IMP=0x000000000004c064
@property(readonly, nonatomic) __weak UIScrollView *scrollView;
- (void)clearInternalCache;	// IMP=0x000000000004bfad
@property(readonly, nonatomic) __weak UIViewController *currentPage;
- (void)setCurrentPageIndex:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000004bab0
- (id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3;	// IMP=0x000000000004b9c4
- (id)init;	// IMP=0x000000000004b978

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
