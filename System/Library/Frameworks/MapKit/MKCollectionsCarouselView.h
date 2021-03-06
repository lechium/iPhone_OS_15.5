//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MapKit/MKCollectionCarouselSizeProvider-Protocol.h>
#import <MapKit/MKCollectionCarouselUpdater-Protocol.h>
#import <MapKit/UICollectionViewDelegate-Protocol.h>
#import <MapKit/UICollectionViewDelegateFlowLayout-Protocol.h>

@class GEOExploreGuides, MKPlaceCollectionsLogicController, NSObject, NSString, UICollectionView, UICollectionViewFlowLayout, UIStackView;
@protocol MKCollectionCarouselAnalyticsDelegate, MKCollectionCarouselRoutingDelegate, MKCollectionsSizeProvider, OS_dispatch_queue, UIScrollViewDelegate;

@interface MKCollectionsCarouselView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, MKCollectionCarouselSizeProvider, MKCollectionCarouselUpdater>
{
    CDStruct_7ddafc85 _collectionsConfiguration;	// 8 = 0x8
    _Bool _hasDisplayedCollections;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_utilityQueue;	// 32 = 0x20
    UICollectionView *_collectionView;	// 40 = 0x28
    UICollectionViewFlowLayout *_flowLayout;	// 48 = 0x30
    MKPlaceCollectionsLogicController *_logicController;	// 56 = 0x38
    id <MKCollectionsSizeProvider> _sizeController;	// 64 = 0x40
    id <MKCollectionCarouselRoutingDelegate> _routingDelegate;	// 72 = 0x48
    id <UIScrollViewDelegate> _scrollViewDelegate;	// 80 = 0x50
    id <MKCollectionCarouselAnalyticsDelegate> _analyticsDelegate;	// 88 = 0x58
    GEOExploreGuides *_exploreGuides;	// 96 = 0x60
    long long _carouselContext;	// 104 = 0x68
    UIStackView *_contentView;	// 112 = 0x70
}

+ (double)verticalLayoutHeightWithNumberOfItems:(unsigned long long)arg1 maxWidth:(double)arg2 usingTraitEnvironment:(id)arg3 inContext:(long long)arg4;	// IMP=0x000000000007f6b5
+ (double)horizontalLayoutHeightInContext:(long long)arg1 includeExploreGuidesHeight:(_Bool)arg2 isSingleCollection:(_Bool)arg3;	// IMP=0x000000000007f57f
- (void).cxx_destruct;	// IMP=0x000000000007f996
@property(retain, nonatomic) UIStackView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long carouselContext; // @synthesize carouselContext=_carouselContext;
@property(retain, nonatomic) GEOExploreGuides *exploreGuides; // @synthesize exploreGuides=_exploreGuides;
@property(nonatomic) __weak id <MKCollectionCarouselAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(nonatomic) __weak id <MKCollectionCarouselRoutingDelegate> routingDelegate; // @synthesize routingDelegate=_routingDelegate;
@property(retain, nonatomic) id <MKCollectionsSizeProvider> sizeController; // @synthesize sizeController=_sizeController;
@property(retain, nonatomic) MKPlaceCollectionsLogicController *logicController; // @synthesize logicController=_logicController;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(nonatomic) struct CGPoint contentOffset;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x000000000007f52f
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000000007f463
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000007f2f1
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000007f24a
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000007ee6e
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000007edc7
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000007ed20
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000007ec6d
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000007e903
- (void)fetchCollections;	// IMP=0x000000000007e7ea
- (void)configureCarouselCollectionView;	// IMP=0x000000000007daa9
- (void)configureCarouselMetadata:(long long)arg1;	// IMP=0x000000000007d966
- (void)resetCollectionsLayout;	// IMP=0x000000000007d863
- (void)refreshCollections;	// IMP=0x000000000007d826
- (void)updateCollections:(id)arg1;	// IMP=0x000000000007d7ac
- (id)visibleFocusItems;	// IMP=0x000000000007d75c
- (void)resetScrollOffset;	// IMP=0x000000000007d586
- (_Bool)isShowingExploreGuides;	// IMP=0x000000000007d553
- (_Bool)isDisplayingCollections;	// IMP=0x000000000007d543
- (void)displayCollectionsUsingBatchIds:(id)arg1 usingGuideFetcher:(id)arg2;	// IMP=0x000000000007d381
- (void)dismissedCollections;	// IMP=0x000000000007d344
- (void)displayCollections;	// IMP=0x000000000007d332
- (id)initCollectionsCarouselViewWithContext:(long long)arg1 withPlaceCollections:(id)arg2 usingSyncCoordinator:(id)arg3 withRoutingDelegate:(id)arg4 withScrollViewDelegate:(id)arg5 withAnalyticsDelegate:(id)arg6 exploreGuides:(id)arg7;	// IMP=0x000000000007d02b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

