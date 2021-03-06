//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDNanoSyncEntity-Protocol.h>

@class NSString;

@interface HDProtectedNanoUserDefaultsSyncEntity <HDNanoSyncEntity>
{
}

+ (id)syncEntityIdentifier;	// IMP=0x0000000000130479
+ (long long)category;	// IMP=0x0000000000049ed8
+ (_Bool)supportsSpeculativeNanoSyncChanges;	// IMP=0x0000000000340a3b
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;	// IMP=0x000000000008022e
+ (int)nanoSyncObjectType;	// IMP=0x00000000000557a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

