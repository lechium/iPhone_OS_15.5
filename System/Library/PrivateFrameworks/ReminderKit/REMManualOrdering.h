//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString, REMObjectID;

@interface REMManualOrdering : NSObject <NSCopying, NSSecureCoding>
{
    REMObjectID *_objectID;	// 8 = 0x8
    NSString *_listID;	// 16 = 0x10
    NSArray *_topLevelReminderIDs;	// 24 = 0x18
    NSDictionary *_subtaskIDsByTopLevelReminderID;	// 32 = 0x20
    REMObjectID *_uncommitedRemindersAccountID;	// 40 = 0x28
    NSDate *_modifiedDate;	// 48 = 0x30
}

+ (id)cdEntityName;	// IMP=0x000000000008f425
+ (id)objectIDWithUUID:(id)arg1;	// IMP=0x000000000008f398
+ (id)newObjectID;	// IMP=0x000000000008f336
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008ee9c
- (void).cxx_destruct;	// IMP=0x000000000008f9f1
@property(retain, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(retain, nonatomic) REMObjectID *uncommitedRemindersAccountID; // @synthesize uncommitedRemindersAccountID=_uncommitedRemindersAccountID;
@property(retain, nonatomic) NSDictionary *subtaskIDsByTopLevelReminderID; // @synthesize subtaskIDsByTopLevelReminderID=_subtaskIDsByTopLevelReminderID;
@property(retain, nonatomic) NSArray *topLevelReminderIDs; // @synthesize topLevelReminderIDs=_topLevelReminderIDs;
@property(copy, nonatomic) NSString *listID; // @synthesize listID=_listID;
@property(retain, nonatomic) REMObjectID *objectID; // @synthesize objectID=_objectID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008f432
- (id)remObjectID;	// IMP=0x000000000008f324
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008f024
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008eea4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008ed0b
- (id)changedKeys;	// IMP=0x000000000008ec63
- (id)initWithObjectID:(id)arg1 listID:(id)arg2;	// IMP=0x000000000008ebb8
- (id)initWithObjectID:(id)arg1 listID:(id)arg2 topLevelReminderIDs:(id)arg3 subtaskIDsByTopLevelReminderID:(id)arg4 uncommitedRemindersAccountID:(id)arg5 modifiedDate:(id)arg6;	// IMP=0x000000000008ea90

@end

