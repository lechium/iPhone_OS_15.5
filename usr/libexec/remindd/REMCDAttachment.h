//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, REMCDReminder;

@interface REMCDAttachment
{
}

+ (id)cdEntityName;	// IMP=0x001000000006c604
+ (_Bool)isAbstract;	// IMP=0x001000000006c5fc
+ (id)fetchRequest;	// IMP=0x0010000000055e2d
+ (id)keyPathsForValuesAffectingEffectiveMinimumSupportedVersion;	// IMP=0x001000000005d848
+ (_Bool)shouldAttemptLocalObjectMerge;	// IMP=0x0010000000211fe0
+ (id)newCloudObjectForRecord:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x001000000020e740
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;	// IMP=0x001000000020e2d0
+ (id)recordTypes;	// IMP=0x001000000020e210
- (long long)parentEffectiveMinimumSupportedVersion;	// IMP=0x002000000005d868
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x001000000005d7d1
- (void)fixBrokenReferences;	// IMP=0x0010000000212890
- (void)cleanUpAfterLocalObjectMerge;	// IMP=0x0010000000212270
- (_Bool)mergeWithLocalObject:(id)arg1;	// IMP=0x0010000000212070
- (id)existingLocalObjectToMergeWithPredicate:(id)arg1;	// IMP=0x0010000000212000
- (id)parentCloudObject;	// IMP=0x0010000000211f90
- (id)newlyCreatedRecord;	// IMP=0x0010000000211f30
- (void)mergeDataFromRecord:(id)arg1;	// IMP=0x0010000000210c50
- (_Bool)shouldMarkAsDeletedInsteadOfDeletingImmediately;	// IMP=0x001000000020e8b0
- (_Bool)supportsDeletionByTTL;	// IMP=0x001000000020e890
- (id)recordType;	// IMP=0x001000000020e850
- (id)recordZoneName;	// IMP=0x001000000020e7f0

// Remaining properties
@property(retain, nonatomic) REMCDReminder *reminder; // @dynamic reminder;
@property(copy, nonatomic) NSString *uti; // @dynamic uti;

@end
