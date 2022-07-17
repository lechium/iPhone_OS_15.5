//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDActiveSiriSessionInfoDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

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

+ (id)logCategory;	// IMP=0x0000000000528d9a
+ (id)siriSessionForUI;	// IMP=0x0000000000528d92
- (void).cxx_destruct;	// IMP=0x0000000000528d2a
@property(retain, nonatomic) NSObject<OS_xpc_object> *boostMessage; // @synthesize boostMessage=_boostMessage;
@property(nonatomic) _Bool isActivationPending; // @synthesize isActivationPending=_isActivationPending;
@property(retain, nonatomic) NSNumber *deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) HMDActiveSiriSessionInfo *activeSessionInfo; // @synthesize activeSessionInfo=_activeSessionInfo;
@property(nonatomic) __weak HMDSiriRemoteInputServer *server; // @synthesize server=_server;
@property(retain, nonatomic) HMDSiriStreamStartEvent *streamStartMetric; // @synthesize streamStartMetric=_streamStartMetric;
@property(readonly, nonatomic) HMDLogEventDispatcher *logEventDispatcher; // @synthesize logEventDispatcher=_logEventDispatcher;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_createArgsDictionaryWithError:(id)arg1;	// IMP=0x0000000000528b81
- (void)sendMsg:(const char *)arg1 args:(id)arg2;	// IMP=0x0000000000528a7d
- (_Bool)_startStream;	// IMP=0x00000000005289f2
- (void)maybeSubmitStreamStartMetricWithError:(id)arg1;	// IMP=0x0000000000528924
- (void)beginTrackingStreamStartMetricWithActivationType:(unsigned long long)arg1;	// IMP=0x00000000005286a8
- (void)stopStream;	// IMP=0x00000000005282e1
- (void)activeSiriSession:(id)arg1 didReceiveFirstPassMetadata:(id)arg2;	// IMP=0x00000000005282db
- (void)activeSiriSession:(id)arg1 didReceiveButtonUpWithDuration:(id)arg2;	// IMP=0x00000000005282d5
- (void)activeSiriSessionDidStop:(id)arg1;	// IMP=0x00000000005281c6
- (void)handleResetStream;	// IMP=0x00000000005280b7
- (void)handleStopStream;	// IMP=0x0000000000527f8e
- (void)handleStartStream;	// IMP=0x0000000000527d3f
- (void)publish;	// IMP=0x0000000000527bc6
- (void)invalidate;	// IMP=0x0000000000527aae
- (void)activeSiriSession:(id)arg1 didCreateAudioFrame:(id)arg2 sequenceNumber:(id)arg3 gain:(id)arg4;	// IMP=0x00000000005278af
- (void)setActiveBulkSendSession:(id)arg1;	// IMP=0x00000000005276b2
- (id)activeSessionToken;	// IMP=0x00000000005276a0
- (void)deactivate;	// IMP=0x000000000052769a
- (_Bool)activateAfterHubInitiation;	// IMP=0x000000000052759d
- (_Bool)activateWithAccessory:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000000527595
- (id)initWithIdentifier:(id)arg1 deviceType:(id)arg2;	// IMP=0x00000000005274fe
- (id)initWithIdentifier:(id)arg1 logEventDispatcher:(id)arg2 deviceType:(id)arg3;	// IMP=0x0000000000527424

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
