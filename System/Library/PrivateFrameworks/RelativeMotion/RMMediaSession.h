//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RMRelativeMotionManager;

@interface RMMediaSession : NSObject
{
    _Bool _sessionStartedWithTracking;	// 8 = 0x8
    RMRelativeMotionManager *_manager;	// 16 = 0x10
    double _sessionStartTimestamp;	// 24 = 0x18
    long long _clientMode;	// 32 = 0x20
}

+ (_Bool)_isClientModeAvailable:(long long)arg1;	// IMP=0x0000000000001d4e
+ (_Bool)isAvailable;	// IMP=0x0000000000001d35
- (void).cxx_destruct;	// IMP=0x0000000000002709
@property(nonatomic) long long clientMode; // @synthesize clientMode=_clientMode;
@property _Bool sessionStartedWithTracking; // @synthesize sessionStartedWithTracking=_sessionStartedWithTracking;
@property(nonatomic) double sessionStartTimestamp; // @synthesize sessionStartTimestamp=_sessionStartTimestamp;
@property(retain, nonatomic) RMRelativeMotionManager *manager; // @synthesize manager=_manager;
- (void)stopMonitoringAXHeadTrackingSetting;	// IMP=0x00000000000026aa
- (void)startMonitoringAXHeadTrackingSetting;	// IMP=0x00000000000026a4
- (_Bool)isAXHeadTrackingSettingEnabled;	// IMP=0x000000000000269c
- (long long)_currentAudioListenerPose:(id *)arg1;	// IMP=0x00000000000025d3
- (long long)_currentAudioListenerPose:(CDStruct_91d2e2b9 *)arg1 timestamp:(double *)arg2;	// IMP=0x0000000000002556
- (void)_resetTrackingForAllClients;	// IMP=0x000000000000246e
- (void)_stop;	// IMP=0x0000000000002189
- (_Bool)_start;	// IMP=0x0000000000002002
- (void)dealloc;	// IMP=0x0000000000001fc4
- (id)_initWithOptions:(id)arg1;	// IMP=0x0000000000001d8f
- (id)init;	// IMP=0x0000000000001d7b

@end
