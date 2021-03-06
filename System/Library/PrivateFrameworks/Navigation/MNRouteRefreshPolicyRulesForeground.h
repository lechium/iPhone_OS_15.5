//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNRouteRefreshPolicyRules-Protocol.h>

@class NSString;

@interface MNRouteRefreshPolicyRulesForeground : NSObject <MNRouteRefreshPolicyRules>
{
    unsigned long long _policy;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned long long policy; // @synthesize policy=_policy;
- (double)maxTimeIntervalFromNowForDestinationRefresh:(id)arg1 fromDate:(id)arg2;	// IMP=0x0000000000070767
- (double)timeIntervalForDestinationRefresh:(id)arg1 lastUpdate:(id)arg2;	// IMP=0x0000000000070718
@property(readonly, nonatomic) _Bool canWakeDeviceForUpdates;
@property(readonly, nonatomic) _Bool canWakeClientForUpdates;
- (_Bool)canMakeNetworkRequestsForDestination:(id)arg1 atDate:(id)arg2;	// IMP=0x00000000000706f0
- (id)init;	// IMP=0x00000000000706b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

