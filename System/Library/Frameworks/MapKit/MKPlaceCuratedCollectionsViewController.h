//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKCollectionCarouselAnalyticsDelegate-Protocol.h>
#import <MapKit/MKCollectionCarouselRoutingDelegate-Protocol.h>
#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>

@class MKCollectionsCarouselView, MKCuratedCollectionsPlacecardAnalyticsManager, MKMapItem, MKPlaceSectionHeaderView, NSArray, NSString;
@protocol MKPlaceCollectionsDelegate;

@interface MKPlaceCuratedCollectionsViewController <MKCollectionCarouselRoutingDelegate, MKCollectionCarouselAnalyticsDelegate, MKModuleViewControllerProtocol>
{
    MKMapItem *_mapItem;	// 8 = 0x8
    struct CGSize _viewSize;	// 16 = 0x10
    MKPlaceSectionHeaderView *_headerView;	// 32 = 0x20
    MKCollectionsCarouselView *_carouselView;	// 40 = 0x28
    NSArray *_placeCollections;	// 48 = 0x30
    NSArray *_collectionIds;	// 56 = 0x38
    MKCuratedCollectionsPlacecardAnalyticsManager *_analyticsManager;	// 64 = 0x40
    id <MKPlaceCollectionsDelegate> _collectionsDelegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000256014
@property(nonatomic) __weak id <MKPlaceCollectionsDelegate> collectionsDelegate; // @synthesize collectionsDelegate=_collectionsDelegate;
@property(retain, nonatomic) MKCuratedCollectionsPlacecardAnalyticsManager *analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(retain, nonatomic) NSArray *collectionIds; // @synthesize collectionIds=_collectionIds;
@property(retain, nonatomic) NSArray *placeCollections; // @synthesize placeCollections=_placeCollections;
@property(retain, nonatomic) MKCollectionsCarouselView *carouselView; // @synthesize carouselView=_carouselView;
@property(retain, nonatomic) MKPlaceSectionHeaderView *headerView; // @synthesize headerView=_headerView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000255e30
- (void)collectionsCarouselDidScrollBackward;	// IMP=0x0000000000255df3
- (void)collectionsCarouselDidScrollForward;	// IMP=0x0000000000255db6
- (void)collectionsCarouselDidRouteToCollectionId:(id)arg1 atIndex:(long long)arg2 isSaved:(_Bool)arg3;	// IMP=0x0000000000255d39
- (void)routeToGuidesHomeFromExploreGuides:(id)arg1;	// IMP=0x0000000000255cc7
- (void)routeToCuratedCollection:(id)arg1;	// IMP=0x0000000000255c55
- (void)showMoreTapped;	// IMP=0x0000000000255b3e
- (void)updateConstraintsForCarouselView;	// IMP=0x00000000002554ce
- (_Bool)shouldShowMoreButton;	// IMP=0x000000000025539c
- (void)setUpHeaderView;	// IMP=0x00000000002550f6
- (void)refreshCollections;	// IMP=0x00000000002550b9
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000254e9f
- (void)viewDidLoad;	// IMP=0x0000000000254e1f
- (id)initWithDelegate:(id)arg1 withPlaceCollections:(id)arg2 usingSyncCoordinator:(id)arg3 usingMapItem:(id)arg4 usingCollectionIds:(id)arg5 exploreGuides:(id)arg6;	// IMP=0x0000000000254bcc
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000254bc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
