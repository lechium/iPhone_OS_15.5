//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSString, SAReminderListObject, SAReminderRecurrence, SAReminderTrigger;
@protocol SAReminderPayload;

@interface SAReminderObject
{
}

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000015548
+ (id)object;	// IMP=0x0000000000015536
@property(retain, nonatomic) SAReminderTrigger *trigger;
@property(retain, nonatomic) SAReminderListObject *toList;
@property(copy, nonatomic) NSString *subject;
@property(retain, nonatomic) SAReminderRecurrence *recurrence;
@property(retain, nonatomic) id <SAReminderPayload> payload;
@property(copy, nonatomic) NSArray *lists;
@property(nonatomic) _Bool important;
@property(copy, nonatomic) NSString *dueDateTimeZoneId;
@property(copy, nonatomic) NSDate *dueDate;
@property(nonatomic) _Bool completed;
@property(copy, nonatomic) NSString *alternateSubject;
- (id)encodedClassName;	// IMP=0x0000000000015529
- (id)groupIdentifier;	// IMP=0x0000000000015515

@end
