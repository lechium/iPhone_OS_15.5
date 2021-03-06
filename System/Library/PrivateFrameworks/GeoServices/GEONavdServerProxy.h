//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GEONavdServerProxy : NSObject
{
}

- (void)forceCacheRefresh;	// IMP=0x0000000000f3e006
- (void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3;	// IMP=0x0000000000f3dff1
- (void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3;	// IMP=0x0000000000f3dfdc
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2;	// IMP=0x0000000000f3dfc7
- (void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2;	// IMP=0x0000000000f3dfb2
- (void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000f3df9d
- (void)shouldPostDarwinNotificationForNextUpdate:(_Bool)arg1;	// IMP=0x0000000000f3df88
- (void)getDirectionsForClient:(id)arg1 withRouteHypothesisRequest:(id)arg2 andCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000f3df73
- (void)statusWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000f3df5e
- (void)close;	// IMP=0x0000000000f3df49
- (void)open;	// IMP=0x0000000000f3df34
- (id)init;	// IMP=0x0000000000f3df05

@end

