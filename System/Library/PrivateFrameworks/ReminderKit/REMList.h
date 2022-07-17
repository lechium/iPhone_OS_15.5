//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMDAChangeTrackableFetchableModel-Protocol.h>
#import <ReminderKit/REMDAChangedModelObjectResult-Protocol.h>
#import <ReminderKit/REMExternalSyncMetadataProviding-Protocol.h>
#import <ReminderKit/REMObjectIDProviding-Protocol.h>
#import <ReminderKit/REMSupportedVersionProviding-Protocol.h>
#import <ReminderKit/_REMDAChangeTrackableModel-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSOrderedSet, NSSet, NSString, REMAccount, REMColor, REMListAppearanceContext, REMListCalDAVNotificationContext, REMListShareeContext, REMListStorage, REMListSublistContext, REMObjectID, REMResolutionTokenMap, REMStore;

@interface REMList : NSObject <REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, REMObjectIDProviding, REMExternalSyncMetadataProviding, REMSupportedVersionProviding>
{
    REMStore *_store;	// 8 = 0x8
    REMListStorage *_storage;	// 16 = 0x10
    REMAccount *_account;	// 24 = 0x18
    REMList *_parentList;	// 32 = 0x20
}

+ (id)cdEntityName;	// IMP=0x00000000000a5281
+ (id)objectIDWithUUID:(id)arg1;	// IMP=0x00000000000a5268
+ (id)newObjectID;	// IMP=0x00000000000a524f
+ (_Bool)isOwnedByMeWithSharingStatus:(long long)arg1;	// IMP=0x00000000000a491f
+ (_Bool)isSharedWithShareeCount:(unsigned long long)arg1 sharingStatus:(long long)arg2;	// IMP=0x00000000000a48d5
+ (id)localAccountDefaultListID;	// IMP=0x00000000000a3e48
+ (id)siriFoundInAppsListID;	// IMP=0x00000000000a3de3
+ (id)fetchRequestWithPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2;	// IMP=0x00000000000a3d3c
+ (_Bool)isChangeTrackableFetchableModel;	// IMP=0x00000000000686da
+ (_Bool)isChangeTrackableModel;	// IMP=0x00000000000686d2
+ (CDUnknownBlockType)rem_DA_deletedKeyFromConcealedModelObjectBlock;	// IMP=0x0000000000068bb5
+ (CDUnknownBlockType)rem_DA_deletedKeyFromTombstoneBlock;	// IMP=0x0000000000068ade
+ (CDUnknownBlockType)rem_DA_fetchByObjectIDsBlock;	// IMP=0x00000000000689ee
+ (CDUnknownBlockType)rem_DA_fetchByObjectIDBlock;	// IMP=0x00000000000687ed
+ (id)rem_DA_propertiesAffectingIsConcealed;	// IMP=0x0000000000068771
+ (_Bool)rem_DA_supportsConcealedObjects;	// IMP=0x0000000000068769
+ (_Bool)rem_DA_supportsFetching;	// IMP=0x000000000006872a
- (void).cxx_destruct;	// IMP=0x00000000000a55a4
@property(retain, nonatomic) REMList *parentList; // @synthesize parentList=_parentList;
@property(readonly, nonatomic) REMAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) REMListStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) REMStore *store; // @synthesize store=_store;
- (void)hack_overrideReminderIDsOrderingWithOrderedObjectIDs:(id)arg1;	// IMP=0x00000000000a5423
- (_Bool)shouldUseExternalIdentifierAsDeletionKey;	// IMP=0x00000000000a5341
@property(readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
- (_Bool)isUnsupported;	// IMP=0x00000000000a529a
@property(readonly, nonatomic) REMObjectID *remObjectID;
- (id)fetchRemindersWithExternalIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a5181
- (id)fetchReminderWithExternalIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a50c5
- (id)sharingStatusText;	// IMP=0x00000000000a4dcf
- (id)formattedSharedOwnerName;	// IMP=0x00000000000a4d17
- (id)fetchRemindersCountWithError:(id *)arg1;	// IMP=0x00000000000a4c5a
- (id)fetchRemindersAndSubtasksWithError:(id *)arg1;	// IMP=0x00000000000a4b98
- (id)fetchRemindersWithError:(id *)arg1;	// IMP=0x00000000000a4ad9
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000000a4a53
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000a49db
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000000a4958
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000a4946
@property(readonly, nonatomic) _Bool isSharedToMe;
@property(readonly, nonatomic) _Bool isOwnedByMe;
@property(readonly, nonatomic) _Bool isShared;
@property(readonly, nonatomic) _Bool canBeIncludedInGroup;
@property(readonly, nonatomic) _Bool canBeShared;
- (id)ekColor;	// IMP=0x00000000000a47ac
@property(readonly, nonatomic) NSOrderedSet *reminderIDsOrdering;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a4227
@property(readonly, nonatomic) REMListShareeContext *shareeContext;
@property(readonly, nonatomic) REMListCalDAVNotificationContext *calDAVNotificationContext;
@property(readonly, nonatomic) REMListSublistContext *sublistContext;
@property(readonly, nonatomic) REMListAppearanceContext *appearanceContext;
- (id)optionalObjectID;	// IMP=0x00000000000a3f9a
- (id)initWithStore:(id)arg1 account:(id)arg2 storage:(id)arg3;	// IMP=0x00000000000a3ead

// Remaining properties
@property(readonly, nonatomic) REMObjectID *accountID; // @dynamic accountID;
@property(readonly, nonatomic) NSString *badgeEmblem; // @dynamic badgeEmblem;
@property(readonly, nonatomic) NSArray *calDAVNotifications; // @dynamic calDAVNotifications;
@property(readonly, nonatomic) NSSet *childListIDsToUndelete; // @dynamic childListIDsToUndelete;
@property(readonly, nonatomic) NSSet *childSmartListIDsToUndelete; // @dynamic childSmartListIDsToUndelete;
@property(readonly, nonatomic) REMColor *color; // @dynamic color;
@property(readonly, nonatomic) NSString *currentUserShareParticipantID; // @dynamic currentUserShareParticipantID;
@property(readonly, nonatomic) NSDictionary *daBulkRequests; // @dynamic daBulkRequests;
@property(readonly, nonatomic) long long daDisplayOrder; // @dynamic daDisplayOrder;
@property(readonly, nonatomic) NSString *daExternalIdentificationTag; // @dynamic daExternalIdentificationTag;
@property(readonly, nonatomic) _Bool daIsEventOnlyContainer; // @dynamic daIsEventOnlyContainer;
@property(readonly, nonatomic) _Bool daIsImmutable; // @dynamic daIsImmutable;
@property(readonly, nonatomic) _Bool daIsNotificationsCollection; // @dynamic daIsNotificationsCollection;
@property(readonly, nonatomic) _Bool daIsReadOnly; // @dynamic daIsReadOnly;
@property(readonly, nonatomic) NSString *daPushKey; // @dynamic daPushKey;
@property(readonly, nonatomic) NSString *daSyncToken; // @dynamic daSyncToken;
@property(readonly, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly, nonatomic) long long effectiveMinimumSupportedVersion; // @dynamic effectiveMinimumSupportedVersion;
@property(readonly, nonatomic) NSString *externalIdentifier; // @dynamic externalIdentifier;
@property(readonly, nonatomic) NSString *externalModificationTag; // @dynamic externalModificationTag;
@property(readonly, nonatomic) _Bool isGroup; // @dynamic isGroup;
@property(nonatomic) _Bool isPlaceholder; // @dynamic isPlaceholder;
@property(readonly, copy, nonatomic) NSDate *lastUserAccessDate; // @dynamic lastUserAccessDate;
@property(readonly, nonatomic) long long minimumSupportedVersion; // @dynamic minimumSupportedVersion;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) REMObjectID *objectID; // @dynamic objectID;
@property(readonly, nonatomic) REMObjectID *parentAccountID; // @dynamic parentAccountID;
@property(readonly, nonatomic) REMObjectID *parentListID; // @dynamic parentListID;
@property(readonly, nonatomic) NSOrderedSet *reminderIDsMergeableOrdering; // @dynamic reminderIDsMergeableOrdering;
@property(readonly, nonatomic) NSData *reminderIDsMergeableOrderingData; // @dynamic reminderIDsMergeableOrderingData;
@property(readonly, nonatomic) NSDictionary *reminderIDsOrderingHints; // @dynamic reminderIDsOrderingHints;
@property(readonly, nonatomic) NSSet *reminderIDsToUndelete; // @dynamic reminderIDsToUndelete;
@property(readonly, nonatomic) _Bool remindersICSDisplayOrderChanged; // @dynamic remindersICSDisplayOrderChanged;
@property(readonly, nonatomic) REMResolutionTokenMap *resolutionTokenMap; // @dynamic resolutionTokenMap;
@property(readonly, nonatomic) NSData *resolutionTokenMapData; // @dynamic resolutionTokenMapData;
@property(readonly, nonatomic) NSString *sharedOwnerAddress; // @dynamic sharedOwnerAddress;
@property(readonly, nonatomic) REMObjectID *sharedOwnerID; // @dynamic sharedOwnerID;
@property(readonly, nonatomic) NSString *sharedOwnerName; // @dynamic sharedOwnerName;
@property(readonly, nonatomic) NSArray *sharees; // @dynamic sharees;
@property(readonly, nonatomic) long long sharingStatus; // @dynamic sharingStatus;
@property(readonly, nonatomic) _Bool showingLargeAttachments; // @dynamic showingLargeAttachments;
@property(readonly, nonatomic) NSString *sortingStyle; // @dynamic sortingStyle;
@property(readonly) Class superclass;

@end
