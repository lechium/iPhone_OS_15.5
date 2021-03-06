//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMConflictResolving-Protocol.h>
#import <ReminderKit/REMMergeableOrderingNode-Protocol.h>
#import <ReminderKit/REMSaveRequestTrackedValue-Protocol.h>
#import <ReminderKit/REMSupportedVersionProviding-Protocol.h>
#import <ReminderKit/REMSupportedVersionUpdating-Protocol.h>

@class NSData, NSString, REMAccount, REMChangedKeysObserver, REMColor, REMManualOrdering, REMObjectID, REMResolutionTokenMap, REMSaveRequest, REMSmartListCustomContextChangeItem, REMSmartListStorage;

@interface REMSmartListChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMMergeableOrderingNode, REMSupportedVersionProviding, REMSupportedVersionUpdating>
{
    REMSaveRequest *_saveRequest;	// 8 = 0x8
    REMSmartListStorage *_storage;	// 16 = 0x10
    REMChangedKeysObserver *_changedKeysObserver;	// 24 = 0x18
    REMAccount *_parentAccount;	// 32 = 0x20
}

+ (id)cdEntityName;	// IMP=0x00000000000aa45d
+ (id)objectIDWithUUID:(id)arg1;	// IMP=0x00000000000aa444
+ (id)newObjectID;	// IMP=0x00000000000aa42b
+ (void)initialize;	// IMP=0x00000000000a988b
- (void).cxx_destruct;	// IMP=0x00000000000aa76b
@property(readonly, nonatomic) REMAccount *parentAccount; // @synthesize parentAccount=_parentAccount;
@property(retain, nonatomic) REMChangedKeysObserver *changedKeysObserver; // @synthesize changedKeysObserver=_changedKeysObserver;
@property(readonly, copy, nonatomic) REMSmartListStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) REMSaveRequest *saveRequest; // @synthesize saveRequest=_saveRequest;
@property(readonly, nonatomic) REMSmartListCustomContextChangeItem *customContext;
- (id)removeFromParentAllowingUndoWithAccountChangeItem:(id)arg1;	// IMP=0x00000000000aa4ba
- (_Bool)isUnsupported;	// IMP=0x00000000000aa476
- (void)removeFromParentWithAccountChangeItem:(id)arg1;	// IMP=0x00000000000aa410
- (_Bool)isSubContainer;	// IMP=0x00000000000aa408
@property(retain, nonatomic) REMObjectID *parentSubContainerID;
@property(retain, nonatomic) REMObjectID *parentOwnerID;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000000aa298
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000aa220
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000000aa19d
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000aa18b
- (void)assertIsCustomSmartListWithAction:(id)arg1;	// IMP=0x00000000000a9fdd
- (id)shallowCopyWithSaveRequest:(id)arg1;	// IMP=0x00000000000a9f2f
- (id)resolutionTokenKeyForChangedKey:(id)arg1;	// IMP=0x00000000000a9ed5
- (id)changedKeys;	// IMP=0x00000000000a9e85
- (void)updateManualOrdering:(id)arg1;	// IMP=0x00000000000a9e73
- (id)initWithCustomSmartListObjectID:(id)arg1 insertIntoListSublistContextChangeItem:(id)arg2;	// IMP=0x00000000000a9d71
- (id)initWithCustomSmartListObjectID:(id)arg1 insertIntoAccountChangeItem:(id)arg2 withParentListChangeItem:(id)arg3;	// IMP=0x00000000000a9a7e
- (id)initWithCustomSmartListObjectID:(id)arg1 insertIntoAccountChangeItem:(id)arg2;	// IMP=0x00000000000a9a69
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 observeInitialValues:(_Bool)arg3;	// IMP=0x00000000000a99bd
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 changedKeysObserver:(id)arg3;	// IMP=0x00000000000a9906

// Remaining properties
@property(retain, nonatomic) REMObjectID *accountID; // @dynamic accountID;
@property(retain, nonatomic) NSString *badgeEmblem; // @dynamic badgeEmblem;
@property(retain, nonatomic) REMColor *color; // @dynamic color;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long effectiveMinimumSupportedVersion; // @dynamic effectiveMinimumSupportedVersion;
@property(retain, nonatomic) NSData *filterData; // @dynamic filterData;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isPersisted; // @dynamic isPersisted;
@property(retain, nonatomic) REMManualOrdering *manualOrdering; // @dynamic manualOrdering;
@property(readonly, nonatomic) long long minimumSupportedVersion; // @dynamic minimumSupportedVersion;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) REMObjectID *objectID; // @dynamic objectID;
@property(retain, nonatomic) REMObjectID *parentAccountID; // @dynamic parentAccountID;
@property(retain, nonatomic) REMObjectID *parentListID; // @dynamic parentListID;
@property(readonly, nonatomic) REMObjectID *remObjectID; // @dynamic remObjectID;
@property(retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap; // @dynamic resolutionTokenMap;
@property(retain, nonatomic) NSData *resolutionTokenMapData; // @dynamic resolutionTokenMapData;
@property(nonatomic) _Bool showingLargeAttachments; // @dynamic showingLargeAttachments;
@property(copy, nonatomic) NSString *smartListType; // @dynamic smartListType;
@property(copy, nonatomic) NSString *sortingStyle; // @dynamic sortingStyle;
@property(readonly) Class superclass;

@end

