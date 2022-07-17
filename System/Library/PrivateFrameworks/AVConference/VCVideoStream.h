//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/AVCRateControllerDelegate-Protocol.h>
#import <AVConference/VCMediaStreamSyncDestination-Protocol.h>
#import <AVConference/VCRedundancyControllerDelegate-Protocol.h>
#import <AVConference/VCStreamSychronizationDelegate-Protocol.h>
#import <AVConference/VCVideoCaptureClient-Protocol.h>
#import <AVConference/VCVideoCaptureConverterDelegate-Protocol.h>
#import <AVConference/VCVideoReceiverDelegate-Protocol.h>
#import <AVConference/VCVideoSink-Protocol.h>

@class AVCRateController, AVCStatisticsCollector, NSNumber, NSObject, NSString, VCRedundancyControllerVideo, VCVideoCaptureConverter, VCVideoReceiverBase, VCVideoRule, VCVideoTransmitterBase;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, VCSessionParticipantLocalVideoStreamDelegate, VCVideoReceiverFeedbackDelegate;

__attribute__((visibility("hidden")))
@interface VCVideoStream <VCVideoReceiverDelegate, VCMediaStreamSyncDestination, VCVideoSink, VCVideoCaptureClient, VCVideoCaptureConverterDelegate, AVCRateControllerDelegate, VCRedundancyControllerDelegate, VCStreamSychronizationDelegate>
{
    long long _type;	// 520 = 0x208
    NSObject<OS_dispatch_queue> *_lastDecodedFrameQueue;	// 528 = 0x210
    struct _opaque_pthread_mutex_t _remoteLayerLock;	// 536 = 0x218
    struct _opaque_pthread_mutex_t _localLayerLock;	// 600 = 0x258
    unsigned int _uplinkOperatingBitrate;	// 664 = 0x298
    struct __CVBuffer *_cachedRemoteVideoFrame;	// 672 = 0x2a0
    VCVideoTransmitterBase *_videoTransmitter;	// 680 = 0x2a8
    VCVideoReceiverBase *_videoReceiver;	// 688 = 0x2b0
    VCVideoRule *_videoRule;	// 696 = 0x2b8
    int _reportingModuleID;	// 704 = 0x2c0
    unsigned int _reportingDefaultRealtimePeriod;	// 708 = 0x2c4
    NSObject<OS_dispatch_semaphore> *_bufferQueueSemaphore;	// 712 = 0x2c8
    struct opaqueCMBufferQueue *_bufferQueue;	// 720 = 0x2d0
    VCVideoCaptureConverter *_captureConverter;	// 728 = 0x2d8
    _Bool _isServerBasedBandwidthProbingEnabled;	// 736 = 0x2e0
    unsigned char _lastMediaPriority;	// 737 = 0x2e1
    NSNumber *_targetStreamID;	// 744 = 0x2e8
    NSNumber *_sendingStreamID;	// 752 = 0x2f0
    _Bool _isCompoundStreamIDsIncreased;	// 760 = 0x2f8
    _Bool _shouldEnableFaceZoom;	// 761 = 0x2f9
    _Bool _shouldEnableMLEnhance;	// 762 = 0x2fa
    _Bool _didReceiveFirstFrame;	// 763 = 0x2fb
    _Atomic _Bool _isVideoCaptureRegistered;	// 764 = 0x2fc
    double _fecRatio;	// 768 = 0x300
    int _captureSource;	// 776 = 0x308
    unsigned int _screenDisplayID;	// 780 = 0x30c
    unsigned int _customWidth;	// 784 = 0x310
    unsigned int _customHeight;	// 788 = 0x314
    unsigned int _tilesPerFrame;	// 792 = 0x318
    unsigned int _initialTargetBitrate;	// 796 = 0x31c
    struct OpaqueFigCFWeakReference *_weakStream;	// 800 = 0x320
    AVCRateController *_vcrcRateController;	// 808 = 0x328
    AVCStatisticsCollector *_statisticsCollector;	// 816 = 0x330
    VCRedundancyControllerVideo *_redundancyController;	// 824 = 0x338
    int _lastDisplayedFromImageQueueCount;	// 832 = 0x340
    int _lastDroppedFromImageQueueCount;	// 836 = 0x344
    double _lastDecodedVideoFrameTime;	// 840 = 0x348
    double _lastStatisticsCollectorVideoStallTotalUpdateTime;	// 848 = 0x350
    _Bool _isRemoteMediaStalled;	// 856 = 0x358
    double _lastMediaStallReportTime;	// 864 = 0x360
    int _networkInterfaceType;	// 872 = 0x368
    int _channelSequenceCountWithInactiveSlots;	// 876 = 0x36c
    float _synchronizationTimeOffset;	// 880 = 0x370
    unsigned int _rtpTimestampRate;	// 884 = 0x374
    unsigned int _rttScaleFactor;	// 888 = 0x378
    unsigned short _temporalScalingBaseLayerStreamID;	// 892 = 0x37c
    _Bool _isTemporalScalingEnabled;	// 894 = 0x37e
    CDStruct_1b6d18a9 _lastSentFrameHostTimeBeforeStop;	// 896 = 0x380
    unsigned int _lastSentFrameRTPTimestampBeforeStop;	// 920 = 0x398
    id <VCSessionParticipantLocalVideoStreamDelegate> _videoStreamDelegate;	// 928 = 0x3a0
}

+ (id)capabilities;	// IMP=0x000000000030f50e
+ (id)supportedVideoPayloads;	// IMP=0x000000000030f501
+ (_Bool)shouldUseRandomRTPTimestampWithType:(long long)arg1;	// IMP=0x000000000030eda5
+ (id)newFeatureListStringsWithConfiguration:(id)arg1;	// IMP=0x000000000030ca5a
@property(nonatomic) id <VCSessionParticipantLocalVideoStreamDelegate> videoStreamDelegate; // @synthesize videoStreamDelegate=_videoStreamDelegate;
@property(readonly, nonatomic) _Bool isTemporalScalingEnabled; // @synthesize isTemporalScalingEnabled=_isTemporalScalingEnabled;
@property(readonly) VCVideoTransmitterBase *videoTransmitter; // @synthesize videoTransmitter=_videoTransmitter;
@property(readonly) VCVideoReceiverBase *videoReceiver; // @synthesize videoReceiver=_videoReceiver;
@property(nonatomic) unsigned int customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) unsigned int customWidth; // @synthesize customWidth=_customWidth;
@property(nonatomic) unsigned int screenDisplayID; // @synthesize screenDisplayID=_screenDisplayID;
@property(nonatomic) double fecRatio; // @synthesize fecRatio=_fecRatio;
@property(nonatomic) _Bool didReceiveFirstFrame; // @synthesize didReceiveFirstFrame=_didReceiveFirstFrame;
@property(nonatomic) _Bool shouldEnableMLEnhance; // @synthesize shouldEnableMLEnhance=_shouldEnableMLEnhance;
@property(nonatomic) _Bool shouldEnableFaceZoom; // @synthesize shouldEnableFaceZoom=_shouldEnableFaceZoom;
@property(readonly, nonatomic) _Bool isCompoundStreamIDsIncreased; // @synthesize isCompoundStreamIDsIncreased=_isCompoundStreamIDsIncreased;
@property(readonly, nonatomic) NSNumber *sendingStreamID; // @synthesize sendingStreamID=_sendingStreamID;
@property(nonatomic) _Bool isServerBasedBandwidthProbingEnabled; // @synthesize isServerBasedBandwidthProbingEnabled=_isServerBasedBandwidthProbingEnabled;
@property(retain, nonatomic) NSNumber *targetStreamID; // @synthesize targetStreamID=_targetStreamID;
- (void)updateWindowState:(int)arg1 isLocal:(_Bool)arg2 windowRect:(struct CGRect)arg3;	// IMP=0x000000000031a4cd
@property(nonatomic) float synchronizationTimeOffset;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x000000000031a4a3
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x000000000031a45a
- (void)rateController:(id)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;	// IMP=0x000000000031a1cb
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x000000000031a112
- (void)collectTxChannelMetrics:(CDStruct_4c7d81d2 *)arg1;	// IMP=0x000000000031a0e3
- (void)collectRxChannelMetrics:(CDStruct_4c7d81d2 *)arg1;	// IMP=0x000000000031a0b4
- (void)collectRxChannelMetrics:(CDStruct_4c7d81d2 *)arg1 interval:(float)arg2;	// IMP=0x000000000031a097
- (void)converter:(id)arg1 didConvertFrame:(struct opaqueCMSampleBuffer *)arg2 frameTime:(CDStruct_1b6d18a9)arg3 cameraStatusBits:(unsigned char)arg4;	// IMP=0x0000000000319e62
- (void)cameraAvailabilityDidChange:(_Bool)arg1;	// IMP=0x0000000000319da7
- (void)thermalLevelDidChange:(int)arg1;	// IMP=0x0000000000319b6b
- (id)clientCaptureRule;	// IMP=0x0000000000319b5a
- (void)avConferenceScreenCaptureError:(id)arg1;	// IMP=0x00000000003199c5
- (void)avConferencePreviewError:(id)arg1;	// IMP=0x0000000000319830
- (void)sourceFrameRateDidChange:(unsigned int)arg1;	// IMP=0x0000000000319813
- (_Bool)onVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 attribute:(CDStruct_51555cf6)arg3;	// IMP=0x000000000031978e
- (void)vcVideoReceiver:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;	// IMP=0x000000000031965c
- (unsigned int)vcVideoReceiver:(id)arg1 receivedTMMBR:(unsigned int)arg2;	// IMP=0x00000000003194b4
- (void)vcVideoReceiver:(id)arg1 downlinkQualityDidChange:(id)arg2;	// IMP=0x000000000031939d
- (void)vcVideoReceiverRequestKeyFrame:(id)arg1 rtcpPSFBType:(unsigned int)arg2;	// IMP=0x0000000000318f22
- (void)vcVideoReceiver:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 firType:(int)arg3;	// IMP=0x0000000000318c93
- (_Bool)videoReceiver:(id)arg1 didReceiveRemoteFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_1b6d18a9)arg3 remoteVideoAttributes:(id)arg4 remoteScreenAttributes:(id)arg5 isFirstFrame:(_Bool)arg6;	// IMP=0x0000000000318c8b
- (_Bool)vcVideoReceiver:(id)arg1 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 isFirstFrame:(_Bool)arg3;	// IMP=0x00000000003189fd
@property(nonatomic, getter=getVideoReceiverFeedbackDelegate) id <VCVideoReceiverFeedbackDelegate> videoReceiverFeedbackDelegate;
- (void)stopSynchronization;	// IMP=0x00000000003189b2
- (_Bool)startSynchronization:(id)arg1;	// IMP=0x0000000000318995
- (void)reportingAlgosVideoStreamEvent:(unsigned short)arg1;	// IMP=0x00000000003188a0
- (void)reportingVideoStreamEvent:(unsigned short)arg1 newVideoAttributes:(id)arg2 currentStreamID:(id)arg3;	// IMP=0x0000000000318583
- (void)reportingVideoStreamEvent:(unsigned short)arg1 newVideoAttributes:(id)arg2;	// IMP=0x000000000031856e
- (void)reportingVideoStreamEvent:(unsigned short)arg1;	// IMP=0x000000000031855a
- (void)collectVideoStreamStartMetrics:(struct __CFDictionary *)arg1;	// IMP=0x0000000000317baa
- (void)collectVideoConfigMetrics:(struct __CFDictionary *)arg1;	// IMP=0x0000000000317871
- (struct __CFDictionary *)getClientSpecificUserInfo;	// IMP=0x00000000003173e9
- (int)reportVideoStreamType;	// IMP=0x000000000031737c
- (struct __CFString *)getReportingClientName;	// IMP=0x00000000003172ff
- (int)getReportingClientType;	// IMP=0x00000000003172be
- (void)handleVTPSendFailedWithData:(void *)arg1;	// IMP=0x0000000000317251
@property(nonatomic) unsigned int targetBitrateChangeCounter;
@property(nonatomic) unsigned int targetMediaBitrate;
@property unsigned int lastSentAudioSampleTime;
@property double lastSentAudioHostTime;
- (void)setPeerSubscribedStreamIDs:(id)arg1;	// IMP=0x0000000000316983
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;	// IMP=0x00000000003164fe
- (void)setTransmitterStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;	// IMP=0x0000000000315e12
- (unsigned int)getMaxTemporalBitrateForStreamIDs:(id)arg1;	// IMP=0x0000000000315a99
- (double)rtcpHeartbeatLeeway;	// IMP=0x0000000000315a8b
- (void)onSendRTCPPacket;	// IMP=0x00000000003159a8
- (void)onRTCPTimeout;	// IMP=0x0000000000315991
- (void)onRTPTimeout;	// IMP=0x000000000031597a
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003157e1
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000315648
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000315395
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000314c55
- (_Bool)isTransportIPv6;	// IMP=0x0000000000314b51
@property(readonly) unsigned int networkMTU;
- (void)reportTransportInfo;	// IMP=0x0000000000314982
- (void)initializeInterfaceType;	// IMP=0x00000000003148dc
- (void)initializeInterfaceTypeForSocket;	// IMP=0x000000000031477a
- (void)initializeInterfaceTypeForNWConnection;	// IMP=0x00000000003144e4
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;	// IMP=0x0000000000314479
- (void)setupReportingAgent;	// IMP=0x0000000000313fcd
- (void)collectChannelSequenceMetrics:(id)arg1;	// IMP=0x0000000000313d27
- (void)collectImageQueuePerformanceMetrics:(struct __CFDictionary *)arg1;	// IMP=0x0000000000313d21
- (_Bool)registerForVideoCapture;	// IMP=0x00000000003139c7
- (void)deregisterForVideoCapture;	// IMP=0x00000000003139b5
- (int)operatingModeForVideoStreamType:(long long)arg1;	// IMP=0x0000000000313995
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000312332
- (id)getReceiveStatsCollectorWithStreamConfig:(id)arg1;	// IMP=0x000000000031229f
- (id)getTransmitStatsCollectorWithStreamConfig:(id)arg1;	// IMP=0x0000000000312242
- (id)getTransmitMediaControllerWithStreamConfig:(id)arg1;	// IMP=0x00000000003121f4
- (void)onCallIDChanged;	// IMP=0x00000000003121ee
- (id)supportedPayloads;	// IMP=0x00000000003121d5
- (_Bool)updateStreamConfigForAirPlaySidecar:(id)arg1;	// IMP=0x0000000000312030
- (_Bool)setEncodingMode:(int)arg1;	// IMP=0x0000000000311f0b
- (_Bool)validateStreamConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000311b74
@property(readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
- (void)cleanupBeforeReconfigure:(id)arg1;	// IMP=0x0000000000310f65
- (_Bool)validateVideoStreamConfigurations:(id)arg1;	// IMP=0x0000000000310e51
- (void)sendLastRemoteVideoFrame:(struct __CVBuffer *)arg1;	// IMP=0x0000000000310dff
- (void)cacheRemoteVideoFrame:(struct __CVBuffer *)arg1;	// IMP=0x0000000000310d38
- (void)setFECRedundancyVector:(const CDStruct_d7e2e0ee *)arg1;	// IMP=0x0000000000310d1b
- (void)generateKeyFrameWithFIRType:(int)arg1;	// IMP=0x000000000031090a
- (void)updateSourcePlayoutTimestamp:(CDStruct_1b6d18a9 *)arg1;	// IMP=0x0000000000310551
- (void)resetRemoteMediaStalled;	// IMP=0x00000000003104cf
- (void)submitStatisticsCollectorVideoStallUpdateWithType:(int)arg1 currentTime:(double)arg2 stallDuration:(double)arg3 idsParticipantID:(unsigned long long)arg4;	// IMP=0x0000000000310377
- (void)submitStatisticsCollectorVideoStallUpdateWithTime:(double)arg1;	// IMP=0x00000000003100d7
- (void)requestLastDecodedFrame;	// IMP=0x000000000030feec
- (void)updateVideoConfig:(id)arg1;	// IMP=0x000000000030f6c5
- (void)dealloc;	// IMP=0x000000000030f2aa
- (void)setupVideoStream;	// IMP=0x000000000030ef2b
- (id)initWithTransportSessionID:(unsigned int)arg1 ssrc:(unsigned int)arg2 streamToken:(long long)arg3;	// IMP=0x000000000030ee7c
- (id)init;	// IMP=0x000000000030ee0d
- (double)lastReceivedRTCPPacketTime;	// IMP=0x000000000030edf0
- (double)lastReceivedRTPPacketTime;	// IMP=0x000000000030edd3
- (_Bool)setRTPPayloads:(int *)arg1 numPayloads:(int)arg2 withError:(id *)arg3;	// IMP=0x000000000030edcb
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion *)arg1;	// IMP=0x000000000030ed88
- (void)handleNWConnectionPacketEvent:(struct packet_id *)arg1 eventType:(int)arg2;	// IMP=0x000000000030ed3d
- (void)handleNWConnectionNotification:(struct ifnet_interface_advisory *)arg1;	// IMP=0x000000000030ed01
- (void)stopVCRC;	// IMP=0x000000000030ec99
- (void)startVCRCWithStreamConfig:(id)arg1;	// IMP=0x000000000030eb31
- (void)setupCompoundStreamIDsWithStreamIDs:(id)arg1;	// IMP=0x000000000030e877
- (void)destroyVideoModules;	// IMP=0x000000000030e778
- (void)destroyVideoReceiver;	// IMP=0x000000000030e65a
- (void)updateVideoReceiver:(id)arg1;	// IMP=0x000000000030e429
- (_Bool)useUEPForVideoConfig:(int)arg1;	// IMP=0x000000000030e36f
- (void)setupVideoReceiver:(id)arg1 withTransmitterHandle:(struct tagHANDLE *)arg2;	// IMP=0x000000000030dda0
- (struct tagVCVideoReceiverConfig)videoReceiverConfigWithVideoStreamConfig:(id)arg1;	// IMP=0x000000000030d372
- (struct tagVCVideoStreamReceiverConfig)videoStreamReceiverConfigWithDumpID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;	// IMP=0x000000000030d2c5
- (void)cleaunpReceiverConfig:(struct tagVCVideoReceiverConfig *)arg1;	// IMP=0x000000000030d27b
- (void)setupFeatureListStringsForReceiverConfig:(struct tagVCVideoReceiverConfig *)arg1 streamConfig:(id)arg2;	// IMP=0x000000000030d0d7
- (void)setupMultiwayVideoReceiverConfig:(struct tagVCVideoReceiverConfig *)arg1 forTransportStream:(id)arg2;	// IMP=0x000000000030cd8d
- (void)setupMultiwayVideoReceiverStreamSwitchInfo:(struct tagVCVideoReceiverStreamConfig *)arg1 forTransportStream:(id)arg2;	// IMP=0x000000000030cc6a
- (void)setupMultiwayVideoReceiverTemporalScalingConfig:(struct tagVCVideoReceiverStreamConfig *)arg1 forTransportStream:(id)arg2;	// IMP=0x000000000030cb9c
- (_Bool)isScreenConfig:(id)arg1;	// IMP=0x000000000030cb11
- (void)destroyVideoTransmitter;	// IMP=0x000000000030c934
- (void)initVideoTransmitter;	// IMP=0x000000000030c33b
- (_Bool)isFECGeneratorEnabled;	// IMP=0x000000000030c1cd
- (id)newVideoTransmitterConfigWithVideoStreamConfig:(id)arg1;	// IMP=0x000000000030b3d0
- (void)overrideConfigWithDefaults;	// IMP=0x000000000030b254

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
