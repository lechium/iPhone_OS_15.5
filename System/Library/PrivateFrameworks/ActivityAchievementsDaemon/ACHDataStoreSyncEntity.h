//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDKeyValueSyncEntity.h>

#import <ActivityAchievementsDaemon/HDNanoSyncEntity-Protocol.h>

@class NSString;

@interface ACHDataStoreSyncEntity : HDKeyValueSyncEntity <HDNanoSyncEntity>
{
}

+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;	// IMP=0x00000000000019a6
+ (int)nanoSyncObjectType;	// IMP=0x000000000000199b
+ (void)didReceiveValuesForKeys:(id)arg1 profile:(id)arg2;	// IMP=0x0000000000001941
+ (long long)category;	// IMP=0x0000000000001936
+ (_Bool)removeDataStoreValuesForKeys:(id)arg1 domain:(id)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000018fc
+ (_Bool)setDataStoreValuesWithDictionary:(id)arg1 domain:(id)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000018ca
+ (id)dataStoreValueForKey:(id)arg1 domain:(id)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000189d
+ (id)syncEntityIdentifier;	// IMP=0x000000000000187d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
