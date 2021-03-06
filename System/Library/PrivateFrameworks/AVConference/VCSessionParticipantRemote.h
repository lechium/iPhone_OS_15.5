//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCSessionDownlinkBandwidthAllocatorClient-Protocol.h>

@class NSArray, NSMutableDictionary, NSNumber, NSObject, NSString, TimingCollection, VCPositionalInfo, VCSessionBandwidthAllocationTable, VCSessionParticipantMediaStreamInfo;
@protocol OS_dispatch_source, OS_nw_activity;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantRemote <VCSessionDownlinkBandwidthAllocatorClient>
{
    NSNumber *_optedInAudioStreamID;	// 360 = 0x168
    _Bool _remoteVideoEnabled;	// 368 = 0x170
    _Bool _remoteScreenEnabled;	// 369 = 0x171
    _Bool _remoteVideoPaused;	// 370 = 0x172
    _Bool _remoteSystemAudioPaused;	// 371 = 0x173
    _Bool _receivedFirstFrame;	// 372 = 0x174
    unsigned char _videoQuality;	// 373 = 0x175
    unsigned int _visibilityIndex;	// 376 = 0x178
    unsigned int _prominenceIndex;	// 380 = 0x17c
    VCSessionBandwidthAllocationTable *_mediaTable;	// 384 = 0x180
    VCSessionBandwidthAllocationTable *_repairMediaTable;	// 392 = 0x188
    unsigned char _lastVideoPriority;	// 400 = 0x190
    _Bool _isVideoDegraded;	// 401 = 0x191
    _Bool _isRedundancyRequested;	// 402 = 0x192
    _Bool _isRemoteMediaStalled;	// 403 = 0x193
    struct tagVCAudioStreamGroupPriorityInfo _mediaPriorityInfo;	// 404 = 0x194
    TimingCollection *_perfTimers;	// 440 = 0x1b8
    _Bool _haveReportedPerfTimers;	// 448 = 0x1c0
    _Bool _isMediaSuspended;	// 449 = 0x1c1
    _Bool _oneToOneVideoEnabled;	// 450 = 0x1c2
    struct _VCSessionParticipantSourceIO _sourceIO;	// 456 = 0x1c8
    struct _VCSessionParticipantCapabilities _capabilities;	// 544 = 0x220
    VCPositionalInfo *_positionalInfo;	// 560 = 0x230
    void *_spatialMetadataEntry;	// 568 = 0x238
    unsigned int _audioChannelIndex;	// 576 = 0x240
    NSObject<OS_nw_activity> *_nwActivity;	// 584 = 0x248
    NSObject<OS_nw_activity> *_participantPoorConnectionNwActivity;	// 592 = 0x250
    NSObject<OS_nw_activity> *_participantMediaStallNwActivity;	// 600 = 0x258
    double _lastVideoExpectationSwitch;	// 608 = 0x260
    _Bool _isVideoExpected;	// 616 = 0x268
    _Bool _isVideoJitterForPlayoutEnabled;	// 617 = 0x269
    _Bool _remoteAudioEnabled;	// 618 = 0x26a
    _Bool _remoteAudioPaused;	// 619 = 0x26b
    _Bool _remoteScreenEnabledStateChanged;	// 620 = 0x26c
    NSMutableDictionary *_jbSynchronizerPerSyncGroupID;	// 624 = 0x270
    NSObject<OS_dispatch_source> *_remoteStreamGroupStateUpdateTimer;	// 632 = 0x278
}

+ (unsigned int)maxVideoNetworkBitrateForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2 isRedundancyRequested:(_Bool)arg3;	// IMP=0x0000000000115cec
+ (unsigned int)maxAudioNetworkBitrateForLocalInterfaceOnWiFi:(_Bool)arg1 isLowLatencyAudio:(_Bool)arg2;	// IMP=0x0000000000115cd7
+ (_Bool)isDeviceLargeScreen;	// IMP=0x0000000000115ccf
@property(readonly, nonatomic) VCPositionalInfo *positionalInfo; // @synthesize positionalInfo=_positionalInfo;
@property(nonatomic) struct _VCSessionParticipantCapabilities capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic, getter=isRemoteScreenEnabled) _Bool remoteScreenEnabled; // @synthesize remoteScreenEnabled=_remoteScreenEnabled;
@property(nonatomic, getter=isRemoteAudioPaused) _Bool remoteAudioPaused; // @synthesize remoteAudioPaused=_remoteAudioPaused;
@property(nonatomic, getter=isRemoteVideoPaused) _Bool remoteVideoPaused; // @synthesize remoteVideoPaused=_remoteVideoPaused;
@property(nonatomic) unsigned int prominenceIndex; // @synthesize prominenceIndex=_prominenceIndex;
@property(nonatomic) unsigned int visibilityIndex; // @synthesize visibilityIndex=_visibilityIndex;
@property(nonatomic) unsigned char videoQuality; // @synthesize videoQuality=_videoQuality;
@property(nonatomic, getter=isRemoteAudioEnabled) _Bool remoteAudioEnabled; // @synthesize remoteAudioEnabled=_remoteAudioEnabled;
@property(nonatomic, getter=isRemoteVideoEnabled) _Bool remoteVideoEnabled; // @synthesize remoteVideoEnabled=_remoteVideoEnabled;
@property(retain, nonatomic) NSNumber *optedInAudioStreamID; // @synthesize optedInAudioStreamID=_optedInAudioStreamID;
- (void)updateAndHandleVideoMediaStall:(_Bool)arg1 isOneToOneStream:(_Bool)arg2;	// IMP=0x000000000011e130
- (void)vcMediaStream:(id)arg1 remoteMediaStalled:(_Bool)arg2 duration:(double)arg3;	// IMP=0x000000000011defa
- (void)updateVideoPriority:(unsigned char)arg1;	// IMP=0x000000000011de3c
- (void)debounceAudioPriority:(unsigned char)arg1;	// IMP=0x000000000011dba6
- (void)cancelAndReleaseFetchTimer;	// IMP=0x000000000011d9d5
- (void)createAndResumeFetchTimer;	// IMP=0x000000000011d383
- (_Bool)isSeamlessTransitionSupportedForStreamGroup:(id)arg1;	// IMP=0x000000000011d33c
- (void)updateSourcePlayoutTimestampWithSamples:(struct opaqueVCAudioBufferList *)arg1;	// IMP=0x000000000011d294
- (void)updateShouldEnableMLEnhance;	// IMP=0x000000000011d041
- (void)setSharingEnabled:(_Bool)arg1;	// IMP=0x000000000011cf9c
- (void)setShouldEnableFaceZoom:(_Bool)arg1;	// IMP=0x000000000011ce46
- (void)updateShouldEnableFaceZoom;	// IMP=0x000000000011cbe6
- (_Bool)setupStreamGroups;	// IMP=0x000000000011c8a2
- (void)setupJBTargetSynchronizers;	// IMP=0x000000000011c347
- (void)createJitterBufferTargetEstimatorSynchronizer:(struct tagVCJBTargetEstimatorSynchronizer **)arg1 syncGroupID:(unsigned int)arg2;	// IMP=0x000000000011c0ba
- (_Bool)shouldSetupStreamGroupWithID:(unsigned int)arg1;	// IMP=0x000000000011bf4a
- (_Bool)didNegotiateStreamGroupWithID:(unsigned int)arg1;	// IMP=0x000000000011be22
- (id)newCameraStreamGroupWithStreamGroupConfig:(id)arg1;	// IMP=0x000000000011ba86
- (id)newVideoStreamGroupWithStreamGroupConfig:(id)arg1;	// IMP=0x000000000011b848
- (_Bool)setupStreamGroupWithConfig:(id)arg1;	// IMP=0x000000000011ac7a
- (_Bool)updateStreamGroupWithOneToOneStreamConfig:(id)arg1;	// IMP=0x000000000011a81a
- (id)newMediaStreamWithNegotiationConfig:(id)arg1 streamToken:(long long)arg2;	// IMP=0x000000000011a73b
- (id)newStreamGroupConfigWithNegotiationConfig:(id)arg1;	// IMP=0x000000000011a161
- (void)setupMediaStreamGroupConfig:(id)arg1 withNegotiationConfig:(id)arg2;	// IMP=0x0000000000119f2b
- (id)newMediaStreamInfoWithNegotiationConfig:(id)arg1 streamToken:(long long)arg2;	// IMP=0x0000000000119683
- (id)newMediaStreamConfigWithStreamConfig:(id)arg1 streamGroupConfig:(id)arg2 maxIDSStreamIDCount:(unsigned int)arg3;	// IMP=0x00000000001193b0
- (_Bool)setupStreamConfigWithCodecs:(id)arg1 streamConfig:(id)arg2 codecConfigs:(id)arg3 featureStringsDict:(id)arg4;	// IMP=0x0000000000118d4f
- (id)newMediaStreamConfigWithStreamGroupConfig:(id)arg1 streamConfig:(id)arg2 rateControlConfig:(id)arg3 multiwayConfig:(id)arg4;	// IMP=0x00000000001185ac
- (_Bool)setupVideoStreamConfiguration:(id)arg1 withStreamGroupStreamConfig:(id)arg2 codecConfigs:(id)arg3 multiwayConfig:(id)arg4 groupID:(unsigned int)arg5;	// IMP=0x0000000000117fb5
- (id)newMultiwayConfigWithStreamGroupStreamConfig:(id)arg1 maxIDSStreamIDCount:(unsigned int)arg2 groupID:(unsigned int)arg3;	// IMP=0x0000000000117db8
- (void)updateVideoMultiwayConfig:(id)arg1 withStreamGroupStreamConfig:(id)arg2;	// IMP=0x0000000000117c51
- (_Bool)setupVideoStreamOneToOneConfigurations:(id)arg1;	// IMP=0x0000000000117a26
- (_Bool)setupScreenStreamOneToOneConfigurations:(id)arg1;	// IMP=0x00000000001177fb
- (void)updateScreenStreamConfigurationWithStreamGroupResult:(id)arg1 multiwayConfig:(id)arg2 screenStreamConfig:(id)arg3;	// IMP=0x000000000011764d
@property(readonly, nonatomic) _Bool isVideoExpected;
- (void)setMediaSuspended:(_Bool)arg1 forStreamToken:(id)arg2;	// IMP=0x000000000011739a
@property(readonly) _Bool isVisible;
@property(readonly) NSArray *mediaEntries;
- (void)validateMediaEntries:(id)arg1;	// IMP=0x00000000001169b0
- (void)appendStreamGroupsMediaEntries:(id)arg1;	// IMP=0x00000000001161fb
- (unsigned char)cappedVideoQualityWithShouldLimitCameraQualityForPIP:(_Bool)arg1;	// IMP=0x0000000000115fa4
- (void)appendStreamGroup:(id)arg1 maxBitrate:(unsigned int)arg2 mediaEntries:(id)arg3;	// IMP=0x0000000000115dcb
- (void)setRemoteMediaStalled:(_Bool)arg1;	// IMP=0x0000000000115aab
- (void)setVideoDegraded:(_Bool)arg1;	// IMP=0x0000000000115675
- (void)pushEventToNwActivity:(long long)arg1 started:(_Bool)arg2;	// IMP=0x000000000011531c
- (void)collectAudioChannelMetrics:(CDStruct_4c7d81d2 *)arg1;	// IMP=0x0000000000115150
- (void)collectVideoChannelMetrics:(CDStruct_4c7d81d2 *)arg1;	// IMP=0x0000000000114fb2
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x0000000000114fac
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x0000000000114912
- (void)didReceiveFirstFrameForStreamGroup:(id)arg1;	// IMP=0x00000000001148b1
- (unsigned int)optedInNetworkBitrateForStreamGroup:(unsigned int)arg1;	// IMP=0x0000000000114864
- (unsigned int)actualNetworkBitrateForStreamGroup:(unsigned int)arg1;	// IMP=0x0000000000114817
- (id)activeDownlinkStreamIDForStreamGroupID:(unsigned int)arg1;	// IMP=0x00000000001147ec
- (id)optedInStreamIDForStreamGroupID:(unsigned int)arg1;	// IMP=0x00000000001147c1
- (id)startScreenGroup;	// IMP=0x00000000001147b9
- (id)stopAudioStreams;	// IMP=0x00000000001147b1
- (id)startAudioIO;	// IMP=0x00000000001147a9
- (unsigned int)actualNetworkBitrateWithAudioBitrates:(id)arg1;	// IMP=0x00000000001145fc
- (void)setVideoStreamDelegate:(id)arg1;	// IMP=0x0000000000114131
- (void)setVideoReceiverFeedbackDelegate:(id)arg1;	// IMP=0x0000000000113e8a
- (_Bool)configureWithOneToOneParticipantConfig:(id)arg1 operatingMode:(int)arg2;	// IMP=0x0000000000113ca9
@property(readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
- (long long)participantMicrophoneToken;	// IMP=0x0000000000113b46
- (id)audioGroup;	// IMP=0x0000000000113ad5
- (id)videoGroup;	// IMP=0x0000000000113a79
- (id)screenGroup;	// IMP=0x0000000000113a1d
- (long long)participantScreenToken;	// IMP=0x00000000001139dd
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *screenStreamInfo;
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *videoStreamInfo;
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *audioStreamInfo;
- (_Bool)isScreenActive;	// IMP=0x00000000001138f9
- (void)updateAudioSpectrumState;	// IMP=0x0000000000113776
- (_Bool)isAudioActive;	// IMP=0x0000000000113731
- (void)negotiateAudioRules:(id)arg1;	// IMP=0x000000000011335f
- (id)recommendedStreamIDsForSelectedMediaEntries:(id)arg1 forceSeamlessTransition:(_Bool)arg2;	// IMP=0x0000000000112cd8
- (void)appendOptedInStreamID:(id)arg1 toOptInStreamsIDs:(id)arg2 targetBandwidthEntry:(id)arg3 forceSeamlessTransition:(_Bool)arg4;	// IMP=0x00000000001129f3
@property(readonly, nonatomic) NSNumber *optedInVideoStreamID;
- (void)setActiveStreamIDs:(id)arg1;	// IMP=0x0000000000112744
- (void)setMuted:(_Bool)arg1;	// IMP=0x0000000000112663
- (id)getAudioDumpName;	// IMP=0x000000000011265b
- (id)entryForStreamID:(id)arg1;	// IMP=0x000000000011248c
- (_Bool)setupAudioStreamOneToOneConfigurations:(id)arg1;	// IMP=0x0000000000112279
- (_Bool)setupBandwidthAllocationTableForMediaStreamConfigs:(id)arg1 streamGroupID:(unsigned int)arg2 entryType:(unsigned char)arg3;	// IMP=0x0000000000111502
- (id)checkSubstreams:(id)arg1 forLowerQualityIndex:(unsigned int)arg2;	// IMP=0x00000000001113b8
- (_Bool)setupAudioStreamConfiguration:(id)arg1 withStreamGroupConfig:(id)arg2 streamGroupStreamConfig:(id)arg3;	// IMP=0x0000000000110d79
- (_Bool)isStreamGroupActive:(id)arg1;	// IMP=0x0000000000110cd6
- (void)cleanupNwActivity;	// IMP=0x0000000000110c18
- (void)completeAndReleaseNwActivity:(id)arg1 withReason:(int)arg2;	// IMP=0x0000000000110bf7
- (_Bool)configureAudioIOWithDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x000000000011010b
- (id)setupStreamRTP:(id)arg1;	// IMP=0x00000000001100f6
- (_Bool)isParticipantPeace:(id)arg1;	// IMP=0x000000000010ffaa
- (_Bool)supportsGFTSwitchToOneToOne;	// IMP=0x000000000010fb20
- (_Bool)processParticipantInfo;	// IMP=0x000000000010f1d0
- (void)updateOneToOneAudioPositionalInfo:(const struct tagVCSpatialAudioMetadataPositionalInfo *)arg1;	// IMP=0x000000000010f1b8
- (_Bool)isInCanvas;	// IMP=0x000000000010f19b
- (void)updatePositionalInfo:(id)arg1 shouldReapply:(_Bool)arg2;	// IMP=0x000000000010f004
- (void)updateDownlinkBandwithAllocatorClientConfigurations:(id)arg1;	// IMP=0x000000000010eb3b
- (id)applyVideoEnabledSetting:(_Bool)arg1;	// IMP=0x000000000010e7fa
- (void)setRemoteStreamGroupState:(unsigned int)arg1 forStreamGroup:(unsigned int)arg2;	// IMP=0x000000000010e1f0
- (void)setTransitionToDisabled:(unsigned int)arg1;	// IMP=0x000000000010e169
- (void)setTransitionToPaused:(unsigned int)arg1;	// IMP=0x000000000010e056
- (void)setTransitionToEnabled:(unsigned int)arg1;	// IMP=0x000000000010df60
- (void)setRemoteSystemAudioPaused:(_Bool)arg1;	// IMP=0x000000000010dad4
- (void)setVideoPaused:(_Bool)arg1;	// IMP=0x000000000010cb39
- (void)setAudioPaused:(_Bool)arg1;	// IMP=0x000000000010c1d7
- (void)onPauseAudioStreams;	// IMP=0x000000000010c1c5
- (void)onDidResumeAudio;	// IMP=0x000000000010c1b3
- (void)onStartAudioIO;	// IMP=0x000000000010bfff
- (void)stopAudioIOCompletion;	// IMP=0x000000000010bfc4
- (void)cleanupSpatialAudio;	// IMP=0x000000000010bf8a
- (int)setupSpatialAudioWithMetadata:(void *)arg1;	// IMP=0x000000000010bdda
- (void)stop;	// IMP=0x000000000010bd2c
- (void)start;	// IMP=0x000000000010bc7e
- (void)dealloc;	// IMP=0x000000000010bb18
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000010a6c6

// Remaining properties
@property(readonly) NSString *uuid;

@end

