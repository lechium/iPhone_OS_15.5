//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSData, NSString, NSUUID;

@interface REMCDManualSortHint
{
    MISSING_TYPE *separatorInConcatenatedContainerIDsWithLocalContainerIDPrefix;	// 8 = 0x8
    MISSING_TYPE *separatorInConcatenatedElementIDsWithLocalElementIDPrefix;	// 24 = 0x18
}

+ (id)keyPathsForValuesAffectingEffectiveMinimumSupportedVersion;	// IMP=0x002000000017b4f0
+ (_Bool)isAbstract;	// IMP=0x001000000017b4e0
+ (id)cdEntityName;	// IMP=0x001000000017b3c0
+ (_Bool)shouldAttemptLocalObjectMerge;	// IMP=0x00100000002ece00
+ (id)newCloudObjectForRecord:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x00100000002eac40
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;	// IMP=0x00100000002eaaa0
+ (id)recordTypes;	// IMP=0x00100000002ea9c0
- (void).cxx_destruct;	// IMP=0x004000000017b640
- (void).cxx_construct;	// IMP=0x001000000017b600
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x001000000017b580
- (long long)parentEffectiveMinimumSupportedVersion;	// IMP=0x001000000017b540
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x001000000017b430
- (void)cleanUpAfterLocalObjectMerge;	// IMP=0x00100000002ed070
- (_Bool)mergeWithLocalObject:(id)arg1;	// IMP=0x00100000002ece70
- (id)existingLocalObjectToMergeWithPredicate:(id)arg1;	// IMP=0x00100000002ece10
- (id)parentCloudObject;	// IMP=0x00100000002ecdb0
- (id)newlyCreatedRecord;	// IMP=0x00100000002ecd70
- (void)mergeDataFromRecord:(id)arg1;	// IMP=0x00100000002eb7d0
- (_Bool)shouldMarkAsDeletedInsteadOfDeletingImmediately;	// IMP=0x00100000002ead50
- (_Bool)supportsDeletionByTTL;	// IMP=0x00100000002ead40
- (id)recordType;	// IMP=0x00100000002ead10
- (id)recordZoneName;	// IMP=0x00100000002eacd0

// Remaining properties
@property(nonatomic, copy) NSString *concatenatedContainerIDsWithLocalContainerIDPrefix; // @dynamic concatenatedContainerIDsWithLocalContainerIDPrefix;
@property(nonatomic, copy) NSString *concatenatedElementIDsWithLocalElementIDPrefix; // @dynamic concatenatedElementIDsWithLocalElementIDPrefix;
@property(nonatomic, copy) NSUUID *eTag; // @dynamic eTag;
@property(nonatomic, copy) NSData *hintData; // @dynamic hintData;
@property(nonatomic) int lastAccessedSinceReferenceDate; // @dynamic lastAccessedSinceReferenceDate;
@property(nonatomic, copy) NSString *listID; // @dynamic listID;
@property(nonatomic) short listTypeRawValue; // @dynamic listTypeRawValue;
@property(nonatomic) short serializationVersion; // @dynamic serializationVersion;

@end
