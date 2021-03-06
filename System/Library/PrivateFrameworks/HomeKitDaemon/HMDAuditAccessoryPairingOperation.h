//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString;

@interface HMDAuditAccessoryPairingOperation <HMFLogging>
{
}

+ (id)logCategory;	// IMP=0x000000000073e8e1
+ (id)predicate;	// IMP=0x000000000073e8c3
- (id)logIdentifier;	// IMP=0x000000000073e0af
- (id)getPairingsFromAccessory:(id)arg1;	// IMP=0x000000000073dd96
- (void)auditHAPPairings:(id)arg1 forAccessory:(id)arg2;	// IMP=0x000000000073d53f
- (_Bool)mainWithError:(id *)arg1;	// IMP=0x000000000073d28d
- (id)initWithAccessoryUUID:(id)arg1 accessoryIdentifier:(id)arg2 homeUUIDWhereAccessoryWasPaired:(id)arg3;	// IMP=0x000000000073d1bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

