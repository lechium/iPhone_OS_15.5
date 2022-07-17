//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDNanoSyncEntity-Protocol.h>
#import <HealthDaemon/HDSyncEntity-Protocol.h>

@class NSString;

@interface HDAuthorizationSyncEntity : NSObject <HDNanoSyncEntity, HDSyncEntity>
{
}

+ (_Bool)supportsSyncStore:(id)arg1;	// IMP=0x000000000070d02d
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;	// IMP=0x000000000070cffb
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x000000000070cfdc
+ (id)decodeSyncObjectWithData:(id)arg1;	// IMP=0x000000000070cf8f
+ (long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x000000000070ceeb
+ (void)didGenerateCodableSourceAuthorizationsForSyncSession:(id)arg1;	// IMP=0x000000000070cee5
+ (_Bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id *)arg5;	// IMP=0x000000000070c8a0
+ (id)syncEntityIdentifier;	// IMP=0x000000000070c880
+ (id)createCodableSourceAuthorizationWithSource:(id)arg1 syncSession:(id)arg2;	// IMP=0x000000000070c7fc
+ (_Bool)companionDidChangeForProfile:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003409c7
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;	// IMP=0x0000000000080205
+ (int)nanoSyncObjectType;	// IMP=0x0000000000067ec9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
