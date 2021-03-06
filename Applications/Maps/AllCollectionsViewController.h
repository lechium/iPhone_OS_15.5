//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AllCollectionsAPIController, AllCollectionsDataSource, ContainerHeaderView, ErrorModeView, GEOMapServiceTraits, LoadingModeView, MISSING_TYPE, NSArray, NSDiffableDataSourceSnapshot, NSString, UICollectionView, UICollectionViewCompositionalLayout, UIScrollView;

__attribute__((visibility("hidden")))
@interface AllCollectionsViewController
{
    UICollectionViewCompositionalLayout *_layout;	// 8 = 0x8
    GEOMapServiceTraits *_traits;	// 16 = 0x10
    UICollectionView *_collectionView;	// 24 = 0x18
    MISSING_TYPE *_titleHeaderView;	// 32 = 0x20
    UICollectionViewCompositionalLayout *_flowLayout;	// 40 = 0x28
    AllCollectionsDataSource *_dataSource;	// 48 = 0x30
    NSDiffableDataSourceSnapshot *_snapshot;	// 56 = 0x38
    LoadingModeView *_loadingView;	// 64 = 0x40
    ErrorModeView *_errorView;	// 72 = 0x48
    NSArray *_sections;	// 80 = 0x50
    AllCollectionsAPIController *_apiController;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000007322dc
@property(retain, nonatomic) AllCollectionsAPIController *apiController; // @synthesize apiController=_apiController;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) ErrorModeView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) LoadingModeView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSDiffableDataSourceSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) AllCollectionsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionViewCompositionalLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) ContainerHeaderView *titleHeaderView; // @synthesize titleHeaderView=_titleHeaderView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
- (void)pptPresentFirstCollection;	// IMP=0x001000000073212d
@property(readonly, nonatomic) UIScrollView *pptTestScrollView;
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x0010000000732115
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x001000000073210f
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x0010000000732109
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x00100000007320f7
- (void)routeToGuidesHomeFromExploreGuides:(id)arg1;	// IMP=0x00100000007320f1
- (void)routeToCuratedCollection:(id)arg1;	// IMP=0x001000000073207c
- (void)resetCollectionViewLayout;	// IMP=0x0010000000731f67
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000731e94
- (void)removeErrorView;	// IMP=0x0010000000731e0a
- (void)addErrorView;	// IMP=0x0010000000731980
- (void)removeLoadingView;	// IMP=0x00100000007318f6
- (void)addLoadingView;	// IMP=0x0010000000731666
- (void)activateConstraintsForViewPinnedBelowHeader:(id)arg1;	// IMP=0x0010000000731351
- (void)activateHeaderConstraints;	// IMP=0x0010000000730fd7
- (id)createLayoutUsingWidth:(double)arg1;	// IMP=0x0010000000730ec7
- (void)removeCollectionView;	// IMP=0x0010000000730e2e
- (void)addAllCollectionsView;	// IMP=0x0010000000730b58
- (void)initializeDataSource;	// IMP=0x0010000000730850
- (void)initializeSections;	// IMP=0x0010000000730673
- (void)addHeaderView;	// IMP=0x0010000000730354
- (void)onTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00100000007300e5
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x001000000073008f
- (void)handleDismissAction:(id)arg1;	// IMP=0x001000000072ffd2
- (void)didChangeLayout:(unsigned long long)arg1;	// IMP=0x001000000072ff1b
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000072feb1
- (void)viewDidLoad;	// IMP=0x001000000072fcf2
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000072fbd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

