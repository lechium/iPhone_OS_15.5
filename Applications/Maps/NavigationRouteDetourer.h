//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNNavigationService, NSString;
@protocol NavigationRouteHistoryInfoProviding, NavigationRouteInterrupting;

__attribute__((visibility("hidden")))
@interface NavigationRouteDetourer : NSObject
{
    MNNavigationService *_navigationService;	// 8 = 0x8
    id <NavigationRouteHistoryInfoProviding> _routeInfoProvider;	// 16 = 0x10
    id <NavigationRouteInterrupting> _routeInterrupter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000048a2f2
@property(readonly, nonatomic) id <NavigationRouteInterrupting> routeInterrupter; // @synthesize routeInterrupter=_routeInterrupter;
@property(readonly, nonatomic) id <NavigationRouteHistoryInfoProviding> routeInfoProvider; // @synthesize routeInfoProvider=_routeInfoProvider;
@property(readonly, nonatomic) MNNavigationService *navigationService; // @synthesize navigationService=_navigationService;
- (void)detourRouteToMapItem:(id)arg1;	// IMP=0x001000000048a120
- (id)initWithNavigationService:(id)arg1 routeInfoProvider:(id)arg2 routeInterrupter:(id)arg3;	// IMP=0x001000000048a069

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
