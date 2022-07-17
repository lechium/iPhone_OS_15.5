//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface APSWakeMetricTracker : NSObject
{
    _Bool _startedConnected;	// 8 = 0x8
    _Bool _didConnect;	// 9 = 0x9
    _Bool _hasReceivedStoredMessage;	// 10 = 0xa
    double _onConnectedInterval;	// 16 = 0x10
    double _onDisconnectedInterval;	// 24 = 0x18
    CDUnknownBlockType _metricSubmissionBlock;	// 32 = 0x20
    NSTimer *_metricSubmitTimer;	// 40 = 0x28
    unsigned long long _state;	// 48 = 0x30
    double _startTime;	// 56 = 0x38
    double _connectedTime;	// 64 = 0x40
    double _tentativeConnectedTime;	// 72 = 0x48
    double _lastSignificantTime;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000004021e
@property(nonatomic) _Bool hasReceivedStoredMessage; // @synthesize hasReceivedStoredMessage=_hasReceivedStoredMessage;
@property(nonatomic) double lastSignificantTime; // @synthesize lastSignificantTime=_lastSignificantTime;
@property(nonatomic) _Bool didConnect; // @synthesize didConnect=_didConnect;
@property(nonatomic) _Bool startedConnected; // @synthesize startedConnected=_startedConnected;
@property(nonatomic) double tentativeConnectedTime; // @synthesize tentativeConnectedTime=_tentativeConnectedTime;
@property(nonatomic) double connectedTime; // @synthesize connectedTime=_connectedTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSTimer *metricSubmitTimer; // @synthesize metricSubmitTimer=_metricSubmitTimer;
@property(copy, nonatomic) CDUnknownBlockType metricSubmissionBlock; // @synthesize metricSubmissionBlock=_metricSubmissionBlock;
@property(nonatomic) double onDisconnectedInterval; // @synthesize onDisconnectedInterval=_onDisconnectedInterval;
@property(nonatomic) double onConnectedInterval; // @synthesize onConnectedInterval=_onConnectedInterval;
- (void)_clearState;	// IMP=0x00100000000400d6
- (void)_fireMetricIfNeeded;	// IMP=0x001000000003ffac
- (void)_timerFired:(id)arg1;	// IMP=0x001000000003ff7b
- (void)noteReceivedLiveMessage;	// IMP=0x001000000003ff69
- (void)noteSystemWillSleep;	// IMP=0x001000000003ff57
- (void)noteReceivedStoredMessage;	// IMP=0x001000000003ff07
- (void)noteDidConnect;	// IMP=0x001000000003fe97
- (void)noteSystemDidFullWakeWhileConnected:(_Bool)arg1;	// IMP=0x001000000003fde2
- (id)initWithOnConnectedInterval:(double)arg1 onDisconnectedInterval:(double)arg2 metricSubmissionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000003fcdc
- (id)init;	// IMP=0x001000000003fb60

@end
