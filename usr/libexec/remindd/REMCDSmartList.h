//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, REMCDAccount, REMCDList, REMColor;

@interface REMCDSmartList
{
    _Bool didCleanUpManualSortHintOnMarkingForDeletion;	// 8 = 0x8
}

+ (id)cdEntityName;	// IMP=0x0020000000060718
+ (_Bool)isAbstract;	// IMP=0x0010000000060710
+ (id)fetchRequest;	// IMP=0x00100000000038aa
+ (id)keyPathsForValuesAffectingEffectiveMinimumSupportedVersion;	// IMP=0x0010000000043dec
+ (_Bool)shouldAttemptLocalObjectMerge;	// IMP=0x00100000000f7740
+ (id)newCloudObjectForRecord:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x00100000000f4bb0
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;	// IMP=0x00100000000f4a10
+ (id)recordTypes;	// IMP=0x00100000000f4950
@property(nonatomic) _Bool didCleanUpManualSortHintOnMarkingForDeletion; // @synthesize didCleanUpManualSortHintOnMarkingForDeletion;
- (long long)parentEffectiveMinimumSupportedVersion;	// IMP=0x0010000000043e18
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x0010000000043c88
- (_Bool)shouldUseResolutionTokenMapForMergingData;	// IMP=0x00100000000f4460
- (void)cleanUpAfterLocalObjectMerge;	// IMP=0x00100000000f79d0
- (_Bool)mergeWithLocalObject:(id)arg1;	// IMP=0x00100000000f77d0
- (id)existingLocalObjectToMergeWithPredicate:(id)arg1;	// IMP=0x00100000000f7760
- (id)parentCloudObject;	// IMP=0x00100000000f76f0
- (id)newlyCreatedRecord;	// IMP=0x00100000000f73a0
- (void)mergeDataFromRecord:(id)arg1;	// IMP=0x00100000000f5eb0
- (_Bool)shouldMarkAsDeletedInsteadOfDeletingImmediately;	// IMP=0x00100000000f4d20
- (_Bool)supportsDeletionByTTL;	// IMP=0x00100000000f4d00
- (id)recordType;	// IMP=0x00100000000f4cc0
- (id)recordZoneName;	// IMP=0x00100000000f4c60
- (void)didSave_Swift;	// IMP=0x0010000000262fb0
- (void)willSave_Swift;	// IMP=0x0010000000262f40

// Remaining properties
@property(copy, nonatomic) NSString *badgeEmblem; // @dynamic badgeEmblem;
@property(retain, nonatomic) REMColor *color; // @dynamic color;
@property(retain, nonatomic) NSData *filterData; // @dynamic filterData;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) REMCDAccount *parentAccount; // @dynamic parentAccount;
@property(retain, nonatomic) REMCDList *parentList; // @dynamic parentList;
@property(nonatomic) _Bool showingLargeAttachments; // @dynamic showingLargeAttachments;
@property(copy, nonatomic) NSString *smartListType; // @dynamic smartListType;
@property(copy, nonatomic) NSString *sortingStyle; // @dynamic sortingStyle;

@end
