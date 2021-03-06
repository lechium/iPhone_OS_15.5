//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/_HMNetworkRouterProfileDelegate-Protocol.h>

@class NSArray, NSString;
@protocol HMNetworkRouterProfileDelegate;

@interface HMNetworkRouterProfile <_HMNetworkRouterProfileDelegate>
{
    id <HMNetworkRouterProfileDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000dd274
@property __weak id <HMNetworkRouterProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (void)routerProfileDidUpdateIdentifiersForSatellites:(id)arg1;	// IMP=0x00000000000dd10c
- (void)routerProfileDidUpdateNetworkStatus:(id)arg1;	// IMP=0x00000000000dcfd1
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x00000000000dce62
@property(readonly) NSArray *satelliteProfiles;
- (void)setIdentifiersForSatelliteProfiles:(id)arg1;	// IMP=0x00000000000dcad9
- (id)identifiersForSatelliteProfiles;	// IMP=0x00000000000dca4f
@property(readonly, getter=isSatellite) _Bool satellite;
@property(readonly) unsigned long long networkStatus;
@property(readonly, copy) NSString *description;
- (id)services;	// IMP=0x00000000000dc88e
- (id)networkRouterProfile;	// IMP=0x00000000000dc87c
- (id)initWithNetworkRouterProfile:(id)arg1;	// IMP=0x00000000000dc811

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

