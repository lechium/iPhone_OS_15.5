//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage;
@protocol GuidanceSearchResultsDataProviding, GuidanceSearchResultsViewModelDelegate, NavActionCoordination, NavigationMapItemDisplaying, NavigationRouteHistoryInfoProviding;

__attribute__((visibility("hidden")))
@interface GuidanceSearchResultsViewModel : NSObject
{
    _Bool _loading;	// 8 = 0x8
    id <GuidanceSearchResultsViewModelDelegate> _delegate;	// 16 = 0x10
    NSArray *_results;	// 24 = 0x18
    id <GuidanceSearchResultsDataProviding> _dataProvider;	// 32 = 0x20
    id <NavActionCoordination> _navActionCoordinator;	// 40 = 0x28
    id <NavigationRouteHistoryInfoProviding> _routeInfoProvider;	// 48 = 0x30
    id <NavigationMapItemDisplaying> _mapItemDisplayer;	// 56 = 0x38
    UIImage *_headerImage;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000963a73
@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property(getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) id <NavigationMapItemDisplaying> mapItemDisplayer; // @synthesize mapItemDisplayer=_mapItemDisplayer;
@property(readonly, nonatomic) id <NavigationRouteHistoryInfoProviding> routeInfoProvider; // @synthesize routeInfoProvider=_routeInfoProvider;
@property(readonly, nonatomic) id <NavActionCoordination> navActionCoordinator; // @synthesize navActionCoordinator=_navActionCoordinator;
@property(readonly, nonatomic) id <GuidanceSearchResultsDataProviding> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) __weak id <GuidanceSearchResultsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleResults:(id)arg1 error:(id)arg2;	// IMP=0x0010000000963918
- (void)selectMapItemAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000963833
- (void)navigateToItemAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000963727
- (void)cancelResultsView;	// IMP=0x00100000009636ea
- (void)clearSelection;	// IMP=0x00100000009636ab
- (void)loadDataIfNeeded;	// IMP=0x0010000000963446
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (void)dealloc;	// IMP=0x0010000000962eab
- (id)initWithDataProvider:(id)arg1 navActionCoordinator:(id)arg2 routeInfoProvider:(id)arg3 mapItemDisplayer:(id)arg4;	// IMP=0x0010000000962dc9

@end

