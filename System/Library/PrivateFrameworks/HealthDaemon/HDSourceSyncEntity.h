//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDNanoSyncEntity-Protocol.h>
#import <HealthDaemon/HDSyncEntity-Protocol.h>

@class NSString;

@interface HDSourceSyncEntity : NSObject <HDNanoSyncEntity, HDSyncEntity>
{
}

+ (id)excludedSyncStoresForSession:(id)arg1;	// IMP=0x0000000000136aea
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;	// IMP=0x0000000000046d17
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001368fc
+ (id)decodeSyncObjectWithData:(id)arg1;	// IMP=0x00000000001368af
+ (long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x000000000013681d
+ (_Bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id *)arg5;	// IMP=0x00000000001363be
+ (id)syncEntityIdentifier;	// IMP=0x000000000013639e
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;	// IMP=0x00000000000801fa
+ (int)nanoSyncObjectType;	// IMP=0x000000000005578c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

