//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RDLaunchEvents, RTRoutineManager, SRSensorWriter;
@protocol OS_dispatch_queue;

@interface VisitCollector : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    RDLaunchEvents *_launchEvents;	// 16 = 0x10
    SRSensorWriter *_sensorWriter;	// 24 = 0x18
    RTRoutineManager *_rtManager;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x0020000000001434
- (void)launchEventRunActivity:(id)arg1;	// IMP=0x00200000000028bc
- (void)sensorWriterDidStopMonitoring:(id)arg1;	// IMP=0x00100000000027d4
- (void)sensorWriterWillStartMonitoring:(id)arg1;	// IMP=0x0010000000002713
- (void)writeVisitsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000021b4
- (double)visitsQueryWindowShift;	// IMP=0x0010000000001705
- (void)dealloc;	// IMP=0x00100000000015dc
- (id)initWithLaunchEvents:(id)arg1 sensorWriter:(id)arg2 routineManager:(id)arg3 q:(id)arg4;	// IMP=0x0010000000001528

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
