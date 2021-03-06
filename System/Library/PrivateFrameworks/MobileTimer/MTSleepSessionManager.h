//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTSleepSessionTrackerDelegate-Protocol.h>

@class HKHealthStore, MTAlarmStorage, NSString;
@protocol MTSleepSessionTracker, MTSleepSessionTrackerDelegate, NAScheduler;

@interface MTSleepSessionManager : NSObject <MTSleepSessionTrackerDelegate>
{
    id <NAScheduler> _serializer;	// 8 = 0x8
    MTAlarmStorage *_alarmStorage;	// 16 = 0x10
    HKHealthStore *_healthStore;	// 24 = 0x18
    NSString *_archivedSessionDataPath;	// 32 = 0x20
    NSString *_archivedSessionDataFile;	// 40 = 0x28
    id <MTSleepSessionTracker> _sleepSessionTracker;	// 48 = 0x30
    id <MTSleepSessionTrackerDelegate> _sleepSessionTrackerDelegate;	// 56 = 0x38
}

+ (id)sleepSampleWithInterval:(id)arg1 sampleType:(long long)arg2 metadata:(id)arg3;	// IMP=0x0000000000053c27
+ (id)platformSpecificSourceBundleIdentifier;	// IMP=0x0000000000051b78
- (void).cxx_destruct;	// IMP=0x00000000000540c4
@property(nonatomic) __weak id <MTSleepSessionTrackerDelegate> sleepSessionTrackerDelegate; // @synthesize sleepSessionTrackerDelegate=_sleepSessionTrackerDelegate;
@property(retain, nonatomic) id <MTSleepSessionTracker> sleepSessionTracker; // @synthesize sleepSessionTracker=_sleepSessionTracker;
@property(copy, nonatomic) NSString *archivedSessionDataFile; // @synthesize archivedSessionDataFile=_archivedSessionDataFile;
@property(copy, nonatomic) NSString *archivedSessionDataPath; // @synthesize archivedSessionDataPath=_archivedSessionDataPath;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) MTAlarmStorage *alarmStorage; // @synthesize alarmStorage=_alarmStorage;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
- (id)_writeSessions:(id)arg1;	// IMP=0x0000000000053684
- (id)_writeSessionData;	// IMP=0x0000000000053373
- (void)_removeSessionDataFile;	// IMP=0x0000000000053283
- (id)_unprocessedSessions;	// IMP=0x0000000000052ec5
- (_Bool)_hasUnprocessedSessions;	// IMP=0x0000000000052e48
- (void)deviceFirstUnlocked;	// IMP=0x0000000000052c26
- (void)waitForUnlock;	// IMP=0x0000000000052b3a
- (void)saveSessionData;	// IMP=0x0000000000052974
- (id)writeSession:(id)arg1;	// IMP=0x000000000005275c
- (void)archiveSession:(id)arg1;	// IMP=0x0000000000052277
- (void)sleepSessionTracker:(id)arg1 sessionDidComplete:(id)arg2;	// IMP=0x0000000000051b85
- (id)initWithAlarmStorage:(id)arg1 sleepCoordinator:(id)arg2 sleepSessionTracker:(id)arg3;	// IMP=0x00000000000517fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

