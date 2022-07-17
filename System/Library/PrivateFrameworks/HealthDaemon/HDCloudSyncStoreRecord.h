//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDCloudSyncCodableStore, HDCloudSyncSequenceRecord, HDCloudSyncShardPredicate, NSArray, NSString, NSUUID;

@interface HDCloudSyncStoreRecord
{
    HDCloudSyncCodableStore *_underlyingStore;	// 8 = 0x8
    HDCloudSyncSequenceRecord *_slotASequenceHeaderRecord;	// 16 = 0x10
    HDCloudSyncSequenceRecord *_slotBSequenceHeaderRecord;	// 24 = 0x18
    HDCloudSyncSequenceRecord *_tombstoneSequenceRecord;	// 32 = 0x20
}

+ (id)fieldsForUnprotectedSerialization;	// IMP=0x0000000000249a2c
+ (id)recordType;	// IMP=0x00000000002499fb
+ (_Bool)requiresUnderlyingMessage;	// IMP=0x00000000002499f3
+ (id)recordWithCKRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000248e73
+ (_Bool)hasFutureSchema:(id)arg1;	// IMP=0x0000000000248e15
+ (_Bool)isStoreRecordID:(id)arg1;	// IMP=0x00000000002467f4
+ (_Bool)isStoreRecord:(id)arg1;	// IMP=0x00000000002467a3
+ (id)recordIDWithIndividualZoneID:(id)arg1;	// IMP=0x000000000024674f
+ (id)recordIDForOwnerIdentifier:(id)arg1 storeIdentifier:(id)arg2 zoneID:(id)arg3;	// IMP=0x0000000000246632
- (void).cxx_destruct;	// IMP=0x000000000024ac0b
@property(readonly, nonatomic) HDCloudSyncSequenceRecord *tombstoneSequenceRecord; // @synthesize tombstoneSequenceRecord=_tombstoneSequenceRecord;
- (id)printDescription;	// IMP=0x000000000024a3b7
- (id)description;	// IMP=0x000000000024a3a5
- (unsigned long long)hash;	// IMP=0x000000000024a388
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024a320
- (long long)compare:(id)arg1;	// IMP=0x0000000000249fe4
- (id)serializeUnderlyingMessage;	// IMP=0x0000000000249a0f
@property(copy, nonatomic) HDCloudSyncShardPredicate *shardPredicate;
@property(nonatomic) int requiredProtocolVersion;
@property(nonatomic) int supportedProtocolVersion;
@property(nonatomic) int deviceMode;
@property(copy, nonatomic) NSString *deviceName;
@property(copy, nonatomic) NSString *systemBuildVersion;
@property(copy, nonatomic) NSString *productType;
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic) long long order;
@property(copy, nonatomic) NSString *pendingOwner;
- (void)repairOwnerIdentifier:(id)arg1;	// IMP=0x0000000000247e00
@property(readonly, copy, nonatomic) NSString *ownerIdentifier;
@property(readonly, copy, nonatomic) NSUUID *storeIdentifier;
- (id)sequenceRecordWithRecordID:(id)arg1;	// IMP=0x0000000000247bc7
- (_Bool)hasSequenceWithFutureProtocolVersion;	// IMP=0x0000000000247b7a
- (_Bool)hasActiveSequence;	// IMP=0x0000000000247b32
- (void)removeSequenceHeaderRecord:(id)arg1;	// IMP=0x000000000024798e
- (void)addSequenceHeaderRecord:(id)arg1;	// IMP=0x000000000024792d
- (id)addNewTombstoneSequenceHeaderRecordWithIncludedIdentifiers:(id)arg1;	// IMP=0x00000000002477ce
- (id)addNewSequenceHeaderRecordWithSyncAnchorMap:(id)arg1 includedIdentifiers:(id)arg2;	// IMP=0x000000000024756b
- (id)clearTombstoneSequenceHeaderRecord;	// IMP=0x00000000002474e9
- (id)clearPendingSequenceHeaderRecord;	// IMP=0x000000000024749c
- (id)pendingSequenceHeaderRecord;	// IMP=0x00000000002473df
- (id)activeSequenceHeaderRecord;	// IMP=0x0000000000247326
- (id)clearOldSequenceHeaderRecord;	// IMP=0x00000000002472d9
- (id)oldSequenceHeaderRecord;	// IMP=0x0000000000247263
- (id)clearCurrentSequenceHeaderRecord;	// IMP=0x000000000024714e
- (id)currentSequenceHeaderRecord;	// IMP=0x00000000002470c2
@property(readonly, copy, nonatomic) NSArray *orderedSequenceRecords;
@property(readonly, nonatomic) HDCloudSyncSequenceRecord *sequenceRecord;
- (id)initInSyncCircle:(id)arg1 ownerIdentifier:(id)arg2 storeIdentifier:(id)arg3 zoneID:(id)arg4;	// IMP=0x0000000000246a6a
- (id)initInSyncCircle:(id)arg1 ownerIdentifier:(id)arg2 storeIdentifier:(id)arg3 unified:(_Bool)arg4;	// IMP=0x0000000000246987
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;	// IMP=0x000000000024690d

@end
