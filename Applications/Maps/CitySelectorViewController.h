//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CitySelectorAPIController, CitySelectorAnalyticsManager, CitySelectorDataSource, ContainerHeaderView, ErrorModeView, GEOGuideLocation, GEOMapServiceTraits, LoadingModeView, NSArray, NSString, UICollectionView, UICollectionViewCompositionalLayout, UIScrollView;

__attribute__((visibility("hidden")))
@interface CitySelectorViewController
{
    GEOMapServiceTraits *_traits;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    CitySelectorDataSource *_dataSource;	// 24 = 0x18
    LoadingModeView *_loadingView;	// 32 = 0x20
    ErrorModeView *_errorView;	// 40 = 0x28
    ContainerHeaderView *_titleHeaderView;	// 48 = 0x30
    UICollectionViewCompositionalLayout *_layout;	// 56 = 0x38
    NSArray *_sections;	// 64 = 0x40
    CitySelectorAPIController *_apiController;	// 72 = 0x48
    CitySelectorAnalyticsManager *_analyticsManager;	// 80 = 0x50
    GEOGuideLocation *_sourceGuideLocation;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000003cb9dd
@property(retain, nonatomic) GEOGuideLocation *sourceGuideLocation; // @synthesize sourceGuideLocation=_sourceGuideLocation;
@property(retain, nonatomic) CitySelectorAnalyticsManager *analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(retain, nonatomic) CitySelectorAPIController *apiController; // @synthesize apiController=_apiController;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) UICollectionViewCompositionalLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) ContainerHeaderView *titleHeaderView; // @synthesize titleHeaderView=_titleHeaderView;
@property(retain, nonatomic) ErrorModeView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) LoadingModeView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) CitySelectorDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) UIScrollView *pptTestScrollView;
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x00100000003cb82e
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x00100000003cb828
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x00100000003cb822
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00100000003cb6ed
- (void)removeErrorView;	// IMP=0x00100000003cb663
- (void)addErrorView;	// IMP=0x00100000003cb233
- (void)removeLoadingView;	// IMP=0x00100000003cb1a9
- (void)addLoadingView;	// IMP=0x00100000003caf19
- (void)resetCollectionViewLayout;	// IMP=0x00100000003cae04
- (void)activateConstraintsForViewPinnedBelowHeader:(id)arg1;	// IMP=0x00100000003caaef
- (id)createLayoutUsingWidth:(double)arg1;	// IMP=0x00100000003ca9a2
- (void)removeCollectionView;	// IMP=0x00100000003ca909
- (void)addAllCollectionsView;	// IMP=0x00100000003ca5da
- (void)activateHeaderConstraints;	// IMP=0x00100000003ca260
- (void)addHeaderView;	// IMP=0x00100000003c9f41
- (void)initializeDataSource;	// IMP=0x00100000003c9d3c
- (void)initializeSections;	// IMP=0x00100000003c9a1c
- (void)onTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00100000003c984f
- (void)routeToGuideLocation:(id)arg1;	// IMP=0x00100000003c97da
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x00100000003c97c8
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x00100000003c9772
- (void)handleDismissAction:(id)arg1;	// IMP=0x00100000003c96b5
- (void)didChangeLayout:(unsigned long long)arg1;	// IMP=0x00100000003c95fe
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000003c952b
- (void)viewDidLoad;	// IMP=0x00100000003c9370
- (id)initWithSourceGuideLocation:(id)arg1;	// IMP=0x00100000003c91fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

