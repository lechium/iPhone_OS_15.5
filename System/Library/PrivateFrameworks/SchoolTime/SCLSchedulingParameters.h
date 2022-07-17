//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SchoolTime/NSCopying-Protocol.h>
#import <SchoolTime/SCLSchedulingParameters-Protocol.h>

@class NSCalendar, NSDate, NSString, SCLScheduleSettings;

__attribute__((visibility("hidden")))
@interface SCLSchedulingParameters : NSObject <SCLSchedulingParameters, NSCopying>
{
    _Bool _suppressed;	// 8 = 0x8
    NSCalendar *_calendar;	// 16 = 0x10
    NSDate *_evaluationDate;	// 24 = 0x18
    SCLScheduleSettings *_scheduleSettings;	// 32 = 0x20
    unsigned long long _activationSetting;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000011673
@property(nonatomic) unsigned long long activationSetting; // @synthesize activationSetting=_activationSetting;
@property(nonatomic, getter=isSuppressed) _Bool suppressed; // @synthesize suppressed=_suppressed;
@property(copy, nonatomic) SCLScheduleSettings *scheduleSettings; // @synthesize scheduleSettings=_scheduleSettings;
@property(copy, nonatomic) NSDate *evaluationDate; // @synthesize evaluationDate=_evaluationDate;
@property(copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000114fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
