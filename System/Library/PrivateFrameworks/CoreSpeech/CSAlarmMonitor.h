//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAlarmMonitor
{
    long long _alarmFiringState;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000009670
- (void).cxx_destruct;	// IMP=0x0000000000009976
- (long long)alarmState;	// IMP=0x00000000000098c2
- (void)_stopMonitoring;	// IMP=0x000000000000980b
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0000000000009739
- (void)initializeAlarmState;	// IMP=0x0000000000009733
- (id)init;	// IMP=0x00000000000096c5

@end

