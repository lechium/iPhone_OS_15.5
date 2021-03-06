//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SCLRecurrenceSchedule;

@interface SCLSettingsViewModel : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    unsigned long long _scheduleType;	// 16 = 0x10
    long long _repeatSchedule;	// 24 = 0x18
    NSArray *_timeIntervals;	// 32 = 0x20
    SCLRecurrenceSchedule *_customSchedule;	// 40 = 0x28
    NSArray *_historyItems;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000f1d3
@property(copy, nonatomic) NSArray *historyItems; // @synthesize historyItems=_historyItems;
@property(copy, nonatomic) SCLRecurrenceSchedule *customSchedule; // @synthesize customSchedule=_customSchedule;
@property(copy, nonatomic) NSArray *timeIntervals; // @synthesize timeIntervals=_timeIntervals;
@property(nonatomic) long long repeatSchedule; // @synthesize repeatSchedule=_repeatSchedule;
@property(nonatomic) unsigned long long scheduleType; // @synthesize scheduleType=_scheduleType;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (id)init;	// IMP=0x000000000000f0bc

@end

