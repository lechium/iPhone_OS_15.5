//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthMenstrualCyclesDaemon/HDMCAnalysisManagerObserver-Protocol.h>
#import <HealthMenstrualCyclesDaemon/HKMCSettingsManagerObserver-Protocol.h>

@class HDKeyValueDomain, HDMCAnalysisManager, HDPrimaryProfile, HDRestorableAlarm, HKMCAnalysis, HKMCSettingsManager, NSDate, NSString;
@protocol OS_dispatch_queue;

@interface HDMCNotificationManager : NSObject <HDMCAnalysisManagerObserver, HKMCSettingsManagerObserver>
{
    HDPrimaryProfile *_profile;	// 8 = 0x8
    HDMCAnalysisManager *_analysisManager;	// 16 = 0x10
    HKMCSettingsManager *_settingsManager;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    HDKeyValueDomain *_keyValueDomain;	// 40 = 0x28
    HKMCAnalysis *_lastAnalysis;	// 48 = 0x30
    NSDate *_currentDateOverride;	// 56 = 0x38
    HDRestorableAlarm *_scheduler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000e07f
@property(readonly, nonatomic) HDRestorableAlarm *scheduler; // @synthesize scheduler=_scheduler;
- (void)_queue_removeAllScheduledNotificationsIfNotEnabled;	// IMP=0x000000000000dde1
- (void)_queue_rescheduleNotificationsForAnalysis:(id)arg1;	// IMP=0x000000000000cf47
- (void)_queue_alarm:(id)arg1 didReceiveDueEvents:(id)arg2;	// IMP=0x000000000000b9a2
- (void)settingsManagerDidUpdateNotificationSettings:(id)arg1;	// IMP=0x000000000000b67b
- (void)analysisManager:(id)arg1 didUpdateAnalysis:(id)arg2;	// IMP=0x000000000000b431
- (id)_currentDate;	// IMP=0x000000000000b3f7
- (void)_setCurrentDate:(id)arg1;	// IMP=0x000000000000b3e6
- (id)scheduledNotificationsWithError:(id *)arg1;	// IMP=0x000000000000b2e0
- (void)invalidate;	// IMP=0x000000000000b291
- (void)start;	// IMP=0x000000000000b0d6
- (id)initWithProfile:(id)arg1 analysisManager:(id)arg2 settingsManager:(id)arg3;	// IMP=0x000000000000af4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
