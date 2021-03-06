//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMExternalSyncMetadataProviding-Protocol.h>
#import <ReminderKit/REMObjectIDProviding-Protocol.h>
#import <ReminderKit/REMPersonIDProviding-Protocol.h>
#import <ReminderKit/REMSupportedVersionProviding-Protocol.h>

@class NSData, NSOrderedSet, NSSet, NSString, REMAccountCapabilities, REMAccountGroupContext, REMAccountStorage, REMCRMergeableOrderedSet, REMObjectID, REMResolutionTokenMap, REMStore;

@interface REMAccount : NSObject <REMPersonIDProviding, REMObjectIDProviding, REMExternalSyncMetadataProviding, REMSupportedVersionProviding>
{
    _Bool _markedForRemoval;	// 8 = 0x8
    REMStore *_store;	// 16 = 0x10
    REMAccountStorage *_storage;	// 24 = 0x18
    REMAccountCapabilities *_capabilities;	// 32 = 0x20
}

+ (id)_accountTypeMaskWithBitMask:(long long)arg1;	// IMP=0x0000000000077415
+ (id)cdEntityName;	// IMP=0x0000000000077320
+ (id)objectIDWithUUID:(id)arg1;	// IMP=0x0000000000077307
+ (id)newObjectID;	// IMP=0x00000000000772ee
+ (id)localAccountID;	// IMP=0x0000000000076271
+ (id)localInternalAccountID;	// IMP=0x000000000007620c
- (void).cxx_destruct;	// IMP=0x0000000000077526
@property(nonatomic) _Bool markedForRemoval; // @synthesize markedForRemoval=_markedForRemoval;
@property(retain, nonatomic) REMAccountCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, copy, nonatomic) REMAccountStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) REMStore *store; // @synthesize store=_store;
- (_Bool)shouldUseExternalIdentifierAsDeletionKey;	// IMP=0x00000000000773e0
- (id)externalIdentifierForMarkedForDeletionObject;	// IMP=0x000000000007737d
- (_Bool)isUnsupported;	// IMP=0x0000000000077339
@property(readonly, nonatomic) REMObjectID *remObjectID;
@property(readonly, nonatomic) _Bool daSupportsPhoneNumbers;
@property(readonly, nonatomic) NSOrderedSet *listIDsOrdering;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000000771d4
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000007715c
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000000770d9
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000770c7
- (_Bool)MCIsManagedWithResultPtr:(_Bool *)arg1 error:(id *)arg2;	// IMP=0x0000000000076eee
- (id)fetchListIncludingSpecialContainerWithExternalIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000076e32
- (id)fetchListsIncludingSpecialContainersWithError:(id *)arg1;	// IMP=0x0000000000076dac
- (_Bool)isConsideredEmptyWithResultPtr:(_Bool *)arg1 withError:(id *)arg2;	// IMP=0x000000000007695c
- (_Bool)canCopyReminderLosslesslyToAccount:(id)arg1;	// IMP=0x00000000000768e8
- (id)fetchCustomSmartListsWithError:(id *)arg1;	// IMP=0x000000000007684a
- (id)fetchListsWithError:(id *)arg1;	// IMP=0x00000000000767ac
@property(readonly, nonatomic) REMAccountGroupContext *groupContext;
@property(readonly, nonatomic) _Bool supportsSharingLists;
- (id)debugDescription;	// IMP=0x0000000000076630
- (id)description;	// IMP=0x00000000000765a8
- (unsigned long long)hash;	// IMP=0x0000000000076564
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000076421
- (id)optionalObjectID;	// IMP=0x00000000000763d1
- (id)initWithStore:(id)arg1 storage:(id)arg2;	// IMP=0x00000000000762d6

// Remaining properties
@property(readonly, nonatomic) _Bool daAllowsCalendarAddDeleteModify; // @dynamic daAllowsCalendarAddDeleteModify;
@property(readonly, nonatomic) NSString *daConstraintsDescriptionPath; // @dynamic daConstraintsDescriptionPath;
@property(readonly, nonatomic) NSString *daPushKey; // @dynamic daPushKey;
@property(readonly, nonatomic) _Bool daSupportsSharedCalendars; // @dynamic daSupportsSharedCalendars;
@property(readonly, nonatomic) NSString *daSyncToken; // @dynamic daSyncToken;
@property(readonly, nonatomic) _Bool daWasMigrated; // @dynamic daWasMigrated;
@property(readonly, nonatomic) _Bool didChooseToMigrate; // @dynamic didChooseToMigrate;
@property(readonly, nonatomic) _Bool didChooseToMigrateLocally; // @dynamic didChooseToMigrateLocally;
@property(readonly, nonatomic) _Bool didFinishMigration; // @dynamic didFinishMigration;
@property(retain, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly, nonatomic) long long effectiveMinimumSupportedVersion; // @dynamic effectiveMinimumSupportedVersion;
@property(readonly, nonatomic) NSString *externalIdentifier; // @dynamic externalIdentifier;
@property(readonly, nonatomic) NSString *externalModificationTag; // @dynamic externalModificationTag;
@property(readonly, nonatomic) _Bool inactive; // @dynamic inactive;
@property(readonly, nonatomic) REMCRMergeableOrderedSet *listIDsMergeableOrdering; // @dynamic listIDsMergeableOrdering;
@property(readonly, nonatomic) NSSet *listIDsToUndelete; // @dynamic listIDsToUndelete;
@property(readonly, nonatomic) _Bool listsDADisplayOrderChanged; // @dynamic listsDADisplayOrderChanged;
@property(readonly, nonatomic) long long minimumSupportedVersion; // @dynamic minimumSupportedVersion;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) REMObjectID *objectID; // @dynamic objectID;
@property(readonly, nonatomic) long long persistenceCloudSchemaVersion; // @dynamic persistenceCloudSchemaVersion;
@property(copy, nonatomic) NSString *personID; // @dynamic personID;
@property(copy, nonatomic) NSData *personIDSalt; // @dynamic personIDSalt;
@property(readonly, nonatomic) REMResolutionTokenMap *resolutionTokenMap; // @dynamic resolutionTokenMap;
@property(readonly, nonatomic) NSData *resolutionTokenMapData; // @dynamic resolutionTokenMapData;
@property(readonly, nonatomic) NSSet *smartListIDsToUndelete; // @dynamic smartListIDsToUndelete;
@property(readonly, nonatomic) long long type; // @dynamic type;

@end

