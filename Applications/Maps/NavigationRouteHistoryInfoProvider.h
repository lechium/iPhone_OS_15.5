//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEORouteAttributes, HistoryEntryRecentsItem, MNNavigationService, NSData, NSString;

__attribute__((visibility("hidden")))
@interface NavigationRouteHistoryInfoProvider : NSObject
{
    MNNavigationService *_navigationService;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000005091a1
@property(retain, nonatomic) MNNavigationService *navigationService; // @synthesize navigationService=_navigationService;
@property(readonly, nonatomic) GEORouteAttributes *routeAttributes;
@property(readonly, nonatomic) HistoryEntryRecentsItem *historyEntryRoute;
@property(readonly, nonatomic) NSData *sessionState;
- (id)originalWaypointRouteRepresentation;	// IMP=0x0010000000508d90
- (id)legacyRouteRepresentation;	// IMP=0x0010000000508d40
- (id)routeId;	// IMP=0x0010000000508cf0
- (id)_composedRoute;	// IMP=0x0010000000508ca0
- (id)initWithNavigationService:(id)arg1;	// IMP=0x0010000000508c35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

