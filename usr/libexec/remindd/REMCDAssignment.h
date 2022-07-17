//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, NSUUID, REMCDReminder, REMCDSharee;

@interface REMCDAssignment
{
}

+ (_Bool)isShareeActivelyParticipatingWithSharee:(id)arg1;	// IMP=0x001000000005f484
+ (id)cdEntityName;	// IMP=0x001000000005f46b
+ (_Bool)isAbstract;	// IMP=0x001000000005f463
+ (id)keyPathsForValuesAffectingEffectiveMinimumSupportedVersion;	// IMP=0x00100000000426ef
+ (id)fetchRequest;	// IMP=0x0010000000085465
+ (_Bool)shouldAttemptLocalObjectMerge;	// IMP=0x00100000000b1900
+ (id)newCloudObjectForRecord:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x00100000000af330
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;	// IMP=0x00100000000af1a0
+ (id)recordTypes;	// IMP=0x00100000000af0e0
- (long long)parentEffectiveMinimumSupportedVersion;	// IMP=0x000000000004270f
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x0010000000042678
- (void)cleanUpAfterLocalObjectMerge;	// IMP=0x00100000000b1b90
- (_Bool)mergeWithLocalObject:(id)arg1;	// IMP=0x00100000000b1990
- (id)existingLocalObjectToMergeWithPredicate:(id)arg1;	// IMP=0x00100000000b1920
- (void)fixBrokenReferences;	// IMP=0x00100000000b18c0
- (id)parentCloudObject;	// IMP=0x00100000000b1290
- (id)newlyCreatedRecord;	// IMP=0x00100000000b1230
- (void)mergeDataFromRecord:(id)arg1;	// IMP=0x00100000000b0a70
- (_Bool)shouldMarkAsDeletedInsteadOfDeletingImmediately;	// IMP=0x00100000000af4a0
- (_Bool)supportsDeletionByTTL;	// IMP=0x00100000000af480
- (id)recordType;	// IMP=0x00100000000af440
- (id)recordZoneName;	// IMP=0x00100000000af3e0

// Remaining properties
@property(copy, nonatomic) NSDate *assignedDate; // @dynamic assignedDate;
@property(retain, nonatomic) REMCDSharee *assignee; // @dynamic assignee;
@property(copy, nonatomic) NSString *ckAssigneeIdentifier; // @dynamic ckAssigneeIdentifier;
@property(copy, nonatomic) NSString *ckOriginatorIdentifier; // @dynamic ckOriginatorIdentifier;
@property(retain, nonatomic) REMCDSharee *originator; // @dynamic originator;
@property(copy, nonatomic) NSUUID *owningReminderIdentifier; // @dynamic owningReminderIdentifier;
@property(retain, nonatomic) REMCDReminder *reminder; // @dynamic reminder;
@property(nonatomic) short status; // @dynamic status;

@end
