//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDActiveSiriSessionInfoDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDActiveSiriSessionInfo, HMDLogEventDispatcher, HMDSiriRemoteInputServer, HMDSiriStreamStartEvent, NSNumber, NSString;
@protocol OS_os_log, OS_xpc_object;

@interface HMDSiriSession : NSObject <HMDActiveSiriSessionInfoDelegate, HMFLogging>
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    _Bool _isActivationPending;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    HMDLogEventDispatcher *_logEventDispatcher;	// 32 = 0x20
    HMDSiriStreamStartEvent *_streamStartMetric;	// 40 = 0x28
    HMDSiriRemoteInputServer *_server;	// 48 = 0x30
    HMDActiveSiriSessionInfo *_activeSessionInfo;	// 56 = 0x38
    NSNumber *_deviceType;	// 64 = 0x40
    NSObject<OS_xpc_object> *_boostMessage;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x00000000004d6c66
+ (id)siriSessionForUI;	// IMP=0x00000000004d6c5e
- (void).cxx_destruct;	// IMP=0x00000000004d6bf6
@property(retain, nonatomic) NSObject<OS_xpc_object> *boostMessage; // @synthesize boostMessage=_boostMessage;
@property(nonatomic) _Bool isActivationPending; // @synthesize isActivationPending=_isActivationPending;
@property(retain, nonatomic) NSNumber *deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) HMDActiveSiriSessionInfo *activeSessionInfo; // @synthesize activeSessionInfo=_activeSessionInfo;
@property(nonatomic) __weak HMDSiriRemoteInputServer *server; // @synthesize server=_server;
@property(retain, nonatomic) HMDSiriStreamStartEvent *streamStartMetric; // @synthesize streamStartMetric=_streamStartMetric;
@property(readonly, nonatomic) HMDLogEventDispatcher *logEventDispatcher; // @synthesize logEventDispatcher=_logEventDispatcher;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_createArgsDictionaryWithError:(id)arg1;	// IMP=0x00000000004d6a4d
- (void)sendMsg:(const char *)arg1 args:(id)arg2;	// IMP=0x00000000004d6949
- (_Bool)_startStream;	// IMP=0x00000000004d68be
- (void)maybeSubmitStreamStartMetricWithError:(id)arg1;	// IMP=0x00000000004d67f0
- (void)beginTrackingStreamStartMetricWithActivationType:(unsigned long long)arg1;	// IMP=0x00000000004d6574
- (void)stopStream;	// IMP=0x00000000004d61ad
- (void)activeSiriSession:(id)arg1 didReceiveFirstPassMetadata:(id)arg2;	// IMP=0x00000000004d61a7
- (void)activeSiriSession:(id)arg1 didReceiveButtonUpWithDuration:(id)arg2;	// IMP=0x00000000004d61a1
- (void)activeSiriSessionDidStop:(id)arg1;	// IMP=0x00000000004d6092
- (void)handleResetStream;	// IMP=0x00000000004d5f83
- (void)handleStopStream;	// IMP=0x00000000004d5e5a
- (void)handleStartStream;	// IMP=0x00000000004d5c0b
- (void)publish;	// IMP=0x00000000004d5a92
- (void)invalidate;	// IMP=0x00000000004d597a
- (void)activeSiriSession:(id)arg1 didCreateAudioFrame:(id)arg2 sequenceNumber:(id)arg3 gain:(id)arg4;	// IMP=0x00000000004d577b
- (void)setActiveBulkSendSession:(id)arg1;	// IMP=0x00000000004d557e
- (id)activeSessionToken;	// IMP=0x00000000004d556c
- (void)deactivate;	// IMP=0x00000000004d5566
- (_Bool)activateAfterHubInitiation;	// IMP=0x00000000004d5469
- (_Bool)activateWithAccessory:(id)arg1 metadata:(id)arg2;	// IMP=0x00000000004d5461
- (id)initWithIdentifier:(id)arg1 deviceType:(id)arg2;	// IMP=0x00000000004d53ca
- (id)initWithIdentifier:(id)arg1 logEventDispatcher:(id)arg2 deviceType:(id)arg3;	// IMP=0x00000000004d52f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

