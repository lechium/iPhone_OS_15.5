//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDHeartDailyAnalytics, HDProfile, NSCalendar, NSDateInterval, NSUserDefaults;

@interface HDHeartDailyAnalyticsBuilder : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
    HDHeartDailyAnalytics *_heartDailyAnalytics;	// 16 = 0x10
    NSUserDefaults *_heartRateNotificationsUserDefaults;	// 24 = 0x18
    NSUserDefaults *_heartRhythmUserDefaults;	// 32 = 0x20
    NSUserDefaults *_remoteFeatureAvailabilityUserDefaults;	// 40 = 0x28
    _Bool _isHealthDataSubmissionAllowed;	// 48 = 0x30
    NSCalendar *_calendar;	// 56 = 0x38
    NSDateInterval *_dateInterval;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000002e275c
- (id)heartDailyAnalyticsWithError:(id *)arg1;	// IMP=0x00000000002dfc2c
- (id)initWithProfile:(id)arg1 calendar:(id)arg2 dateInterval:(id)arg3 heartRateNotificationsUserDefaults:(id)arg4 heartRhythmUserDefaults:(id)arg5 remoteFeatureAvailabilityUserDefaults:(id)arg6 isHealthDataSubmissionAllowed:(_Bool)arg7;	// IMP=0x00000000002dfb23

@end

