//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSupport/MSPCloudReplica-Protocol.h>
#import <MapsSupport/MSPContainerStateSnapshot-Protocol.h>
#import <MapsSupport/MSPPropertyListReplicaDataSerialization-Protocol.h>
#import <MapsSupport/MSPPropertyListReplicaSerialization-Protocol.h>

@class NSArray, NSData, NSString;

@interface MSPCollectionsReplica <MSPCloudReplica, MSPContainerStateSnapshot, MSPPropertyListReplicaDataSerialization, MSPPropertyListReplicaSerialization>
{
}

- (void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5;	// IMP=0x000000000003021b
- (id)replicaByMergingWithReplica:(id)arg1 mergeOptions:(id)arg2 userVisibleEffectiveContentsChanged:(out _Bool *)arg3;	// IMP=0x000000000002fdbd
@property(readonly, nonatomic) NSData *propertyListDataRepresentation;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002fbfa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002fb81
- (id)initWithPropertyListRepresentation:(id)arg1 recordCreationHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f1db
- (id)propertyListRepresentationDecoratingRecordsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ebab
@property(readonly, nonatomic) id propertyListRepresentation;
@property(readonly, copy, nonatomic) NSArray *contents;
- (id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2;	// IMP=0x000000000002e171
- (Class)replicaRecordClass;	// IMP=0x00000000000a5a27
- (id)mergeOptionsWithLastSyncDate:(id)arg1;	// IMP=0x00000000000a5a1f
- (id)changesMergingCloudChanges:(id)arg1 withReplica:(id)arg2 lastSyncDate:(id)arg3;	// IMP=0x00000000000a59e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

