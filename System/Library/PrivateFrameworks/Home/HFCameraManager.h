//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFAccessoryObserver-Protocol.h>
#import <Home/HFCameraObserver-Protocol.h>
#import <Home/HFExecutionEnvironmentObserver-Protocol.h>

@class HFExecutionEnvironment, HMCameraProfile, NSDate, NSError, NSMapTable, NSString;
@protocol NACancelable;

@interface HFCameraManager : NSObject <HFAccessoryObserver, HFCameraObserver, HFExecutionEnvironmentObserver>
{
    _Bool _isRegisteredForEvents;	// 8 = 0x8
    NSError *_cachedStreamError;	// 16 = 0x10
    HMCameraProfile *_cameraProfile;	// 24 = 0x18
    NSMapTable *_snapshotRequesters;	// 32 = 0x20
    NSMapTable *_streamRequesters;	// 40 = 0x28
    id <NACancelable> _nextSnapshotEvent;	// 48 = 0x30
    NSDate *_snapshotErrorDate;	// 56 = 0x38
    unsigned long long _snapshotErrorCount;	// 64 = 0x40
    HFExecutionEnvironment *_executionEnvironment;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001fa578
@property(retain, nonatomic) HFExecutionEnvironment *executionEnvironment; // @synthesize executionEnvironment=_executionEnvironment;
@property(nonatomic) unsigned long long snapshotErrorCount; // @synthesize snapshotErrorCount=_snapshotErrorCount;
@property(retain, nonatomic) NSDate *snapshotErrorDate; // @synthesize snapshotErrorDate=_snapshotErrorDate;
@property(retain, nonatomic) id <NACancelable> nextSnapshotEvent; // @synthesize nextSnapshotEvent=_nextSnapshotEvent;
@property(nonatomic) _Bool isRegisteredForEvents; // @synthesize isRegisteredForEvents=_isRegisteredForEvents;
@property(readonly, nonatomic) NSMapTable *streamRequesters; // @synthesize streamRequesters=_streamRequesters;
@property(readonly, nonatomic) NSMapTable *snapshotRequesters; // @synthesize snapshotRequesters=_snapshotRequesters;
@property(readonly, nonatomic) __weak HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
@property(retain, nonatomic) NSError *cachedStreamError; // @synthesize cachedStreamError=_cachedStreamError;
- (_Bool)_hasStreamRequesters;	// IMP=0x00000000001fa485
- (_Bool)_hasSnapshotRequesters;	// IMP=0x00000000001fa43d
- (void)executionEnvironmentDidBecomeVisible:(id)arg1;	// IMP=0x00000000001fa26a
- (void)executionEnvironmentDidBecomeOccluded:(id)arg1;	// IMP=0x00000000001fa258
- (void)executionEnvironmentDidBecomeActive:(id)arg1;	// IMP=0x00000000001fa228
- (void)executionEnvironmentWillResignActive:(id)arg1;	// IMP=0x00000000001fa216
- (void)accessoryDidUpdateReachability:(id)arg1;	// IMP=0x00000000001fa153
- (void)_updateEventRegistration;	// IMP=0x00000000001f9f75
- (void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2;	// IMP=0x00000000001f9e3e
- (void)cameraStreamControlDidStartStream:(id)arg1;	// IMP=0x00000000001f9d8a
- (void)cameraUserSettingsDidUpdate:(id)arg1;	// IMP=0x00000000001f9d84
- (void)_dispatchStreamStateUpdate;	// IMP=0x00000000001f9ad3
- (void)_stopStreaming;	// IMP=0x00000000001f98fd
- (void)_startStreaming;	// IMP=0x00000000001f9705
- (void)_endContinuousStreaming;	// IMP=0x00000000001f960c
- (void)_beginContinuousStreaming;	// IMP=0x00000000001f9513
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1;	// IMP=0x00000000001f9471
- (void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3;	// IMP=0x00000000001f93bd
- (double)_snapshotTimeInterval;	// IMP=0x00000000001f9342
- (void)_cancelNextSnapshotEvent;	// IMP=0x00000000001f9214
- (void)_scheduleNextSnapshotEventWithPreviousError:(id)arg1;	// IMP=0x00000000001f89b6
- (id)_nextSnapshotDate;	// IMP=0x00000000001f87cf
- (void)_endPeriodicSnapshots;	// IMP=0x00000000001f86d6
- (void)_beginPeriodicSnapshots;	// IMP=0x00000000001f85db
@property(readonly, nonatomic, getter=isContinuousStreamingEnabled) _Bool continuousStreamingEnabled;
- (void)endContinuousStreamingWithRequester:(id)arg1;	// IMP=0x00000000001f847c
- (void)beginContinuousStreamingWithRequester:(id)arg1;	// IMP=0x00000000001f8270
@property(readonly, nonatomic, getter=arePeriodicSnapshotsEnabled) _Bool periodicSnapshotsEnabled;
- (void)endPeriodicSnapshotsWithRequester:(id)arg1;	// IMP=0x00000000001f8111
- (void)beginPeriodicSnapshotsWithRequester:(id)arg1;	// IMP=0x00000000001f7f05
- (void)dealloc;	// IMP=0x00000000001f7e9a
- (id)initWithCameraProfile:(id)arg1;	// IMP=0x00000000001f7d99

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

