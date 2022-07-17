//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, UIColor;

@interface NTKReminderTimelineEntry
{
    _Bool _displayAsConflicting;	// 8 = 0x8
    NSDate *_dueDate;	// 16 = 0x10
    NSString *_primaryReminderTitle;	// 24 = 0x18
    NSString *_primaryReminderId;	// 32 = 0x20
    NSString *_secondaryReminderTitle;	// 40 = 0x28
    unsigned long long _overlappingReminderCount;	// 48 = 0x30
    UIColor *_primaryReminderParentListColor;	// 56 = 0x38
}

+ (id)loadingEntryForFamily:(long long)arg1;	// IMP=0x0000000000103a5b
+ (id)lockedEntryForFamily:(long long)arg1;	// IMP=0x0000000000103725
+ (id)_analogReminderImageProvider;	// IMP=0x00000000001033df
+ (id)_cornerReminderImageProvider;	// IMP=0x0000000000102b63
+ (id)_reminderImageCorner;	// IMP=0x00000000001028fc
+ (id)_reminderImageAnalog;	// IMP=0x0000000000102695
- (void).cxx_destruct;	// IMP=0x0000000000103ef1
@property(retain, nonatomic) UIColor *primaryReminderParentListColor; // @synthesize primaryReminderParentListColor=_primaryReminderParentListColor;
@property(nonatomic) unsigned long long overlappingReminderCount; // @synthesize overlappingReminderCount=_overlappingReminderCount;
@property(nonatomic) _Bool displayAsConflicting; // @synthesize displayAsConflicting=_displayAsConflicting;
@property(retain, nonatomic) NSString *secondaryReminderTitle; // @synthesize secondaryReminderTitle=_secondaryReminderTitle;
@property(retain, nonatomic) NSString *primaryReminderId; // @synthesize primaryReminderId=_primaryReminderId;
@property(retain, nonatomic) NSString *primaryReminderTitle; // @synthesize primaryReminderTitle=_primaryReminderTitle;
@property(retain, nonatomic) NSDate *dueDate; // @synthesize dueDate=_dueDate;
- (id)_createLargeUtilityTemplate;	// IMP=0x00000000001031c6
- (id)_createLargeModularTemplate;	// IMP=0x000000000010300f
- (id)_createSignatureCornerTemplate;	// IMP=0x0000000000102e79
- (id)templateForComplicationFamily:(long long)arg1;	// IMP=0x000000000010263e
- (id)description;	// IMP=0x00000000001024e8

@end
