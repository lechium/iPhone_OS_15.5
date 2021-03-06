//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/RTCPReportProvider-Protocol.h>
#import <AVConference/VCConnectionChangedHandler-Protocol.h>
#import <AVConference/VCMediaStreamProtocol-Protocol.h>
#import <AVConference/VCSecurityEventHandler-Protocol.h>

@class AVCBasebandCongestionDetector, AVCRateControlFeedbackController, AVCStatisticsCollector, NSArray, NSError, NSMutableArray, NSObject, NSString, VCCallInfoBlob, VCDatagramChannelIDS, VCMediaKeyIndex, VCMediaStreamConfig, VCMediaStreamTransport, VCNetworkFeedbackController, VCTransportSession, VCWeakObjectHolder;
@protocol OS_dispatch_queue, OS_dispatch_source, RTCPReportProvider, VCMediaStreamDelegate, VCMediaStreamNotification, VCMomentsCollectorDelegate;

__attribute__((visibility("hidden")))
@interface VCMediaStream <VCMediaStreamProtocol, RTCPReportProvider, VCSecurityEventHandler, VCConnectionChangedHandler>
{
    NSObject<OS_dispatch_queue> *_delegateNotificationQueue;	// 16 = 0x10
    struct _opaque_pthread_mutex_t _streamLock;	// 24 = 0x18
    VCDatagramChannelIDS *_datagramChannel;	// 88 = 0x58
    NSString *_idsDestination;	// 96 = 0x60
    id <VCMediaStreamDelegate> _delegate;	// 104 = 0x68
    id <VCMomentsCollectorDelegate> _momentsCollectorDelegate;	// 112 = 0x70
    NSString *_callID;	// 120 = 0x78
    _Bool _isSRTPInitialized;	// 128 = 0x80
    _Bool _useRandomTS;	// 129 = 0x81
    _Bool _isReportingAgentOwner;	// 130 = 0x82
    double _rtpTimeoutEnabledTime;	// 136 = 0x88
    double _rtcpTimeoutEnabledTime;	// 144 = 0x90
    double _decryptionTimeoutEnabledTime;	// 152 = 0x98
    NSObject<OS_dispatch_source> *_rtcpSendHeartbeat;	// 160 = 0xa0
    NSObject<OS_dispatch_source> *_timeoutHeartbeat;	// 168 = 0xa8
    double _lastRTPTimeoutReportTime;	// 176 = 0xb0
    double _lastRTCPTimeoutReportTime;	// 184 = 0xb8
    double _lastDecryptionTimeoutReportTime;	// 192 = 0xc0
    double _lastDecryptionMKMRecoveryTime;	// 200 = 0xc8
    double _decryptionErrorStartTime;	// 208 = 0xd0
    unsigned int _localSSRC;	// 216 = 0xd8
    unsigned int _transportSessionID;	// 220 = 0xdc
    int _clientPID;	// 224 = 0xe0
    VCWeakObjectHolder *_notificationDelegate;	// 232 = 0xe8
    VCWeakObjectHolder *_rtcpReportProvider;	// 240 = 0xf0
    int _operatingMode;	// 248 = 0xf8
    struct _VCMediaStreamTransportSetupInfo _transportSetupInfo;	// 256 = 0x100
    NSMutableArray *_transportArray;	// 360 = 0x168
    CDUnknownFunctionPointerType _vcMediaCallback;	// 368 = 0x170
    struct tagVCMediaQueue *_mediaQueue;	// 376 = 0x178
    VCMediaKeyIndex *_lastReceivedMKI;	// 384 = 0x180
    VCCallInfoBlob *_remoteEndpointInfo;	// 392 = 0x188
    VCTransportSession *_transportSession;	// 400 = 0x190
    NSError *_cachedError;	// 408 = 0x198
    CDUnknownFunctionPointerType _notificationHandler;	// 416 = 0x1a0
    CDUnknownFunctionPointerType _packetEventHandler;	// 424 = 0x1a8
    struct tagVCNWConnectionMonitor *_nwMonitor;	// 432 = 0x1b0
    long long _streamToken;	// 440 = 0x1b8
    void *_mediaControlInfoGenerator;	// 448 = 0x1c0
    void *_oneToOneControlInfoGenerator;	// 456 = 0x1c8
    unsigned int _mediaControlInfoGeneratorType;	// 464 = 0x1d0
    AVCRateControlFeedbackController *_feedbackController;	// 472 = 0x1d8
    AVCRateControlFeedbackController *_oneToOneFeedbackController;	// 480 = 0x1e0
    _Bool _mediaControlInfoCallbacksRegistered;	// 488 = 0x1e8
    CDUnknownFunctionPointerType _statisticsHandler;	// 496 = 0x1f0
    VCNetworkFeedbackController *_networkFeedbackController;	// 504 = 0x1f8
    _Bool _isWRMinitialized;	// 512 = 0x200
    NSArray *_compoundStreamIDs;	// 520 = 0x208
    _Bool _isNWMonitorSignalEnabled;	// 528 = 0x210
    _Bool _isRTTBasedFIRThrottlingEnabled;	// 529 = 0x211
    _Bool _areStatisticsRegistered;	// 530 = 0x212
    AVCStatisticsCollector *_statisticsCollector;	// 536 = 0x218
    int _nwMonitorHandlerIndex;	// 544 = 0x220
    int _rttMonitorHandlerIndex;	// 548 = 0x224
    int _state;	// 552 = 0x228
    AVCBasebandCongestionDetector *_basebandCongestionDetector;	// 560 = 0x230
}

+ (_Bool)isSameSRTPKey:(id)arg1 newKey:(id)arg2;	// IMP=0x000000000023ee08
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) VCNetworkFeedbackController *networkFeedbackController; // @synthesize networkFeedbackController=_networkFeedbackController;
@property(copy) NSArray *compoundStreamIDs; // @synthesize compoundStreamIDs=_compoundStreamIDs;
@property(retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // @synthesize basebandCongestionDetector=_basebandCongestionDetector;
@property(readonly, nonatomic) NSArray *transportArray; // @synthesize transportArray=_transportArray;
@property(readonly, nonatomic) unsigned int mediaControlInfoGeneratorType; // @synthesize mediaControlInfoGeneratorType=_mediaControlInfoGeneratorType;
@property(readonly, nonatomic) void *mediaControlInfoGenerator; // @synthesize mediaControlInfoGenerator=_mediaControlInfoGenerator;
@property(readonly, retain, nonatomic) AVCRateControlFeedbackController *feedbackController; // @synthesize feedbackController=_feedbackController;
@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
@property(nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property(nonatomic) struct tagVCMediaQueue *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property(readonly, nonatomic) unsigned int localSSRC; // @synthesize localSSRC=_localSSRC;
- (int)handleMediaCallbackNotification:(int)arg1 inData:(void *)arg2 outData:(void *)arg3;	// IMP=0x000000000024df1b
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x000000000024deba
- (void)collectTxChannelMetrics:(CDStruct_4c7d81d2 *)arg1;	// IMP=0x000000000024de59
- (void)collectRxChannelMetrics:(CDStruct_4c7d81d2 *)arg1;	// IMP=0x000000000024ddf8
- (void)collectRxChannelMetrics:(CDStruct_4c7d81d2 *)arg1 interval:(float)arg2;	// IMP=0x000000000024dd97
@property(readonly, nonatomic) double rtcpHeartbeatLeeway;
@property(readonly, nonatomic) double lastReceivedRTCPPacketTime;
@property(readonly, nonatomic) double lastReceivedRTPPacketTime;
- (void)onRTCPTimeout;	// IMP=0x000000000024dc13
- (void)onRTPTimeout;	// IMP=0x000000000024dbb2
- (void)onSendRTCPPacket;	// IMP=0x000000000024db51
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000024daf0
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000024da8f
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000024da2e
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000024d9cd
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000024d96c
- (id)supportedPayloads;	// IMP=0x000000000024d90b
- (void)onCallIDChanged;	// IMP=0x000000000024d8aa
@property(nonatomic) id <VCMediaStreamNotification> notificationDelegate;
- (void)stopTimeoutHeartbeat;	// IMP=0x000000000024d42c
- (void)startTimeoutHeartbeat;	// IMP=0x000000000024ca79
- (void)timeoutHeartbeat;	// IMP=0x000000000024c633
- (void)checkForDecryptionTimeout;	// IMP=0x000000000024c58d
- (void)checkDecryptionTimeoutForMKMRecoveryAgainstTime:(double)arg1 decryptionErrorStartTime:(double)arg2;	// IMP=0x000000000024c334
- (void)checkDecryptionTimeoutAgainstTime:(double)arg1 decryptionErrorStartTime:(double)arg2;	// IMP=0x000000000024c0ab
- (void)checkRTCPPacketTimeoutAgainstTime:(double)arg1 lastReceivedPacketTime:(double)arg2;	// IMP=0x000000000024be05
- (void)checkRTPPacketTimeoutAgainstTime:(double)arg1 lastReceivedPacketTime:(double)arg2;	// IMP=0x000000000024bb5f
- (double)computeNextTimoutWithEnabledTime:(double)arg1 timeoutInterval:(double)arg2 lastReceivedPacketTime:(double)arg3 currentTime:(double)arg4 lastTimeoutReportTime:(double)arg5;	// IMP=0x000000000024badd
- (void)resetTimeoutHeartbeatWithRTPTimeout:(double)arg1 rtcpTimeout:(double)arg2 decryptionTimeout:(double)arg3 currentTime:(double)arg4;	// IMP=0x000000000024b802
- (void)resetTimeoutHeartbeatTimer:(unsigned long long)arg1;	// IMP=0x000000000024b7d9
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;	// IMP=0x000000000024b778
- (void)destroyNWMonitorInternal;	// IMP=0x000000000024b74c
- (void)destroyNWMonitor;	// IMP=0x000000000024b6b3
- (void)createNWMonitor;	// IMP=0x000000000024b5d7
- (void)stopRTCPSendHeartbeat;	// IMP=0x000000000024b3f0
- (void)startRTCPSendHeartbeat;	// IMP=0x000000000024ac41
- (void)rtcpSendHeartbeat;	// IMP=0x000000000024a93a
- (void)resetRTCPSendHeartbeatTimer:(unsigned long long)arg1;	// IMP=0x000000000024a86e
- (unsigned int)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1;	// IMP=0x000000000024a83f
- (unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1;	// IMP=0x000000000024a810
- (_Bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;	// IMP=0x000000000024a478
@property(nonatomic) id <RTCPReportProvider> rtcpReportProvider;
- (void)setRtcpSendInterval:(double)arg1;	// IMP=0x0000000000249eda
- (void)setDecryptionTimeOutInterval:(double)arg1;	// IMP=0x0000000000249bf1
- (void)setRtcpTimeOutInterval:(double)arg1;	// IMP=0x0000000000249908
- (void)setRtpTimeOutInterval:(double)arg1;	// IMP=0x000000000024961f
- (void)setDecryptionTimeOutEnabled:(_Bool)arg1;	// IMP=0x000000000024933b
- (void)setRtcpTimeOutEnabled:(_Bool)arg1;	// IMP=0x0000000000249057
- (void)setRtpTimeOutEnabled:(_Bool)arg1;	// IMP=0x0000000000248d73
- (void)processDecryptionTimeoutSettingChange;	// IMP=0x0000000000248d1d
- (void)processRTCPTimeoutSettingChange;	// IMP=0x0000000000248cc7
- (void)processRTPTimeoutSettingChange;	// IMP=0x0000000000248c71
- (_Bool)isRTCPSendEnabled;	// IMP=0x0000000000248c46
- (_Bool)isDecryptionTimeoutEnabled;	// IMP=0x0000000000248c1b
- (_Bool)isRTCPTimeoutEnabled;	// IMP=0x0000000000248bf0
- (_Bool)isRTPTimeoutEnabled;	// IMP=0x0000000000248bc5
- (void)setRtcpEnabled:(_Bool)arg1;	// IMP=0x000000000024893a
- (void)sendControlPacketWithParameters:(struct _RTCP_SEND_CONTROL_PARAMETERS *)arg1;	// IMP=0x00000000002487e3
- (long long)streamDirection;	// IMP=0x0000000000248671
- (void)setStreamDirection:(long long)arg1;	// IMP=0x00000000002483f9
- (id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id *)arg3;	// IMP=0x00000000002480c0
- (void)setPause:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002479c3
- (id)getInvalidParamErrorForSetPause:(_Bool)arg1 didSucceed:(_Bool)arg2;	// IMP=0x00000000002475a7
- (id)setPause:(_Bool)arg1;	// IMP=0x000000000024721f
- (void)stopInternalWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000246755
- (id)stop;	// IMP=0x000000000024622b
- (void)stopMediaTransports;	// IMP=0x0000000000246127
- (_Bool)startMediaTransportsWithError:(id *)arg1;	// IMP=0x0000000000245f7a
- (void)notifyDelegateDidReceiveRTCPPackets:(struct _RTCPPacketList *)arg1;	// IMP=0x0000000000245ddc
- (void)handleStartDidSucceed:(_Bool)arg1 withError:(id)arg2;	// IMP=0x0000000000245d4f
- (void)willExitState:(int)arg1 newState:(int)arg2;	// IMP=0x0000000000245d49
- (void)didEnterState:(int)arg1 oldState:(int)arg2;	// IMP=0x0000000000245d43
- (void)setState:(int)arg1;	// IMP=0x0000000000245a90
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000024518a
- (id)start;	// IMP=0x0000000000244e26
- (_Bool)setStreamConfig:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000244575
- (_Bool)updateRemoteAddressWithConfig:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000244251
- (void)didEncryptionKeyRollTimeout;	// IMP=0x000000000024424b
- (void)resetDecryptionTimeout;	// IMP=0x0000000000244088
- (_Bool)handleEncryptionInfoChange:(id)arg1;	// IMP=0x0000000000243a39
- (void)unregisterMediaControlInfoGenerator;	// IMP=0x00000000002437f1
- (void)registerCallbacksForMediaControlInfoGenerator:(void *)arg1 forDirection:(long long)arg2 options:(unsigned int)arg3;	// IMP=0x00000000002433e2
- (void)createLocalMediaControlInfoGeneratorWithType:(unsigned int)arg1 version:(unsigned char)arg2;	// IMP=0x0000000000243279
- (id)getMediaStreamConfigForControlInfoGenerator:(id)arg1;	// IMP=0x0000000000243112
- (void)registerMediaControlInfoGeneratorWithConfigs:(id)arg1;	// IMP=0x0000000000242994
- (void)unregisterWRMCallback;	// IMP=0x0000000000242910
- (void)initializeWRMUsingRtpHandle:(struct tagHANDLE *)arg1;	// IMP=0x0000000000242845
- (void)registerStatistics:(id)arg1;	// IMP=0x0000000000242771
- (int)registerStatisticsHandler:(id)arg1 statisticType:(int)arg2;	// IMP=0x0000000000242594
- (void)unregisterStatistics;	// IMP=0x0000000000242521
- (id)createTransportWithStreamConfig:(id)arg1 ssrc:(unsigned int)arg2;	// IMP=0x00000000002421d0
- (struct tagHANDLE *)createRTPHandleWithStreamConfig:(id)arg1 payloadType:(int)arg2 localSSRC:(unsigned int)arg3;	// IMP=0x0000000000241d5c
- (char *)streamStateToString:(int)arg1;	// IMP=0x0000000000241d39
- (void)unlock;	// IMP=0x0000000000241d28
- (void)lock;	// IMP=0x0000000000241d17
- (void)dealloc;	// IMP=0x00000000002419fa
- (void)setupMediaStream;	// IMP=0x00000000002416a4
- (id)initWithTransportSessionID:(unsigned int)arg1 localSSRC:(unsigned int)arg2;	// IMP=0x0000000000241611
- (id)initWithTransportSessionID:(unsigned int)arg1;	// IMP=0x0000000000241581
- (id)init;	// IMP=0x00000000002414d2
- (id)setupRTPWithIPInfo:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002412c2
- (_Bool)initializeTransportSetupInfoWithIDSDestination:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000240dff
- (_Bool)initializeTransportSessionWithIDSDestination:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000240d92
- (id)setupRTPWithIDSDestination:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000240b8a
- (id)setupRTPForIDS;	// IMP=0x000000000024097e
- (id)setupRTPWithLocalParticipantInfo:(id)arg1 error:(id *)arg2;	// IMP=0x000000000024080c
- (void)setupCallbacksWithNWConnectionMonitor:(struct tagVCNWConnectionMonitor *)arg1;	// IMP=0x000000000024076f
- (_Bool)setupNWConnectionWithID:(id)arg1;	// IMP=0x0000000000240076
- (void)dupNWConnectionBackingSocket:(int *)arg1;	// IMP=0x000000000023fea4
- (id)setupRTPWithNWConnectionID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000023fbdf
- (_Bool)initializeTransportSessionWithNWConnectionID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000023faa7
- (void)cleanupNWConnection:(id *)arg1;	// IMP=0x000000000023fa6c
- (void)initializeTransportSetupInfoWithRTPSocket:(int)arg1 RTCPSocket:(int)arg2;	// IMP=0x000000000023f94a
- (void)initializeTransportSetupInfoWithSocketDictionary:(id)arg1;	// IMP=0x000000000023f8db
- (_Bool)initializeTransportSessionWithSocketDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000023f87f
- (void)handleTransportSessionEvent:(unsigned int)arg1 info:(id)arg2;	// IMP=0x000000000023f70a
- (_Bool)initializeTransportSetupInfoWithTransportSession:(id *)arg1;	// IMP=0x000000000023f503
- (id)setupRTPWithSocketDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000023f36c
- (void)decryptionStatusChanged:(_Bool)arg1;	// IMP=0x000000000023f1b5
@property(readonly, nonatomic) _Bool isSendingMedia;
@property(readonly, nonatomic) VCMediaStreamConfig *oneToOneStreamConfig;
@property(readonly, nonatomic) VCMediaStreamConfig *defaultStreamConfig;
@property(readonly, nonatomic) VCMediaStreamTransport *defaultTransport;
@property(nonatomic) id <VCMomentsCollectorDelegate> momentsCollectorDelegate; // @synthesize momentsCollectorDelegate=_momentsCollectorDelegate;
@property(nonatomic) id <VCMediaStreamDelegate> delegate;
- (id)copyDelegate;	// IMP=0x000000000023ee3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

