//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSupport/MSPReplicaRecord-Protocol.h>

@class CKRecord, CKRecordID, MSPReplicaEditInsertRecord, MSPReplicaEditUpdateContents, NSUUID;
@protocol MSPReplicaRecordFromCloud;

@protocol MSPReplicaRecordFromCloud <MSPReplicaRecord>
+ (id <MSPReplicaRecordFromCloud>)recordFromInsertEdit:(MSPReplicaEditInsertRecord *)arg1;
+ (id <MSPReplicaRecordFromCloud>)tombstoneWithRecordIdentifier:(NSUUID *)arg1;
@property(readonly, nonatomic, getter=recordIdentifier) NSUUID *recordIdentifier;
@property(readonly, nonatomic, getter=isTombstoneRepresentedByCloudRecord) _Bool tombstoneRepresentedByCloudRecord;
@property(retain, nonatomic) CKRecord *record;
- (CKRecordID *)tombstoneRecordRepresentation;
- (CKRecord *)recordRepresentation;
- (void)applyUpdateEdit:(MSPReplicaEditUpdateContents *)arg1;
@end

