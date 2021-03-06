//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ActionCoordinator, UIViewController, VenueCardFactory, VenuesStack;
@protocol ContaineeProtocol, VenueCardCoordinatorDataSource;

__attribute__((visibility("hidden")))
@interface VenueCardCoordinator : NSObject
{
    ActionCoordinator *_actionCoordinator;	// 8 = 0x8
    VenueCardFactory *_cardFactory;	// 16 = 0x10
    VenuesStack *_cardStack;	// 24 = 0x18
    id <VenueCardCoordinatorDataSource> _dataSource;	// 32 = 0x20
}

+ (id)searchResultForPlaceCardItem:(id)arg1;	// IMP=0x0040000000373dd2
- (void).cxx_destruct;	// IMP=0x0010000000374263
@property(nonatomic) __weak id <VenueCardCoordinatorDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) _Bool venuesStackContainsCategoryListCard;
@property(readonly, nonatomic) unsigned long long venueIdForCurrentCardStack;
@property(readonly, nonatomic) UIViewController<ContaineeProtocol> *topViewController;
- (id)viewControllerForCardItem:(id)arg1;	// IMP=0x0010000000374101
- (void)removeAllCards;	// IMP=0x00100000003740eb
- (void)popVenueCardItem:(CDUnknownBlockType)arg1;	// IMP=0x0010000000373f4a
- (unsigned long long)pushVenueCardItem:(id)arg1 source:(unsigned long long)arg2 savePlaceCardSelectionState:(_Bool)arg3;	// IMP=0x0010000000373f34
- (unsigned long long)pushVenueCardItem:(id)arg1 source:(unsigned long long)arg2;	// IMP=0x0010000000373f1e
@property(readonly, nonatomic) _Bool isCardStackEmpty;
- (id)initWithActionCoordinator:(id)arg1 venueChangeNotifier:(id)arg2;	// IMP=0x0010000000373c4e
- (void)venuesStack:(id)arg1 reorderedStackAndRemovedCardItems:(id)arg2;	// IMP=0x001000000037429d
- (id)stateForNewCardItem:(id)arg1 previousItemInStack:(id)arg2 savePlaceCardSelectionState:(_Bool)arg3;	// IMP=0x001000000037470a
- (id)routePlanningOverviewViewControllerForCardFactory:(id)arg1;	// IMP=0x00100000003748ba
- (id)shareDelegateForCardFactory:(id)arg1;	// IMP=0x0010000000374877

@end

