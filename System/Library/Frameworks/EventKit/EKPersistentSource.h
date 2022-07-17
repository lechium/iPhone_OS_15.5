//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKFrozenReminderSource, NSNumber, NSString;

@interface EKPersistentSource
{
    EKFrozenReminderSource *_reminderSource;	// 8 = 0x8
}

+ (Class)meltedClass;	// IMP=0x00000000001186d5
+ (id)relations;	// IMP=0x00000000001185e3
+ (id)defaultPropertiesToLoad;	// IMP=0x00000000001184e8
- (void).cxx_destruct;	// IMP=0x0000000000118d58
@property(retain) EKFrozenReminderSource *reminderSource; // @synthesize reminderSource=_reminderSource;
- (id)description;	// IMP=0x0000000000118c37
- (void)setOwnerName:(id)arg1;	// IMP=0x0000000000118c1b
- (id)ownerName;	// IMP=0x0000000000118bff
- (void)setDisplayOrder:(int)arg1;	// IMP=0x0000000000118be3
- (int)displayOrder;	// IMP=0x0000000000118bc7
- (void)setDelegatedAccountOwnerStoreID:(id)arg1;	// IMP=0x0000000000118bab
- (id)delegatedAccountOwnerStoreID;	// IMP=0x0000000000118b8f
- (void)setLastSyncErrorData:(id)arg1;	// IMP=0x0000000000118b73
- (id)lastSyncErrorData;	// IMP=0x0000000000118b57
- (void)setLastSyncError:(unsigned long long)arg1;	// IMP=0x0000000000118b3b
- (unsigned long long)lastSyncError;	// IMP=0x0000000000118b1c
- (void)setLastSyncEndDate:(id)arg1;	// IMP=0x0000000000118b00
- (id)lastSyncEndDate;	// IMP=0x0000000000118ae4
- (void)setLastSyncStartDate:(id)arg1;	// IMP=0x0000000000118ac8
- (id)lastSyncStartDate;	// IMP=0x0000000000118aac
- (void)setFlags2:(int)arg1;	// IMP=0x0000000000118a90
- (int)flags2;	// IMP=0x0000000000118a74
- (void)setFlags:(int)arg1;	// IMP=0x0000000000118a58
- (int)flags;	// IMP=0x0000000000118a3c
- (void)setShowsNotifications:(_Bool)arg1;	// IMP=0x0000000000118a20
- (_Bool)showsNotifications;	// IMP=0x0000000000118a04
@property(nonatomic) _Bool onlyCreatorCanModify; // @dynamic onlyCreatorCanModify;
- (void)setCreatorCodeSigningIdentity:(id)arg1;	// IMP=0x00000000001189b0
- (id)creatorCodeSigningIdentity;	// IMP=0x0000000000118994
- (void)setCreatorBundleID:(id)arg1;	// IMP=0x0000000000118978
- (id)creatorBundleID;	// IMP=0x000000000011895c
@property(nonatomic) _Bool disabled; // @dynamic disabled;
@property(copy, nonatomic) NSString *externalModificationTag; // @dynamic externalModificationTag;
- (void)setConstraintsName:(id)arg1;	// IMP=0x00000000001188d0
- (id)constraintsName;	// IMP=0x00000000001188b4
@property(copy, nonatomic) NSString *externalID; // @dynamic externalID;
@property(retain, nonatomic) NSString *UUID;
- (void)setDefaultAllDayAlarmOffset:(id)arg1;	// IMP=0x0000000000118828
- (id)defaultAllDayAlarmOffset;	// IMP=0x000000000011880c
@property(copy, nonatomic) NSNumber *defaultAlarmOffset; // @dynamic defaultAlarmOffset;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (void)setStrictestEventPrivateValueRaw:(int)arg1;	// IMP=0x0000000000118780
- (int)strictestEventPrivateValueRaw;	// IMP=0x0000000000118764
- (void)setPreferredEventPrivateValueRaw:(int)arg1;	// IMP=0x0000000000118748
- (int)preferredEventPrivateValueRaw;	// IMP=0x000000000011872c
@property(nonatomic) long long sourceType; // @dynamic sourceType;
- (int)entityType;	// IMP=0x00000000001186e6
- (id)propertyKeyForUniqueIdentifier;	// IMP=0x00000000001184d4
- (id)constraints;	// IMP=0x0000000000010e0b

// Remaining properties
@property(nonatomic) int preferredEventPrivateValue; // @dynamic preferredEventPrivateValue;
@property(nonatomic) int strictestEventPrivateValue; // @dynamic strictestEventPrivateValue;

@end
